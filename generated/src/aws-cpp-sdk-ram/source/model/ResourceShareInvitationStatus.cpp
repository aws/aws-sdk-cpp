/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/ResourceShareInvitationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RAM
  {
    namespace Model
    {
      namespace ResourceShareInvitationStatusMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t ACCEPTED_HASH = ConstExprHashingUtils::HashString("ACCEPTED");
        static constexpr uint32_t REJECTED_HASH = ConstExprHashingUtils::HashString("REJECTED");
        static constexpr uint32_t EXPIRED_HASH = ConstExprHashingUtils::HashString("EXPIRED");


        ResourceShareInvitationStatus GetResourceShareInvitationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ResourceShareInvitationStatus::PENDING;
          }
          else if (hashCode == ACCEPTED_HASH)
          {
            return ResourceShareInvitationStatus::ACCEPTED;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return ResourceShareInvitationStatus::REJECTED;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return ResourceShareInvitationStatus::EXPIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceShareInvitationStatus>(hashCode);
          }

          return ResourceShareInvitationStatus::NOT_SET;
        }

        Aws::String GetNameForResourceShareInvitationStatus(ResourceShareInvitationStatus enumValue)
        {
          switch(enumValue)
          {
          case ResourceShareInvitationStatus::NOT_SET:
            return {};
          case ResourceShareInvitationStatus::PENDING:
            return "PENDING";
          case ResourceShareInvitationStatus::ACCEPTED:
            return "ACCEPTED";
          case ResourceShareInvitationStatus::REJECTED:
            return "REJECTED";
          case ResourceShareInvitationStatus::EXPIRED:
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

      } // namespace ResourceShareInvitationStatusMapper
    } // namespace Model
  } // namespace RAM
} // namespace Aws
