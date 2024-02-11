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

        static const int VALIDATING_HASH = HashingUtils::HashString("VALIDATING");
        static const int VALIDATION_FAILED_HASH = HashingUtils::HashString("VALIDATION_FAILED");
        static const int PENDING_ACCEPTANCE_HASH = HashingUtils::HashString("PENDING_ACCEPTANCE");
        static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
        static const int PROVISIONING_HASH = HashingUtils::HashString("PROVISIONING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int REJECTING_HASH = HashingUtils::HashString("REJECTING");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        OutboundConnectionStatusCode GetOutboundConnectionStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
