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

        static constexpr uint32_t NOT_STARTED_HASH = ConstExprHashingUtils::HashString("NOT_STARTED");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t SKIPPED_HASH = ConstExprHashingUtils::HashString("SKIPPED");


        DataReplicationInitiationStepStatus GetDataReplicationInitiationStepStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
