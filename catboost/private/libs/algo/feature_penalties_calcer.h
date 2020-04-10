#pragma once

#include "tensor_search_helpers.h"

#include <catboost/private/libs/options/feature_penalties_options.h>

#include <catboost/libs/data/data_provider.h>


class TFold;


namespace NCB {
    void AddFeaturePenaltiesToBestSplits(
        TLearnContext* ctx,
        const TTrainingForCPUDataProviders& trainingData,
        const TFold& fold,
        ui32 oneHotMaxSize,
        TVector<TCandidateInfo>* candidates
    );
}
