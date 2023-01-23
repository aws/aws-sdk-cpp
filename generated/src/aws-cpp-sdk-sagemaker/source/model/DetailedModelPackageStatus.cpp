/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DetailedModelPackageStatus.h>
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
      namespace DetailedModelPackageStatusMapper
      {

        static const int NotStarted_HASH = HashingUtils::HashString("NotStarted");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        DetailedModelPackageStatus GetDetailedModelPackageStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NotStarted_HASH)
          {
            return DetailedModelPackageStatus::NotStarted;
          }
          else if (hashCode == InProgress_HASH)
          {
            return DetailedModelPackageStatus::InProgress;
          }
          else if (hashCode == Completed_HASH)
          {
            return DetailedModelPackageStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return DetailedModelPackageStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DetailedModelPackageStatus>(hashCode);
          }

          return DetailedModelPackageStatus::NOT_SET;
        }

        Aws::String GetNameForDetailedModelPackageStatus(DetailedModelPackageStatus enumValue)
        {
          switch(enumValue)
          {
          case DetailedModelPackageStatus::NotStarted:
            return "NotStarted";
          case DetailedModelPackageStatus::InProgress:
            return "InProgress";
          case DetailedModelPackageStatus::Completed:
            return "Completed";
          case DetailedModelPackageStatus::Failed:
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

      } // namespace DetailedModelPackageStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
