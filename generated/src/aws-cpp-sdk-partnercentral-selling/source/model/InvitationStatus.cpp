/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/InvitationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PartnerCentralSelling
  {
    namespace Model
    {
      namespace InvitationStatusMapper
      {

        static const int ACCEPTED_HASH = HashingUtils::HashString("ACCEPTED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");


        InvitationStatus GetInvitationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCEPTED_HASH)
          {
            return InvitationStatus::ACCEPTED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return InvitationStatus::PENDING;
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
          case InvitationStatus::NOT_SET:
            return {};
          case InvitationStatus::ACCEPTED:
            return "ACCEPTED";
          case InvitationStatus::PENDING:
            return "PENDING";
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
  } // namespace PartnerCentralSelling
} // namespace Aws
