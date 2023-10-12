/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/InboundConnectionStatusCode.h>
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
      namespace InboundConnectionStatusCodeMapper
      {

        static constexpr uint32_t PENDING_ACCEPTANCE_HASH = ConstExprHashingUtils::HashString("PENDING_ACCEPTANCE");
        static constexpr uint32_t APPROVED_HASH = ConstExprHashingUtils::HashString("APPROVED");
        static constexpr uint32_t PROVISIONING_HASH = ConstExprHashingUtils::HashString("PROVISIONING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t REJECTING_HASH = ConstExprHashingUtils::HashString("REJECTING");
        static constexpr uint32_t REJECTED_HASH = ConstExprHashingUtils::HashString("REJECTED");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");


        InboundConnectionStatusCode GetInboundConnectionStatusCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_ACCEPTANCE_HASH)
          {
            return InboundConnectionStatusCode::PENDING_ACCEPTANCE;
          }
          else if (hashCode == APPROVED_HASH)
          {
            return InboundConnectionStatusCode::APPROVED;
          }
          else if (hashCode == PROVISIONING_HASH)
          {
            return InboundConnectionStatusCode::PROVISIONING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return InboundConnectionStatusCode::ACTIVE;
          }
          else if (hashCode == REJECTING_HASH)
          {
            return InboundConnectionStatusCode::REJECTING;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return InboundConnectionStatusCode::REJECTED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return InboundConnectionStatusCode::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return InboundConnectionStatusCode::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InboundConnectionStatusCode>(hashCode);
          }

          return InboundConnectionStatusCode::NOT_SET;
        }

        Aws::String GetNameForInboundConnectionStatusCode(InboundConnectionStatusCode enumValue)
        {
          switch(enumValue)
          {
          case InboundConnectionStatusCode::NOT_SET:
            return {};
          case InboundConnectionStatusCode::PENDING_ACCEPTANCE:
            return "PENDING_ACCEPTANCE";
          case InboundConnectionStatusCode::APPROVED:
            return "APPROVED";
          case InboundConnectionStatusCode::PROVISIONING:
            return "PROVISIONING";
          case InboundConnectionStatusCode::ACTIVE:
            return "ACTIVE";
          case InboundConnectionStatusCode::REJECTING:
            return "REJECTING";
          case InboundConnectionStatusCode::REJECTED:
            return "REJECTED";
          case InboundConnectionStatusCode::DELETING:
            return "DELETING";
          case InboundConnectionStatusCode::DELETED:
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

      } // namespace InboundConnectionStatusCodeMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
