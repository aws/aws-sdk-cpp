/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelCardExportJobStatus.h>
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
      namespace ModelCardExportJobStatusMapper
      {

        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        ModelCardExportJobStatus GetModelCardExportJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return ModelCardExportJobStatus::InProgress;
          }
          else if (hashCode == Completed_HASH)
          {
            return ModelCardExportJobStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return ModelCardExportJobStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelCardExportJobStatus>(hashCode);
          }

          return ModelCardExportJobStatus::NOT_SET;
        }

        Aws::String GetNameForModelCardExportJobStatus(ModelCardExportJobStatus enumValue)
        {
          switch(enumValue)
          {
          case ModelCardExportJobStatus::InProgress:
            return "InProgress";
          case ModelCardExportJobStatus::Completed:
            return "Completed";
          case ModelCardExportJobStatus::Failed:
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

      } // namespace ModelCardExportJobStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
