/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/InvitationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ManagedBlockchain
  {
    namespace Model
    {
      namespace InvitationStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int ACCEPTED_HASH = HashingUtils::HashString("ACCEPTED");
        static const int ACCEPTING_HASH = HashingUtils::HashString("ACCEPTING");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");


        InvitationStatus GetInvitationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return InvitationStatus::PENDING;
          }
          else if (hashCode == ACCEPTED_HASH)
          {
            return InvitationStatus::ACCEPTED;
          }
          else if (hashCode == ACCEPTING_HASH)
          {
            return InvitationStatus::ACCEPTING;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return InvitationStatus::REJECTED;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return InvitationStatus::EXPIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InvitationStatus>(hashCode);
          }

          return InvitationStatus::NOT_SET;
        }

        Aws::String GetNameForInvitationStatus(InvitationStatus enumValue)
        {
          switch(enumValue)
          {
          case InvitationStatus::PENDING:
            return "PENDING";
          case InvitationStatus::ACCEPTED:
            return "ACCEPTED";
          case InvitationStatus::ACCEPTING:
            return "ACCEPTING";
          case InvitationStatus::REJECTED:
            return "REJECTED";
          case InvitationStatus::EXPIRED:
            return "EXPIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InvitationStatusMapper
    } // namespace Model
  } // namespace ManagedBlockchain
} // namespace Aws
