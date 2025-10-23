/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rtbfabric/model/ResponderGatewayStatus.h>
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
      namespace ResponderGatewayStatusMapper
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


        ResponderGatewayStatus GetResponderGatewayStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_CREATION_HASH)
          {
            return ResponderGatewayStatus::PENDING_CREATION;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ResponderGatewayStatus::ACTIVE;
          }
          else if (hashCode == PENDING_DELETION_HASH)
          {
            return ResponderGatewayStatus::PENDING_DELETION;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ResponderGatewayStatus::DELETED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return ResponderGatewayStatus::ERROR_;
          }
          else if (hashCode == PENDING_UPDATE_HASH)
          {
            return ResponderGatewayStatus::PENDING_UPDATE;
          }
          else if (hashCode == ISOLATED_HASH)
          {
            return ResponderGatewayStatus::ISOLATED;
          }
          else if (hashCode == PENDING_ISOLATION_HASH)
          {
            return ResponderGatewayStatus::PENDING_ISOLATION;
          }
          else if (hashCode == PENDING_RESTORATION_HASH)
          {
            return ResponderGatewayStatus::PENDING_RESTORATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResponderGatewayStatus>(hashCode);
          }

          return ResponderGatewayStatus::NOT_SET;
        }

        Aws::String GetNameForResponderGatewayStatus(ResponderGatewayStatus enumValue)
        {
          switch(enumValue)
          {
          case ResponderGatewayStatus::NOT_SET:
            return {};
          case ResponderGatewayStatus::PENDING_CREATION:
            return "PENDING_CREATION";
          case ResponderGatewayStatus::ACTIVE:
            return "ACTIVE";
          case ResponderGatewayStatus::PENDING_DELETION:
            return "PENDING_DELETION";
          case ResponderGatewayStatus::DELETED:
            return "DELETED";
          case ResponderGatewayStatus::ERROR_:
            return "ERROR";
          case ResponderGatewayStatus::PENDING_UPDATE:
            return "PENDING_UPDATE";
          case ResponderGatewayStatus::ISOLATED:
            return "ISOLATED";
          case ResponderGatewayStatus::PENDING_ISOLATION:
            return "PENDING_ISOLATION";
          case ResponderGatewayStatus::PENDING_RESTORATION:
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

      } // namespace ResponderGatewayStatusMapper
    } // namespace Model
  } // namespace RTBFabric
} // namespace Aws
