/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrialComponentPrimaryStatus.h>
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
      namespace TrialComponentPrimaryStatusMapper
      {

        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Completed_HASH = ConstExprHashingUtils::HashString("Completed");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Stopping_HASH = ConstExprHashingUtils::HashString("Stopping");
        static constexpr uint32_t Stopped_HASH = ConstExprHashingUtils::HashString("Stopped");


        TrialComponentPrimaryStatus GetTrialComponentPrimaryStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return TrialComponentPrimaryStatus::InProgress;
          }
          else if (hashCode == Completed_HASH)
          {
            return TrialComponentPrimaryStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return TrialComponentPrimaryStatus::Failed;
          }
          else if (hashCode == Stopping_HASH)
          {
            return TrialComponentPrimaryStatus::Stopping;
          }
          else if (hashCode == Stopped_HASH)
          {
            return TrialComponentPrimaryStatus::Stopped;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrialComponentPrimaryStatus>(hashCode);
          }

          return TrialComponentPrimaryStatus::NOT_SET;
        }

        Aws::String GetNameForTrialComponentPrimaryStatus(TrialComponentPrimaryStatus enumValue)
        {
          switch(enumValue)
          {
          case TrialComponentPrimaryStatus::NOT_SET:
            return {};
          case TrialComponentPrimaryStatus::InProgress:
            return "InProgress";
          case TrialComponentPrimaryStatus::Completed:
            return "Completed";
          case TrialComponentPrimaryStatus::Failed:
            return "Failed";
          case TrialComponentPrimaryStatus::Stopping:
            return "Stopping";
          case TrialComponentPrimaryStatus::Stopped:
            return "Stopped";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrialComponentPrimaryStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
