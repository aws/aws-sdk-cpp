/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/EarthObservationJobStatus.h>
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
      namespace EarthObservationJobStatusMapper
      {

        static const int INITIALIZING_HASH = HashingUtils::HashString("INITIALIZING");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        EarthObservationJobStatus GetEarthObservationJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIALIZING_HASH)
          {
            return EarthObservationJobStatus::INITIALIZING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return EarthObservationJobStatus::IN_PROGRESS;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return EarthObservationJobStatus::STOPPING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return EarthObservationJobStatus::COMPLETED;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return EarthObservationJobStatus::STOPPED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return EarthObservationJobStatus::FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return EarthObservationJobStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return EarthObservationJobStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EarthObservationJobStatus>(hashCode);
          }

          return EarthObservationJobStatus::NOT_SET;
        }

        Aws::String GetNameForEarthObservationJobStatus(EarthObservationJobStatus enumValue)
        {
          switch(enumValue)
          {
          case EarthObservationJobStatus::INITIALIZING:
            return "INITIALIZING";
          case EarthObservationJobStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case EarthObservationJobStatus::STOPPING:
            return "STOPPING";
          case EarthObservationJobStatus::COMPLETED:
            return "COMPLETED";
          case EarthObservationJobStatus::STOPPED:
            return "STOPPED";
          case EarthObservationJobStatus::FAILED:
            return "FAILED";
          case EarthObservationJobStatus::DELETING:
            return "DELETING";
          case EarthObservationJobStatus::DELETED:
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

      } // namespace EarthObservationJobStatusMapper
    } // namespace Model
  } // namespace SageMakerGeospatial
} // namespace Aws
