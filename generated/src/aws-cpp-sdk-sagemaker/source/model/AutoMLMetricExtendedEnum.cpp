/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLMetricExtendedEnum.h>
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
      namespace AutoMLMetricExtendedEnumMapper
      {

        static const int Accuracy_HASH = HashingUtils::HashString("Accuracy");
        static const int MSE_HASH = HashingUtils::HashString("MSE");
        static const int F1_HASH = HashingUtils::HashString("F1");
        static const int F1macro_HASH = HashingUtils::HashString("F1macro");
        static const int AUC_HASH = HashingUtils::HashString("AUC");
        static const int RMSE_HASH = HashingUtils::HashString("RMSE");
        static const int MAE_HASH = HashingUtils::HashString("MAE");
        static const int R2_HASH = HashingUtils::HashString("R2");
        static const int BalancedAccuracy_HASH = HashingUtils::HashString("BalancedAccuracy");
        static const int Precision_HASH = HashingUtils::HashString("Precision");
        static const int PrecisionMacro_HASH = HashingUtils::HashString("PrecisionMacro");
        static const int Recall_HASH = HashingUtils::HashString("Recall");
        static const int RecallMacro_HASH = HashingUtils::HashString("RecallMacro");
        static const int LogLoss_HASH = HashingUtils::HashString("LogLoss");
        static const int InferenceLatency_HASH = HashingUtils::HashString("InferenceLatency");
        static const int MAPE_HASH = HashingUtils::HashString("MAPE");
        static const int MASE_HASH = HashingUtils::HashString("MASE");
        static const int WAPE_HASH = HashingUtils::HashString("WAPE");
        static const int AverageWeightedQuantileLoss_HASH = HashingUtils::HashString("AverageWeightedQuantileLoss");
        static const int Rouge1_HASH = HashingUtils::HashString("Rouge1");
        static const int Rouge2_HASH = HashingUtils::HashString("Rouge2");
        static const int RougeL_HASH = HashingUtils::HashString("RougeL");
        static const int RougeLSum_HASH = HashingUtils::HashString("RougeLSum");
        static const int Perplexity_HASH = HashingUtils::HashString("Perplexity");
        static const int ValidationLoss_HASH = HashingUtils::HashString("ValidationLoss");
        static const int TrainingLoss_HASH = HashingUtils::HashString("TrainingLoss");


        AutoMLMetricExtendedEnum GetAutoMLMetricExtendedEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Accuracy_HASH)
          {
            return AutoMLMetricExtendedEnum::Accuracy;
          }
          else if (hashCode == MSE_HASH)
          {
            return AutoMLMetricExtendedEnum::MSE;
          }
          else if (hashCode == F1_HASH)
          {
            return AutoMLMetricExtendedEnum::F1;
          }
          else if (hashCode == F1macro_HASH)
          {
            return AutoMLMetricExtendedEnum::F1macro;
          }
          else if (hashCode == AUC_HASH)
          {
            return AutoMLMetricExtendedEnum::AUC;
          }
          else if (hashCode == RMSE_HASH)
          {
            return AutoMLMetricExtendedEnum::RMSE;
          }
          else if (hashCode == MAE_HASH)
          {
            return AutoMLMetricExtendedEnum::MAE;
          }
          else if (hashCode == R2_HASH)
          {
            return AutoMLMetricExtendedEnum::R2;
          }
          else if (hashCode == BalancedAccuracy_HASH)
          {
            return AutoMLMetricExtendedEnum::BalancedAccuracy;
          }
          else if (hashCode == Precision_HASH)
          {
            return AutoMLMetricExtendedEnum::Precision;
          }
          else if (hashCode == PrecisionMacro_HASH)
          {
            return AutoMLMetricExtendedEnum::PrecisionMacro;
          }
          else if (hashCode == Recall_HASH)
          {
            return AutoMLMetricExtendedEnum::Recall;
          }
          else if (hashCode == RecallMacro_HASH)
          {
            return AutoMLMetricExtendedEnum::RecallMacro;
          }
          else if (hashCode == LogLoss_HASH)
          {
            return AutoMLMetricExtendedEnum::LogLoss;
          }
          else if (hashCode == InferenceLatency_HASH)
          {
            return AutoMLMetricExtendedEnum::InferenceLatency;
          }
          else if (hashCode == MAPE_HASH)
          {
            return AutoMLMetricExtendedEnum::MAPE;
          }
          else if (hashCode == MASE_HASH)
          {
            return AutoMLMetricExtendedEnum::MASE;
          }
          else if (hashCode == WAPE_HASH)
          {
            return AutoMLMetricExtendedEnum::WAPE;
          }
          else if (hashCode == AverageWeightedQuantileLoss_HASH)
          {
            return AutoMLMetricExtendedEnum::AverageWeightedQuantileLoss;
          }
          else if (hashCode == Rouge1_HASH)
          {
            return AutoMLMetricExtendedEnum::Rouge1;
          }
          else if (hashCode == Rouge2_HASH)
          {
            return AutoMLMetricExtendedEnum::Rouge2;
          }
          else if (hashCode == RougeL_HASH)
          {
            return AutoMLMetricExtendedEnum::RougeL;
          }
          else if (hashCode == RougeLSum_HASH)
          {
            return AutoMLMetricExtendedEnum::RougeLSum;
          }
          else if (hashCode == Perplexity_HASH)
          {
            return AutoMLMetricExtendedEnum::Perplexity;
          }
          else if (hashCode == ValidationLoss_HASH)
          {
            return AutoMLMetricExtendedEnum::ValidationLoss;
          }
          else if (hashCode == TrainingLoss_HASH)
          {
            return AutoMLMetricExtendedEnum::TrainingLoss;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoMLMetricExtendedEnum>(hashCode);
          }

          return AutoMLMetricExtendedEnum::NOT_SET;
        }

        Aws::String GetNameForAutoMLMetricExtendedEnum(AutoMLMetricExtendedEnum enumValue)
        {
          switch(enumValue)
          {
          case AutoMLMetricExtendedEnum::NOT_SET:
            return {};
          case AutoMLMetricExtendedEnum::Accuracy:
            return "Accuracy";
          case AutoMLMetricExtendedEnum::MSE:
            return "MSE";
          case AutoMLMetricExtendedEnum::F1:
            return "F1";
          case AutoMLMetricExtendedEnum::F1macro:
            return "F1macro";
          case AutoMLMetricExtendedEnum::AUC:
            return "AUC";
          case AutoMLMetricExtendedEnum::RMSE:
            return "RMSE";
          case AutoMLMetricExtendedEnum::MAE:
            return "MAE";
          case AutoMLMetricExtendedEnum::R2:
            return "R2";
          case AutoMLMetricExtendedEnum::BalancedAccuracy:
            return "BalancedAccuracy";
          case AutoMLMetricExtendedEnum::Precision:
            return "Precision";
          case AutoMLMetricExtendedEnum::PrecisionMacro:
            return "PrecisionMacro";
          case AutoMLMetricExtendedEnum::Recall:
            return "Recall";
          case AutoMLMetricExtendedEnum::RecallMacro:
            return "RecallMacro";
          case AutoMLMetricExtendedEnum::LogLoss:
            return "LogLoss";
          case AutoMLMetricExtendedEnum::InferenceLatency:
            return "InferenceLatency";
          case AutoMLMetricExtendedEnum::MAPE:
            return "MAPE";
          case AutoMLMetricExtendedEnum::MASE:
            return "MASE";
          case AutoMLMetricExtendedEnum::WAPE:
            return "WAPE";
          case AutoMLMetricExtendedEnum::AverageWeightedQuantileLoss:
            return "AverageWeightedQuantileLoss";
          case AutoMLMetricExtendedEnum::Rouge1:
            return "Rouge1";
          case AutoMLMetricExtendedEnum::Rouge2:
            return "Rouge2";
          case AutoMLMetricExtendedEnum::RougeL:
            return "RougeL";
          case AutoMLMetricExtendedEnum::RougeLSum:
            return "RougeLSum";
          case AutoMLMetricExtendedEnum::Perplexity:
            return "Perplexity";
          case AutoMLMetricExtendedEnum::ValidationLoss:
            return "ValidationLoss";
          case AutoMLMetricExtendedEnum::TrainingLoss:
            return "TrainingLoss";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoMLMetricExtendedEnumMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
