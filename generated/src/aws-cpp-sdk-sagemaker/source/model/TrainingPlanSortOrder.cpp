/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrainingPlanSortOrder.h>
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
      namespace TrainingPlanSortOrderMapper
      {

        static const int Ascending_HASH = HashingUtils::HashString("Ascending");
        static const int Descending_HASH = HashingUtils::HashString("Descending");


        TrainingPlanSortOrder GetTrainingPlanSortOrderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Ascending_HASH)
          {
            return TrainingPlanSortOrder::Ascending;
          }
          else if (hashCode == Descending_HASH)
          {
            return TrainingPlanSortOrder::Descending;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrainingPlanSortOrder>(hashCode);
          }

          return TrainingPlanSortOrder::NOT_SET;
        }

        Aws::String GetNameForTrainingPlanSortOrder(TrainingPlanSortOrder enumValue)
        {
          switch(enumValue)
          {
          case TrainingPlanSortOrder::NOT_SET:
            return {};
          case TrainingPlanSortOrder::Ascending:
            return "Ascending";
          case TrainingPlanSortOrder::Descending:
            return "Descending";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrainingPlanSortOrderMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
