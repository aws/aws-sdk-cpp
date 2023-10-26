/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/DataReplicationInitiationStepStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mgn
  {
    namespace Model
    {
      namespace DataReplicationInitiationStepStatusMapper
      {

        static const int NOT_STARTED_HASH = HashingUtils::HashString("NOT_STARTED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SKIPPED_HASH = HashingUtils::HashString("SKIPPED");


        DataReplicationInitiationStepStatus GetDataReplicationInitiationStepStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_STARTED_HASH)
          {
            return DataReplicationInitiationStepStatus::NOT_STARTED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return DataReplicationInitiationStepStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return DataReplicationInitiationStepStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DataReplicationInitiationStepStatus::FAILED;
          }
          else if (hashCode == SKIPPED_HASH)
          {
            return DataReplicationInitiationStepStatus::SKIPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataReplicationInitiationStepStatus>(hashCode);
          }

          return DataReplicationInitiationStepStatus::NOT_SET;
        }

        Aws::String GetNameForDataReplicationInitiationStepStatus(DataReplicationInitiationStepStatus enumValue)
        {
          switch(enumValue)
          {
          case DataReplicationInitiationStepStatus::NOT_SET:
            return {};
          case DataReplicationInitiationStepStatus::NOT_STARTED:
            return "NOT_STARTED";
          case DataReplicationInitiationStepStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case DataReplicationInitiationStepStatus::SUCCEEDED:
            return "SUCCEEDED";
          case DataReplicationInitiationStepStatus::FAILED:
            return "FAILED";
          case DataReplicationInitiationStepStatus::SKIPPED:
            return "SKIPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataReplicationInitiationStepStatusMapper
    } // namespace Model
  } // namespace mgn
} // namespace Aws
