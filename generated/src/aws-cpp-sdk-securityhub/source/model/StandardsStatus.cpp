/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/StandardsStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace StandardsStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int INCOMPLETE_HASH = HashingUtils::HashString("INCOMPLETE");


        StandardsStatus GetStandardsStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return StandardsStatus::PENDING;
          }
          else if (hashCode == READY_HASH)
          {
            return StandardsStatus::READY;
          }
          else if (hashCode == FAILED_HASH)
          {
            return StandardsStatus::FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return StandardsStatus::DELETING;
          }
          else if (hashCode == INCOMPLETE_HASH)
          {
            return StandardsStatus::INCOMPLETE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StandardsStatus>(hashCode);
          }

          return StandardsStatus::NOT_SET;
        }

        Aws::String GetNameForStandardsStatus(StandardsStatus enumValue)
        {
          switch(enumValue)
          {
          case StandardsStatus::PENDING:
            return "PENDING";
          case StandardsStatus::READY:
            return "READY";
          case StandardsStatus::FAILED:
            return "FAILED";
          case StandardsStatus::DELETING:
            return "DELETING";
          case StandardsStatus::INCOMPLETE:
            return "INCOMPLETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StandardsStatusMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
