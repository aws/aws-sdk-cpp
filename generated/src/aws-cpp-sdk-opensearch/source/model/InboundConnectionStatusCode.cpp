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

        static const int PENDING_ACCEPTANCE_HASH = HashingUtils::HashString("PENDING_ACCEPTANCE");
        static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
        static const int PROVISIONING_HASH = HashingUtils::HashString("PROVISIONING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int REJECTING_HASH = HashingUtils::HashString("REJECTING");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        InboundConnectionStatusCode GetInboundConnectionStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
