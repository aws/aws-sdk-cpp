/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/osis/model/ChangeProgressStageStatuses.h>
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
      namespace ChangeProgressStageStatusesMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ChangeProgressStageStatuses GetChangeProgressStageStatusesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ChangeProgressStageStatuses::PENDING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ChangeProgressStageStatuses::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ChangeProgressStageStatuses::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ChangeProgressStageStatuses::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChangeProgressStageStatuses>(hashCode);
          }

          return ChangeProgressStageStatuses::NOT_SET;
        }

        Aws::String GetNameForChangeProgressStageStatuses(ChangeProgressStageStatuses enumValue)
        {
          switch(enumValue)
          {
          case ChangeProgressStageStatuses::NOT_SET:
            return {};
          case ChangeProgressStageStatuses::PENDING:
            return "PENDING";
          case ChangeProgressStageStatuses::IN_PROGRESS:
            return "IN_PROGRESS";
          case ChangeProgressStageStatuses::COMPLETED:
            return "COMPLETED";
          case ChangeProgressStageStatuses::FAILED:
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

      } // namespace ChangeProgressStageStatusesMapper
    } // namespace Model
  } // namespace OSIS
} // namespace Aws
