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

        static constexpr uint32_t Accuracy_HASH = ConstExprHashingUtils::HashString("Accuracy");
        static constexpr uint32_t MSE_HASH = ConstExprHashingUtils::HashString("MSE");
        static constexpr uint32_t F1_HASH = ConstExprHashingUtils::HashString("F1");
        static constexpr uint32_t F1macro_HASH = ConstExprHashingUtils::HashString("F1macro");
        static constexpr uint32_t AUC_HASH = ConstExprHashingUtils::HashString("AUC");
        static constexpr uint32_t RMSE_HASH = ConstExprHashingUtils::HashString("RMSE");
        static constexpr uint32_t MAE_HASH = ConstExprHashingUtils::HashString("MAE");
        static constexpr uint32_t R2_HASH = ConstExprHashingUtils::HashString("R2");
        static constexpr uint32_t BalancedAccuracy_HASH = ConstExprHashingUtils::HashString("BalancedAccuracy");
        static constexpr uint32_t Precision_HASH = ConstExprHashingUtils::HashString("Precision");
        static constexpr uint32_t PrecisionMacro_HASH = ConstExprHashingUtils::HashString("PrecisionMacro");
        static constexpr uint32_t Recall_HASH = ConstExprHashingUtils::HashString("Recall");
        static constexpr uint32_t RecallMacro_HASH = ConstExprHashingUtils::HashString("RecallMacro");
        static constexpr uint32_t LogLoss_HASH = ConstExprHashingUtils::HashString("LogLoss");
        static constexpr uint32_t InferenceLatency_HASH = ConstExprHashingUtils::HashString("InferenceLatency");
        static constexpr uint32_t MAPE_HASH = ConstExprHashingUtils::HashString("MAPE");
        static constexpr uint32_t MASE_HASH = ConstExprHashingUtils::HashString("MASE");
        static constexpr uint32_t WAPE_HASH = ConstExprHashingUtils::HashString("WAPE");
        static constexpr uint32_t AverageWeightedQuantileLoss_HASH = ConstExprHashingUtils::HashString("AverageWeightedQuantileLoss");


        AutoMLMetricExtendedEnum GetAutoMLMetricExtendedEnumForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
