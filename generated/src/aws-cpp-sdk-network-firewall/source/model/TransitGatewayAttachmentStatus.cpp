/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/TransitGatewayAttachmentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkFirewall
  {
    namespace Model
    {
      namespace TransitGatewayAttachmentStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int PENDING_ACCEPTANCE_HASH = HashingUtils::HashString("PENDING_ACCEPTANCE");
        static const int REJECTING_HASH = HashingUtils::HashString("REJECTING");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");


        TransitGatewayAttachmentStatus GetTransitGatewayAttachmentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return TransitGatewayAttachmentStatus::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return TransitGatewayAttachmentStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return TransitGatewayAttachmentStatus::DELETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return TransitGatewayAttachmentStatus::FAILED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return TransitGatewayAttachmentStatus::ERROR_;
          }
          else if (hashCode == READY_HASH)
          {
            return TransitGatewayAttachmentStatus::READY;
          }
          else if (hashCode == PENDING_ACCEPTANCE_HASH)
          {
            return TransitGatewayAttachmentStatus::PENDING_ACCEPTANCE;
          }
          else if (hashCode == REJECTING_HASH)
          {
            return TransitGatewayAttachmentStatus::REJECTING;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return TransitGatewayAttachmentStatus::REJECTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransitGatewayAttachmentStatus>(hashCode);
          }

          return TransitGatewayAttachmentStatus::NOT_SET;
        }

        Aws::String GetNameForTransitGatewayAttachmentStatus(TransitGatewayAttachmentStatus enumValue)
        {
          switch(enumValue)
          {
          case TransitGatewayAttachmentStatus::NOT_SET:
            return {};
          case TransitGatewayAttachmentStatus::CREATING:
            return "CREATING";
          case TransitGatewayAttachmentStatus::DELETING:
            return "DELETING";
          case TransitGatewayAttachmentStatus::DELETED:
            return "DELETED";
          case TransitGatewayAttachmentStatus::FAILED:
            return "FAILED";
          case TransitGatewayAttachmentStatus::ERROR_:
            return "ERROR";
          case TransitGatewayAttachmentStatus::READY:
            return "READY";
          case TransitGatewayAttachmentStatus::PENDING_ACCEPTANCE:
            return "PENDING_ACCEPTANCE";
          case TransitGatewayAttachmentStatus::REJECTING:
            return "REJECTING";
          case TransitGatewayAttachmentStatus::REJECTED:
            return "REJECTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransitGatewayAttachmentStatusMapper
    } // namespace Model
  } // namespace NetworkFirewall
} // namespace Aws
