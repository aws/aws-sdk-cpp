/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrainingRepositoryAccessMode.h>
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
      namespace TrainingRepositoryAccessModeMapper
      {

        static const int Platform_HASH = HashingUtils::HashString("Platform");
        static const int Vpc_HASH = HashingUtils::HashString("Vpc");


        TrainingRepositoryAccessMode GetTrainingRepositoryAccessModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Platform_HASH)
          {
            return TrainingRepositoryAccessMode::Platform;
          }
          else if (hashCode == Vpc_HASH)
          {
            return TrainingRepositoryAccessMode::Vpc;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrainingRepositoryAccessMode>(hashCode);
          }

          return TrainingRepositoryAccessMode::NOT_SET;
        }

        Aws::String GetNameForTrainingRepositoryAccessMode(TrainingRepositoryAccessMode enumValue)
        {
          switch(enumValue)
          {
          case TrainingRepositoryAccessMode::NOT_SET:
            return {};
          case TrainingRepositoryAccessMode::Platform:
            return "Platform";
          case TrainingRepositoryAccessMode::Vpc:
            return "Vpc";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrainingRepositoryAccessModeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
