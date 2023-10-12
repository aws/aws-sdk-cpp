/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMakerGeospatial
  {
    namespace Model
    {
      namespace VectorEnrichmentJobStatusMapper
      {

        static constexpr uint32_t INITIALIZING_HASH = ConstExprHashingUtils::HashString("INITIALIZING");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");


        VectorEnrichmentJobStatus GetVectorEnrichmentJobStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIALIZING_HASH)
          {
            return VectorEnrichmentJobStatus::INITIALIZING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return VectorEnrichmentJobStatus::IN_PROGRESS;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return VectorEnrichmentJobStatus::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return VectorEnrichmentJobStatus::STOPPED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return VectorEnrichmentJobStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return VectorEnrichmentJobStatus::FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return VectorEnrichmentJobStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return VectorEnrichmentJobStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VectorEnrichmentJobStatus>(hashCode);
          }

          return VectorEnrichmentJobStatus::NOT_SET;
        }

        Aws::String GetNameForVectorEnrichmentJobStatus(VectorEnrichmentJobStatus enumValue)
        {
          switch(enumValue)
          {
          case VectorEnrichmentJobStatus::NOT_SET:
            return {};
          case VectorEnrichmentJobStatus::INITIALIZING:
            return "INITIALIZING";
          case VectorEnrichmentJobStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case VectorEnrichmentJobStatus::STOPPING:
            return "STOPPING";
          case VectorEnrichmentJobStatus::STOPPED:
            return "STOPPED";
          case VectorEnrichmentJobStatus::COMPLETED:
            return "COMPLETED";
          case VectorEnrichmentJobStatus::FAILED:
            return "FAILED";
          case VectorEnrichmentJobStatus::DELETING:
            return "DELETING";
          case VectorEnrichmentJobStatus::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VectorEnrichmentJobStatusMapper
    } // namespace Model
  } // namespace SageMakerGeospatial
} // namespace Aws
