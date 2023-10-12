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

        static constexpr uint32_t INITIALIZING_HASH = ConstExprHashingUtils::HashString("INITIALIZING");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");


        EarthObservationJobStatus GetEarthObservationJobStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case EarthObservationJobStatus::NOT_SET:
            return {};
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
