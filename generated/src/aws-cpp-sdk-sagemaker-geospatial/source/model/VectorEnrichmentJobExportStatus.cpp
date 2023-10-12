/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/VectorEnrichmentJobExportStatus.h>
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
      namespace VectorEnrichmentJobExportStatusMapper
      {

        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        VectorEnrichmentJobExportStatus GetVectorEnrichmentJobExportStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return VectorEnrichmentJobExportStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return VectorEnrichmentJobExportStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return VectorEnrichmentJobExportStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VectorEnrichmentJobExportStatus>(hashCode);
          }

          return VectorEnrichmentJobExportStatus::NOT_SET;
        }

        Aws::String GetNameForVectorEnrichmentJobExportStatus(VectorEnrichmentJobExportStatus enumValue)
        {
          switch(enumValue)
          {
          case VectorEnrichmentJobExportStatus::NOT_SET:
            return {};
          case VectorEnrichmentJobExportStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case VectorEnrichmentJobExportStatus::SUCCEEDED:
            return "SUCCEEDED";
          case VectorEnrichmentJobExportStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VectorEnrichmentJobExportStatusMapper
    } // namespace Model
  } // namespace SageMakerGeospatial
} // namespace Aws
