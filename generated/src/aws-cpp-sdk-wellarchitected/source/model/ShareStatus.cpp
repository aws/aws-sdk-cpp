/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ShareStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WellArchitected
  {
    namespace Model
    {
      namespace ShareStatusMapper
      {

        static const int ACCEPTED_HASH = HashingUtils::HashString("ACCEPTED");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int REVOKED_HASH = HashingUtils::HashString("REVOKED");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");
        static const int ASSOCIATING_HASH = HashingUtils::HashString("ASSOCIATING");
        static const int ASSOCIATED_HASH = HashingUtils::HashString("ASSOCIATED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ShareStatus GetShareStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCEPTED_HASH)
          {
            return ShareStatus::ACCEPTED;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return ShareStatus::REJECTED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return ShareStatus::PENDING;
          }
          else if (hashCode == REVOKED_HASH)
          {
            return ShareStatus::REVOKED;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return ShareStatus::EXPIRED;
          }
          else if (hashCode == ASSOCIATING_HASH)
          {
            return ShareStatus::ASSOCIATING;
          }
          else if (hashCode == ASSOCIATED_HASH)
          {
            return ShareStatus::ASSOCIATED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ShareStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ShareStatus>(hashCode);
          }

          return ShareStatus::NOT_SET;
        }

        Aws::String GetNameForShareStatus(ShareStatus enumValue)
        {
          switch(enumValue)
          {
          case ShareStatus::NOT_SET:
            return {};
          case ShareStatus::ACCEPTED:
            return "ACCEPTED";
          case ShareStatus::REJECTED:
            return "REJECTED";
          case ShareStatus::PENDING:
            return "PENDING";
          case ShareStatus::REVOKED:
            return "REVOKED";
          case ShareStatus::EXPIRED:
            return "EXPIRED";
          case ShareStatus::ASSOCIATING:
            return "ASSOCIATING";
          case ShareStatus::ASSOCIATED:
            return "ASSOCIATED";
          case ShareStatus::FAILED:
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

      } // namespace ShareStatusMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
