/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/EarthObservationJobExportStatus.h>
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
      namespace EarthObservationJobExportStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        EarthObservationJobExportStatus GetEarthObservationJobExportStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return EarthObservationJobExportStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return EarthObservationJobExportStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return EarthObservationJobExportStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EarthObservationJobExportStatus>(hashCode);
          }

          return EarthObservationJobExportStatus::NOT_SET;
        }

        Aws::String GetNameForEarthObservationJobExportStatus(EarthObservationJobExportStatus enumValue)
        {
          switch(enumValue)
          {
          case EarthObservationJobExportStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case EarthObservationJobExportStatus::SUCCEEDED:
            return "SUCCEEDED";
          case EarthObservationJobExportStatus::FAILED:
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

      } // namespace EarthObservationJobExportStatusMapper
    } // namespace Model
  } // namespace SageMakerGeospatial
} // namespace Aws
