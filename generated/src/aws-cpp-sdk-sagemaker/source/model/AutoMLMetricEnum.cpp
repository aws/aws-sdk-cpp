/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLMetricEnum.h>
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
      namespace AutoMLMetricEnumMapper
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
        static constexpr uint32_t MAPE_HASH = ConstExprHashingUtils::HashString("MAPE");
        static constexpr uint32_t MASE_HASH = ConstExprHashingUtils::HashString("MASE");
        static constexpr uint32_t WAPE_HASH = ConstExprHashingUtils::HashString("WAPE");
        static constexpr uint32_t AverageWeightedQuantileLoss_HASH = ConstExprHashingUtils::HashString("AverageWeightedQuantileLoss");


        AutoMLMetricEnum GetAutoMLMetricEnumForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Accuracy_HASH)
          {
            return AutoMLMetricEnum::Accuracy;
          }
          else if (hashCode == MSE_HASH)
          {
            return AutoMLMetricEnum::MSE;
          }
          else if (hashCode == F1_HASH)
          {
            return AutoMLMetricEnum::F1;
          }
          else if (hashCode == F1macro_HASH)
          {
            return AutoMLMetricEnum::F1macro;
          }
          else if (hashCode == AUC_HASH)
          {
            return AutoMLMetricEnum::AUC;
          }
          else if (hashCode == RMSE_HASH)
          {
            return AutoMLMetricEnum::RMSE;
          }
          else if (hashCode == MAE_HASH)
          {
            return AutoMLMetricEnum::MAE;
          }
          else if (hashCode == R2_HASH)
          {
            return AutoMLMetricEnum::R2;
          }
          else if (hashCode == BalancedAccuracy_HASH)
          {
            return AutoMLMetricEnum::BalancedAccuracy;
          }
          else if (hashCode == Precision_HASH)
          {
            return AutoMLMetricEnum::Precision;
          }
          else if (hashCode == PrecisionMacro_HASH)
          {
            return AutoMLMetricEnum::PrecisionMacro;
          }
          else if (hashCode == Recall_HASH)
          {
            return AutoMLMetricEnum::Recall;
          }
          else if (hashCode == RecallMacro_HASH)
          {
            return AutoMLMetricEnum::RecallMacro;
          }
          else if (hashCode == MAPE_HASH)
          {
            return AutoMLMetricEnum::MAPE;
          }
          else if (hashCode == MASE_HASH)
          {
            return AutoMLMetricEnum::MASE;
          }
          else if (hashCode == WAPE_HASH)
          {
            return AutoMLMetricEnum::WAPE;
          }
          else if (hashCode == AverageWeightedQuantileLoss_HASH)
          {
            return AutoMLMetricEnum::AverageWeightedQuantileLoss;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoMLMetricEnum>(hashCode);
          }

          return AutoMLMetricEnum::NOT_SET;
        }

        Aws::String GetNameForAutoMLMetricEnum(AutoMLMetricEnum enumValue)
        {
          switch(enumValue)
          {
          case AutoMLMetricEnum::NOT_SET:
            return {};
          case AutoMLMetricEnum::Accuracy:
            return "Accuracy";
          case AutoMLMetricEnum::MSE:
            return "MSE";
          case AutoMLMetricEnum::F1:
            return "F1";
          case AutoMLMetricEnum::F1macro:
            return "F1macro";
          case AutoMLMetricEnum::AUC:
            return "AUC";
          case AutoMLMetricEnum::RMSE:
            return "RMSE";
          case AutoMLMetricEnum::MAE:
            return "MAE";
          case AutoMLMetricEnum::R2:
            return "R2";
          case AutoMLMetricEnum::BalancedAccuracy:
            return "BalancedAccuracy";
          case AutoMLMetricEnum::Precision:
            return "Precision";
          case AutoMLMetricEnum::PrecisionMacro:
            return "PrecisionMacro";
          case AutoMLMetricEnum::Recall:
            return "Recall";
          case AutoMLMetricEnum::RecallMacro:
            return "RecallMacro";
          case AutoMLMetricEnum::MAPE:
            return "MAPE";
          case AutoMLMetricEnum::MASE:
            return "MASE";
          case AutoMLMetricEnum::WAPE:
            return "WAPE";
          case AutoMLMetricEnum::AverageWeightedQuantileLoss:
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

      } // namespace AutoMLMetricEnumMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
