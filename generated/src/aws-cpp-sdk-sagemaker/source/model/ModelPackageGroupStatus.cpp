/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelPackageGroupStatus.h>
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
      namespace ModelPackageGroupStatusMapper
      {

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");
        static const int DeleteFailed_HASH = HashingUtils::HashString("DeleteFailed");


        ModelPackageGroupStatus GetModelPackageGroupStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return ModelPackageGroupStatus::Pending;
          }
          else if (hashCode == InProgress_HASH)
          {
            return ModelPackageGroupStatus::InProgress;
          }
          else if (hashCode == Completed_HASH)
          {
            return ModelPackageGroupStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return ModelPackageGroupStatus::Failed;
          }
          else if (hashCode == Deleting_HASH)
          {
            return ModelPackageGroupStatus::Deleting;
          }
          else if (hashCode == DeleteFailed_HASH)
          {
            return ModelPackageGroupStatus::DeleteFailed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelPackageGroupStatus>(hashCode);
          }

          return ModelPackageGroupStatus::NOT_SET;
        }

        Aws::String GetNameForModelPackageGroupStatus(ModelPackageGroupStatus enumValue)
        {
          switch(enumValue)
          {
          case ModelPackageGroupStatus::NOT_SET:
            return {};
          case ModelPackageGroupStatus::Pending:
            return "Pending";
          case ModelPackageGroupStatus::InProgress:
            return "InProgress";
          case ModelPackageGroupStatus::Completed:
            return "Completed";
          case ModelPackageGroupStatus::Failed:
            return "Failed";
          case ModelPackageGroupStatus::Deleting:
            return "Deleting";
          case ModelPackageGroupStatus::DeleteFailed:
            return "DeleteFailed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelPackageGroupStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
