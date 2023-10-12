/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelPackageStatus.h>
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
      namespace ModelPackageStatusMapper
      {

        static constexpr uint32_t Pending_HASH = ConstExprHashingUtils::HashString("Pending");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Completed_HASH = ConstExprHashingUtils::HashString("Completed");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Deleting_HASH = ConstExprHashingUtils::HashString("Deleting");


        ModelPackageStatus GetModelPackageStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return ModelPackageStatus::Pending;
          }
          else if (hashCode == InProgress_HASH)
          {
            return ModelPackageStatus::InProgress;
          }
          else if (hashCode == Completed_HASH)
          {
            return ModelPackageStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return ModelPackageStatus::Failed;
          }
          else if (hashCode == Deleting_HASH)
          {
            return ModelPackageStatus::Deleting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelPackageStatus>(hashCode);
          }

          return ModelPackageStatus::NOT_SET;
        }

        Aws::String GetNameForModelPackageStatus(ModelPackageStatus enumValue)
        {
          switch(enumValue)
          {
          case ModelPackageStatus::NOT_SET:
            return {};
          case ModelPackageStatus::Pending:
            return "Pending";
          case ModelPackageStatus::InProgress:
            return "InProgress";
          case ModelPackageStatus::Completed:
            return "Completed";
          case ModelPackageStatus::Failed:
            return "Failed";
          case ModelPackageStatus::Deleting:
            return "Deleting";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelPackageStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
