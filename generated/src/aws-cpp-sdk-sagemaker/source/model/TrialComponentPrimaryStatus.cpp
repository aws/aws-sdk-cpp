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

        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Stopping_HASH = HashingUtils::HashString("Stopping");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");


        TrialComponentPrimaryStatus GetTrialComponentPrimaryStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
