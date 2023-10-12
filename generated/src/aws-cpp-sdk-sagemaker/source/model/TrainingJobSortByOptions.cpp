/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrainingJobSortByOptions.h>
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
      namespace TrainingJobSortByOptionsMapper
      {

        static constexpr uint32_t Name_HASH = ConstExprHashingUtils::HashString("Name");
        static constexpr uint32_t CreationTime_HASH = ConstExprHashingUtils::HashString("CreationTime");
        static constexpr uint32_t Status_HASH = ConstExprHashingUtils::HashString("Status");
        static constexpr uint32_t FinalObjectiveMetricValue_HASH = ConstExprHashingUtils::HashString("FinalObjectiveMetricValue");


        TrainingJobSortByOptions GetTrainingJobSortByOptionsForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return TrainingJobSortByOptions::Name;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return TrainingJobSortByOptions::CreationTime;
          }
          else if (hashCode == Status_HASH)
          {
            return TrainingJobSortByOptions::Status;
          }
          else if (hashCode == FinalObjectiveMetricValue_HASH)
          {
            return TrainingJobSortByOptions::FinalObjectiveMetricValue;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrainingJobSortByOptions>(hashCode);
          }

          return TrainingJobSortByOptions::NOT_SET;
        }

        Aws::String GetNameForTrainingJobSortByOptions(TrainingJobSortByOptions enumValue)
        {
          switch(enumValue)
          {
          case TrainingJobSortByOptions::NOT_SET:
            return {};
          case TrainingJobSortByOptions::Name:
            return "Name";
          case TrainingJobSortByOptions::CreationTime:
            return "CreationTime";
          case TrainingJobSortByOptions::Status:
            return "Status";
          case TrainingJobSortByOptions::FinalObjectiveMetricValue:
            return "FinalObjectiveMetricValue";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrainingJobSortByOptionsMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
