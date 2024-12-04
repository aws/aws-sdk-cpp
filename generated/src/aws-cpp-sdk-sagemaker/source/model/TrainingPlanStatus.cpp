/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrainingPlanStatus.h>
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
      namespace TrainingPlanStatusMapper
      {

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Scheduled_HASH = HashingUtils::HashString("Scheduled");
        static const int Expired_HASH = HashingUtils::HashString("Expired");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        TrainingPlanStatus GetTrainingPlanStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return TrainingPlanStatus::Pending;
          }
          else if (hashCode == Active_HASH)
          {
            return TrainingPlanStatus::Active;
          }
          else if (hashCode == Scheduled_HASH)
          {
            return TrainingPlanStatus::Scheduled;
          }
          else if (hashCode == Expired_HASH)
          {
            return TrainingPlanStatus::Expired;
          }
          else if (hashCode == Failed_HASH)
          {
            return TrainingPlanStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrainingPlanStatus>(hashCode);
          }

          return TrainingPlanStatus::NOT_SET;
        }

        Aws::String GetNameForTrainingPlanStatus(TrainingPlanStatus enumValue)
        {
          switch(enumValue)
          {
          case TrainingPlanStatus::NOT_SET:
            return {};
          case TrainingPlanStatus::Pending:
            return "Pending";
          case TrainingPlanStatus::Active:
            return "Active";
          case TrainingPlanStatus::Scheduled:
            return "Scheduled";
          case TrainingPlanStatus::Expired:
            return "Expired";
          case TrainingPlanStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrainingPlanStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
