/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrainingPlanSortBy.h>
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
      namespace TrainingPlanSortByMapper
      {

        static const int TrainingPlanName_HASH = HashingUtils::HashString("TrainingPlanName");
        static const int StartTime_HASH = HashingUtils::HashString("StartTime");
        static const int Status_HASH = HashingUtils::HashString("Status");


        TrainingPlanSortBy GetTrainingPlanSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TrainingPlanName_HASH)
          {
            return TrainingPlanSortBy::TrainingPlanName;
          }
          else if (hashCode == StartTime_HASH)
          {
            return TrainingPlanSortBy::StartTime;
          }
          else if (hashCode == Status_HASH)
          {
            return TrainingPlanSortBy::Status;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrainingPlanSortBy>(hashCode);
          }

          return TrainingPlanSortBy::NOT_SET;
        }

        Aws::String GetNameForTrainingPlanSortBy(TrainingPlanSortBy enumValue)
        {
          switch(enumValue)
          {
          case TrainingPlanSortBy::NOT_SET:
            return {};
          case TrainingPlanSortBy::TrainingPlanName:
            return "TrainingPlanName";
          case TrainingPlanSortBy::StartTime:
            return "StartTime";
          case TrainingPlanSortBy::Status:
            return "Status";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrainingPlanSortByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
