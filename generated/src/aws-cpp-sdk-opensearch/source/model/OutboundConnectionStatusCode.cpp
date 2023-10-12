/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/OutboundConnectionStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchService
  {
    namespace Model
    {
      namespace OutboundConnectionStatusCodeMapper
      {

        static constexpr uint32_t VALIDATING_HASH = ConstExprHashingUtils::HashString("VALIDATING");
        static constexpr uint32_t VALIDATION_FAILED_HASH = ConstExprHashingUtils::HashString("VALIDATION_FAILED");
        static constexpr uint32_t PENDING_ACCEPTANCE_HASH = ConstExprHashingUtils::HashString("PENDING_ACCEPTANCE");
        static constexpr uint32_t APPROVED_HASH = ConstExprHashingUtils::HashString("APPROVED");
        static constexpr uint32_t PROVISIONING_HASH = ConstExprHashingUtils::HashString("PROVISIONING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t REJECTING_HASH = ConstExprHashingUtils::HashString("REJECTING");
        static constexpr uint32_t REJECTED_HASH = ConstExprHashingUtils::HashString("REJECTED");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");


        OutboundConnectionStatusCode GetOutboundConnectionStatusCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VALIDATING_HASH)
          {
            return OutboundConnectionStatusCode::VALIDATING;
          }
          else if (hashCode == VALIDATION_FAILED_HASH)
          {
            return OutboundConnectionStatusCode::VALIDATION_FAILED;
          }
          else if (hashCode == PENDING_ACCEPTANCE_HASH)
          {
            return OutboundConnectionStatusCode::PENDING_ACCEPTANCE;
          }
          else if (hashCode == APPROVED_HASH)
          {
            return OutboundConnectionStatusCode::APPROVED;
          }
          else if (hashCode == PROVISIONING_HASH)
          {
            return OutboundConnectionStatusCode::PROVISIONING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return OutboundConnectionStatusCode::ACTIVE;
          }
          else if (hashCode == REJECTING_HASH)
          {
            return OutboundConnectionStatusCode::REJECTING;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return OutboundConnectionStatusCode::REJECTED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return OutboundConnectionStatusCode::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return OutboundConnectionStatusCode::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OutboundConnectionStatusCode>(hashCode);
          }

          return OutboundConnectionStatusCode::NOT_SET;
        }

        Aws::String GetNameForOutboundConnectionStatusCode(OutboundConnectionStatusCode enumValue)
        {
          switch(enumValue)
          {
          case OutboundConnectionStatusCode::NOT_SET:
            return {};
          case OutboundConnectionStatusCode::VALIDATING:
            return "VALIDATING";
          case OutboundConnectionStatusCode::VALIDATION_FAILED:
            return "VALIDATION_FAILED";
          case OutboundConnectionStatusCode::PENDING_ACCEPTANCE:
            return "PENDING_ACCEPTANCE";
          case OutboundConnectionStatusCode::APPROVED:
            return "APPROVED";
          case OutboundConnectionStatusCode::PROVISIONING:
            return "PROVISIONING";
          case OutboundConnectionStatusCode::ACTIVE:
            return "ACTIVE";
          case OutboundConnectionStatusCode::REJECTING:
            return "REJECTING";
          case OutboundConnectionStatusCode::REJECTED:
            return "REJECTED";
          case OutboundConnectionStatusCode::DELETING:
            return "DELETING";
          case OutboundConnectionStatusCode::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OutboundConnectionStatusCodeMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
