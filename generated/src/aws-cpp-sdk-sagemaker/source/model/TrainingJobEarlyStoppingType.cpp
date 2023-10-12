/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrainingJobEarlyStoppingType.h>
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
      namespace TrainingJobEarlyStoppingTypeMapper
      {

        static constexpr uint32_t Off_HASH = ConstExprHashingUtils::HashString("Off");
        static constexpr uint32_t Auto_HASH = ConstExprHashingUtils::HashString("Auto");


        TrainingJobEarlyStoppingType GetTrainingJobEarlyStoppingTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Off_HASH)
          {
            return TrainingJobEarlyStoppingType::Off;
          }
          else if (hashCode == Auto_HASH)
          {
            return TrainingJobEarlyStoppingType::Auto;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrainingJobEarlyStoppingType>(hashCode);
          }

          return TrainingJobEarlyStoppingType::NOT_SET;
        }

        Aws::String GetNameForTrainingJobEarlyStoppingType(TrainingJobEarlyStoppingType enumValue)
        {
          switch(enumValue)
          {
          case TrainingJobEarlyStoppingType::NOT_SET:
            return {};
          case TrainingJobEarlyStoppingType::Off:
            return "Off";
          case TrainingJobEarlyStoppingType::Auto:
            return "Auto";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrainingJobEarlyStoppingTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
