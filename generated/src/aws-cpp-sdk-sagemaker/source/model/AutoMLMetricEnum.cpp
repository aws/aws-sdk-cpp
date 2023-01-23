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


        AutoMLMetricEnum GetAutoMLMetricEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
