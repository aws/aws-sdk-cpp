/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/osis/model/ChangeProgressStatuses.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OSIS
  {
    namespace Model
    {
      namespace ChangeProgressStatusesMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ChangeProgressStatuses GetChangeProgressStatusesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ChangeProgressStatuses::PENDING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ChangeProgressStatuses::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ChangeProgressStatuses::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ChangeProgressStatuses::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChangeProgressStatuses>(hashCode);
          }

          return ChangeProgressStatuses::NOT_SET;
        }

        Aws::String GetNameForChangeProgressStatuses(ChangeProgressStatuses enumValue)
        {
          switch(enumValue)
          {
          case ChangeProgressStatuses::NOT_SET:
            return {};
          case ChangeProgressStatuses::PENDING:
            return "PENDING";
          case ChangeProgressStatuses::IN_PROGRESS:
            return "IN_PROGRESS";
          case ChangeProgressStatuses::COMPLETED:
            return "COMPLETED";
          case ChangeProgressStatuses::FAILED:
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

      } // namespace ChangeProgressStatusesMapper
    } // namespace Model
  } // namespace OSIS
} // namespace Aws
