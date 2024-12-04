/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrainingPlanFilterName.h>
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
      namespace TrainingPlanFilterNameMapper
      {

        static const int Status_HASH = HashingUtils::HashString("Status");


        TrainingPlanFilterName GetTrainingPlanFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Status_HASH)
          {
            return TrainingPlanFilterName::Status;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrainingPlanFilterName>(hashCode);
          }

          return TrainingPlanFilterName::NOT_SET;
        }

        Aws::String GetNameForTrainingPlanFilterName(TrainingPlanFilterName enumValue)
        {
          switch(enumValue)
          {
          case TrainingPlanFilterName::NOT_SET:
            return {};
          case TrainingPlanFilterName::Status:
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

      } // namespace TrainingPlanFilterNameMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
