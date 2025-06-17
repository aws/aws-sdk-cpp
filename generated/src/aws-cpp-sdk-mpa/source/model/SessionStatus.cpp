/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/SessionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MPA
  {
    namespace Model
    {
      namespace SessionStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");


        SessionStatus GetSessionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return SessionStatus::PENDING;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return SessionStatus::CANCELLED;
          }
          else if (hashCode == APPROVED_HASH)
          {
            return SessionStatus::APPROVED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return SessionStatus::FAILED;
          }
          else if (hashCode == CREATING_HASH)
          {
            return SessionStatus::CREATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SessionStatus>(hashCode);
          }

          return SessionStatus::NOT_SET;
        }

        Aws::String GetNameForSessionStatus(SessionStatus enumValue)
        {
          switch(enumValue)
          {
          case SessionStatus::NOT_SET:
            return {};
          case SessionStatus::PENDING:
            return "PENDING";
          case SessionStatus::CANCELLED:
            return "CANCELLED";
          case SessionStatus::APPROVED:
            return "APPROVED";
          case SessionStatus::FAILED:
            return "FAILED";
          case SessionStatus::CREATING:
            return "CREATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SessionStatusMapper
    } // namespace Model
  } // namespace MPA
} // namespace Aws
