/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/ConnectorStatusReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PcaConnectorAd
  {
    namespace Model
    {
      namespace ConnectorStatusReasonMapper
      {

        static const int DIRECTORY_ACCESS_DENIED_HASH = HashingUtils::HashString("DIRECTORY_ACCESS_DENIED");
        static const int INTERNAL_FAILURE_HASH = HashingUtils::HashString("INTERNAL_FAILURE");
        static const int PRIVATECA_ACCESS_DENIED_HASH = HashingUtils::HashString("PRIVATECA_ACCESS_DENIED");
        static const int PRIVATECA_RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("PRIVATECA_RESOURCE_NOT_FOUND");
        static const int SECURITY_GROUP_NOT_IN_VPC_HASH = HashingUtils::HashString("SECURITY_GROUP_NOT_IN_VPC");
        static const int VPC_ACCESS_DENIED_HASH = HashingUtils::HashString("VPC_ACCESS_DENIED");
        static const int VPC_ENDPOINT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("VPC_ENDPOINT_LIMIT_EXCEEDED");
        static const int VPC_RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("VPC_RESOURCE_NOT_FOUND");


        ConnectorStatusReason GetConnectorStatusReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DIRECTORY_ACCESS_DENIED_HASH)
          {
            return ConnectorStatusReason::DIRECTORY_ACCESS_DENIED;
          }
          else if (hashCode == INTERNAL_FAILURE_HASH)
          {
            return ConnectorStatusReason::INTERNAL_FAILURE;
          }
          else if (hashCode == PRIVATECA_ACCESS_DENIED_HASH)
          {
            return ConnectorStatusReason::PRIVATECA_ACCESS_DENIED;
          }
          else if (hashCode == PRIVATECA_RESOURCE_NOT_FOUND_HASH)
          {
            return ConnectorStatusReason::PRIVATECA_RESOURCE_NOT_FOUND;
          }
          else if (hashCode == SECURITY_GROUP_NOT_IN_VPC_HASH)
          {
            return ConnectorStatusReason::SECURITY_GROUP_NOT_IN_VPC;
          }
          else if (hashCode == VPC_ACCESS_DENIED_HASH)
          {
            return ConnectorStatusReason::VPC_ACCESS_DENIED;
          }
          else if (hashCode == VPC_ENDPOINT_LIMIT_EXCEEDED_HASH)
          {
            return ConnectorStatusReason::VPC_ENDPOINT_LIMIT_EXCEEDED;
          }
          else if (hashCode == VPC_RESOURCE_NOT_FOUND_HASH)
          {
            return ConnectorStatusReason::VPC_RESOURCE_NOT_FOUND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectorStatusReason>(hashCode);
          }

          return ConnectorStatusReason::NOT_SET;
        }

        Aws::String GetNameForConnectorStatusReason(ConnectorStatusReason enumValue)
        {
          switch(enumValue)
          {
          case ConnectorStatusReason::NOT_SET:
            return {};
          case ConnectorStatusReason::DIRECTORY_ACCESS_DENIED:
            return "DIRECTORY_ACCESS_DENIED";
          case ConnectorStatusReason::INTERNAL_FAILURE:
            return "INTERNAL_FAILURE";
          case ConnectorStatusReason::PRIVATECA_ACCESS_DENIED:
            return "PRIVATECA_ACCESS_DENIED";
          case ConnectorStatusReason::PRIVATECA_RESOURCE_NOT_FOUND:
            return "PRIVATECA_RESOURCE_NOT_FOUND";
          case ConnectorStatusReason::SECURITY_GROUP_NOT_IN_VPC:
            return "SECURITY_GROUP_NOT_IN_VPC";
          case ConnectorStatusReason::VPC_ACCESS_DENIED:
            return "VPC_ACCESS_DENIED";
          case ConnectorStatusReason::VPC_ENDPOINT_LIMIT_EXCEEDED:
            return "VPC_ENDPOINT_LIMIT_EXCEEDED";
          case ConnectorStatusReason::VPC_RESOURCE_NOT_FOUND:
            return "VPC_RESOURCE_NOT_FOUND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectorStatusReasonMapper
    } // namespace Model
  } // namespace PcaConnectorAd
} // namespace Aws
