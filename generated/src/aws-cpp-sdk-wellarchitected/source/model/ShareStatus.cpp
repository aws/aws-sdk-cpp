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

        static constexpr uint32_t ACCEPTED_HASH = ConstExprHashingUtils::HashString("ACCEPTED");
        static constexpr uint32_t REJECTED_HASH = ConstExprHashingUtils::HashString("REJECTED");
        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t REVOKED_HASH = ConstExprHashingUtils::HashString("REVOKED");
        static constexpr uint32_t EXPIRED_HASH = ConstExprHashingUtils::HashString("EXPIRED");
        static constexpr uint32_t ASSOCIATING_HASH = ConstExprHashingUtils::HashString("ASSOCIATING");
        static constexpr uint32_t ASSOCIATED_HASH = ConstExprHashingUtils::HashString("ASSOCIATED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        ShareStatus GetShareStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
