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

        static constexpr uint32_t NotStarted_HASH = ConstExprHashingUtils::HashString("NotStarted");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Completed_HASH = ConstExprHashingUtils::HashString("Completed");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");


        DetailedModelPackageStatus GetDetailedModelPackageStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case DetailedModelPackageStatus::NOT_SET:
            return {};
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
