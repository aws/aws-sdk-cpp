/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/ScheduledQueryRunStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TimestreamQuery
  {
    namespace Model
    {
      namespace ScheduledQueryRunStatusMapper
      {

        static const int AUTO_TRIGGER_SUCCESS_HASH = HashingUtils::HashString("AUTO_TRIGGER_SUCCESS");
        static const int AUTO_TRIGGER_FAILURE_HASH = HashingUtils::HashString("AUTO_TRIGGER_FAILURE");
        static const int MANUAL_TRIGGER_SUCCESS_HASH = HashingUtils::HashString("MANUAL_TRIGGER_SUCCESS");
        static const int MANUAL_TRIGGER_FAILURE_HASH = HashingUtils::HashString("MANUAL_TRIGGER_FAILURE");


        ScheduledQueryRunStatus GetScheduledQueryRunStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_TRIGGER_SUCCESS_HASH)
          {
            return ScheduledQueryRunStatus::AUTO_TRIGGER_SUCCESS;
          }
          else if (hashCode == AUTO_TRIGGER_FAILURE_HASH)
          {
            return ScheduledQueryRunStatus::AUTO_TRIGGER_FAILURE;
          }
          else if (hashCode == MANUAL_TRIGGER_SUCCESS_HASH)
          {
            return ScheduledQueryRunStatus::MANUAL_TRIGGER_SUCCESS;
          }
          else if (hashCode == MANUAL_TRIGGER_FAILURE_HASH)
          {
            return ScheduledQueryRunStatus::MANUAL_TRIGGER_FAILURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScheduledQueryRunStatus>(hashCode);
          }

          return ScheduledQueryRunStatus::NOT_SET;
        }

        Aws::String GetNameForScheduledQueryRunStatus(ScheduledQueryRunStatus enumValue)
        {
          switch(enumValue)
          {
          case ScheduledQueryRunStatus::NOT_SET:
            return {};
          case ScheduledQueryRunStatus::AUTO_TRIGGER_SUCCESS:
            return "AUTO_TRIGGER_SUCCESS";
          case ScheduledQueryRunStatus::AUTO_TRIGGER_FAILURE:
            return "AUTO_TRIGGER_FAILURE";
          case ScheduledQueryRunStatus::MANUAL_TRIGGER_SUCCESS:
            return "MANUAL_TRIGGER_SUCCESS";
          case ScheduledQueryRunStatus::MANUAL_TRIGGER_FAILURE:
            return "MANUAL_TRIGGER_FAILURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScheduledQueryRunStatusMapper
    } // namespace Model
  } // namespace TimestreamQuery
} // namespace Aws
