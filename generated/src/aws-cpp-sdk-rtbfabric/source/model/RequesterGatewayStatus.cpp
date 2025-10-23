/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rtbfabric/model/RequesterGatewayStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RTBFabric
  {
    namespace Model
    {
      namespace RequesterGatewayStatusMapper
      {

        static const int PENDING_CREATION_HASH = HashingUtils::HashString("PENDING_CREATION");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int PENDING_DELETION_HASH = HashingUtils::HashString("PENDING_DELETION");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int PENDING_UPDATE_HASH = HashingUtils::HashString("PENDING_UPDATE");
        static const int ISOLATED_HASH = HashingUtils::HashString("ISOLATED");
        static const int PENDING_ISOLATION_HASH = HashingUtils::HashString("PENDING_ISOLATION");
        static const int PENDING_RESTORATION_HASH = HashingUtils::HashString("PENDING_RESTORATION");


        RequesterGatewayStatus GetRequesterGatewayStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_CREATION_HASH)
          {
            return RequesterGatewayStatus::PENDING_CREATION;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return RequesterGatewayStatus::ACTIVE;
          }
          else if (hashCode == PENDING_DELETION_HASH)
          {
            return RequesterGatewayStatus::PENDING_DELETION;
          }
          else if (hashCode == DELETED_HASH)
          {
            return RequesterGatewayStatus::DELETED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return RequesterGatewayStatus::ERROR_;
          }
          else if (hashCode == PENDING_UPDATE_HASH)
          {
            return RequesterGatewayStatus::PENDING_UPDATE;
          }
          else if (hashCode == ISOLATED_HASH)
          {
            return RequesterGatewayStatus::ISOLATED;
          }
          else if (hashCode == PENDING_ISOLATION_HASH)
          {
            return RequesterGatewayStatus::PENDING_ISOLATION;
          }
          else if (hashCode == PENDING_RESTORATION_HASH)
          {
            return RequesterGatewayStatus::PENDING_RESTORATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RequesterGatewayStatus>(hashCode);
          }

          return RequesterGatewayStatus::NOT_SET;
        }

        Aws::String GetNameForRequesterGatewayStatus(RequesterGatewayStatus enumValue)
        {
          switch(enumValue)
          {
          case RequesterGatewayStatus::NOT_SET:
            return {};
          case RequesterGatewayStatus::PENDING_CREATION:
            return "PENDING_CREATION";
          case RequesterGatewayStatus::ACTIVE:
            return "ACTIVE";
          case RequesterGatewayStatus::PENDING_DELETION:
            return "PENDING_DELETION";
          case RequesterGatewayStatus::DELETED:
            return "DELETED";
          case RequesterGatewayStatus::ERROR_:
            return "ERROR";
          case RequesterGatewayStatus::PENDING_UPDATE:
            return "PENDING_UPDATE";
          case RequesterGatewayStatus::ISOLATED:
            return "ISOLATED";
          case RequesterGatewayStatus::PENDING_ISOLATION:
            return "PENDING_ISOLATION";
          case RequesterGatewayStatus::PENDING_RESTORATION:
            return "PENDING_RESTORATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RequesterGatewayStatusMapper
    } // namespace Model
  } // namespace RTBFabric
} // namespace Aws
