/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLMode.h>
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
      namespace AutoMLModeMapper
      {

        static constexpr uint32_t AUTO_HASH = ConstExprHashingUtils::HashString("AUTO");
        static constexpr uint32_t ENSEMBLING_HASH = ConstExprHashingUtils::HashString("ENSEMBLING");
        static constexpr uint32_t HYPERPARAMETER_TUNING_HASH = ConstExprHashingUtils::HashString("HYPERPARAMETER_TUNING");


        AutoMLMode GetAutoMLModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return AutoMLMode::AUTO;
          }
          else if (hashCode == ENSEMBLING_HASH)
          {
            return AutoMLMode::ENSEMBLING;
          }
          else if (hashCode == HYPERPARAMETER_TUNING_HASH)
          {
            return AutoMLMode::HYPERPARAMETER_TUNING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoMLMode>(hashCode);
          }

          return AutoMLMode::NOT_SET;
        }

        Aws::String GetNameForAutoMLMode(AutoMLMode enumValue)
        {
          switch(enumValue)
          {
          case AutoMLMode::NOT_SET:
            return {};
          case AutoMLMode::AUTO:
            return "AUTO";
          case AutoMLMode::ENSEMBLING:
            return "ENSEMBLING";
          case AutoMLMode::HYPERPARAMETER_TUNING:
            return "HYPERPARAMETER_TUNING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoMLModeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
