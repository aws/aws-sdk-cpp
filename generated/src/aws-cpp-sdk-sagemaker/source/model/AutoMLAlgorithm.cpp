/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLAlgorithm.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace AutoMLAlgorithmMapper
      {

        static const int xgboost_HASH = HashingUtils::HashString("xgboost");
        static const int linear_learner_HASH = HashingUtils::HashString("linear-learner");
        static const int mlp_HASH = HashingUtils::HashString("mlp");
        static const int lightgbm_HASH = HashingUtils::HashString("lightgbm");
        static const int catboost_HASH = HashingUtils::HashString("catboost");
        static const int randomforest_HASH = HashingUtils::HashString("randomforest");
        static const int extra_trees_HASH = HashingUtils::HashString("extra-trees");
        static const int nn_torch_HASH = HashingUtils::HashString("nn-torch");
        static const int fastai_HASH = HashingUtils::HashString("fastai");
        static const int cnn_qr_HASH = HashingUtils::HashString("cnn-qr");
        static const int deepar_HASH = HashingUtils::HashString("deepar");
        static const int prophet_HASH = HashingUtils::HashString("prophet");
        static const int npts_HASH = HashingUtils::HashString("npts");
        static const int arima_HASH = HashingUtils::HashString("arima");
        static const int ets_HASH = HashingUtils::HashString("ets");


        AutoMLAlgorithm GetAutoMLAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == xgboost_HASH)
          {
            return AutoMLAlgorithm::xgboost;
          }
          else if (hashCode == linear_learner_HASH)
          {
            return AutoMLAlgorithm::linear_learner;
          }
          else if (hashCode == mlp_HASH)
          {
            return AutoMLAlgorithm::mlp;
          }
          else if (hashCode == lightgbm_HASH)
          {
            return AutoMLAlgorithm::lightgbm;
          }
          else if (hashCode == catboost_HASH)
          {
            return AutoMLAlgorithm::catboost;
          }
          else if (hashCode == randomforest_HASH)
          {
            return AutoMLAlgorithm::randomforest;
          }
          else if (hashCode == extra_trees_HASH)
          {
            return AutoMLAlgorithm::extra_trees;
          }
          else if (hashCode == nn_torch_HASH)
          {
            return AutoMLAlgorithm::nn_torch;
          }
          else if (hashCode == fastai_HASH)
          {
            return AutoMLAlgorithm::fastai;
          }
          else if (hashCode == cnn_qr_HASH)
          {
            return AutoMLAlgorithm::cnn_qr;
          }
          else if (hashCode == deepar_HASH)
          {
            return AutoMLAlgorithm::deepar;
          }
          else if (hashCode == prophet_HASH)
          {
            return AutoMLAlgorithm::prophet;
          }
          else if (hashCode == npts_HASH)
          {
            return AutoMLAlgorithm::npts;
          }
          else if (hashCode == arima_HASH)
          {
            return AutoMLAlgorithm::arima;
          }
          else if (hashCode == ets_HASH)
          {
            return AutoMLAlgorithm::ets;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoMLAlgorithm>(hashCode);
          }

          return AutoMLAlgorithm::NOT_SET;
        }

        Aws::String GetNameForAutoMLAlgorithm(AutoMLAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case AutoMLAlgorithm::NOT_SET:
            return {};
          case AutoMLAlgorithm::xgboost:
            return "xgboost";
          case AutoMLAlgorithm::linear_learner:
            return "linear-learner";
          case AutoMLAlgorithm::mlp:
            return "mlp";
          case AutoMLAlgorithm::lightgbm:
            return "lightgbm";
          case AutoMLAlgorithm::catboost:
            return "catboost";
          case AutoMLAlgorithm::randomforest:
            return "randomforest";
          case AutoMLAlgorithm::extra_trees:
            return "extra-trees";
          case AutoMLAlgorithm::nn_torch:
            return "nn-torch";
          case AutoMLAlgorithm::fastai:
            return "fastai";
          case AutoMLAlgorithm::cnn_qr:
            return "cnn-qr";
          case AutoMLAlgorithm::deepar:
            return "deepar";
          case AutoMLAlgorithm::prophet:
            return "prophet";
          case AutoMLAlgorithm::npts:
            return "npts";
          case AutoMLAlgorithm::arima:
            return "arima";
          case AutoMLAlgorithm::ets:
            return "ets";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoMLAlgorithmMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
