/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelCardProcessingStatus.h>
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
      namespace ModelCardProcessingStatusMapper
      {

        static constexpr uint32_t DeleteInProgress_HASH = ConstExprHashingUtils::HashString("DeleteInProgress");
        static constexpr uint32_t DeletePending_HASH = ConstExprHashingUtils::HashString("DeletePending");
        static constexpr uint32_t ContentDeleted_HASH = ConstExprHashingUtils::HashString("ContentDeleted");
        static constexpr uint32_t ExportJobsDeleted_HASH = ConstExprHashingUtils::HashString("ExportJobsDeleted");
        static constexpr uint32_t DeleteCompleted_HASH = ConstExprHashingUtils::HashString("DeleteCompleted");
        static constexpr uint32_t DeleteFailed_HASH = ConstExprHashingUtils::HashString("DeleteFailed");


        ModelCardProcessingStatus GetModelCardProcessingStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DeleteInProgress_HASH)
          {
            return ModelCardProcessingStatus::DeleteInProgress;
          }
          else if (hashCode == DeletePending_HASH)
          {
            return ModelCardProcessingStatus::DeletePending;
          }
          else if (hashCode == ContentDeleted_HASH)
          {
            return ModelCardProcessingStatus::ContentDeleted;
          }
          else if (hashCode == ExportJobsDeleted_HASH)
          {
            return ModelCardProcessingStatus::ExportJobsDeleted;
          }
          else if (hashCode == DeleteCompleted_HASH)
          {
            return ModelCardProcessingStatus::DeleteCompleted;
          }
          else if (hashCode == DeleteFailed_HASH)
          {
            return ModelCardProcessingStatus::DeleteFailed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelCardProcessingStatus>(hashCode);
          }

          return ModelCardProcessingStatus::NOT_SET;
        }

        Aws::String GetNameForModelCardProcessingStatus(ModelCardProcessingStatus enumValue)
        {
          switch(enumValue)
          {
          case ModelCardProcessingStatus::NOT_SET:
            return {};
          case ModelCardProcessingStatus::DeleteInProgress:
            return "DeleteInProgress";
          case ModelCardProcessingStatus::DeletePending:
            return "DeletePending";
          case ModelCardProcessingStatus::ContentDeleted:
            return "ContentDeleted";
          case ModelCardProcessingStatus::ExportJobsDeleted:
            return "ExportJobsDeleted";
          case ModelCardProcessingStatus::DeleteCompleted:
            return "DeleteCompleted";
          case ModelCardProcessingStatus::DeleteFailed:
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

      } // namespace ModelCardProcessingStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
