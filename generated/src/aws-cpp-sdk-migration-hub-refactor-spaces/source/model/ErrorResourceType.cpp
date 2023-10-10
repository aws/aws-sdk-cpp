/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/ErrorResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MigrationHubRefactorSpaces
  {
    namespace Model
    {
      namespace ErrorResourceTypeMapper
      {

        static const int ENVIRONMENT_HASH = HashingUtils::HashString("ENVIRONMENT");
        static const int APPLICATION_HASH = HashingUtils::HashString("APPLICATION");
        static const int ROUTE_HASH = HashingUtils::HashString("ROUTE");
        static const int SERVICE_HASH = HashingUtils::HashString("SERVICE");
        static const int TRANSIT_GATEWAY_HASH = HashingUtils::HashString("TRANSIT_GATEWAY");
        static const int TRANSIT_GATEWAY_ATTACHMENT_HASH = HashingUtils::HashString("TRANSIT_GATEWAY_ATTACHMENT");
        static const int API_GATEWAY_HASH = HashingUtils::HashString("API_GATEWAY");
        static const int NLB_HASH = HashingUtils::HashString("NLB");
        static const int TARGET_GROUP_HASH = HashingUtils::HashString("TARGET_GROUP");
        static const int LOAD_BALANCER_LISTENER_HASH = HashingUtils::HashString("LOAD_BALANCER_LISTENER");
        static const int VPC_LINK_HASH = HashingUtils::HashString("VPC_LINK");
        static const int LAMBDA_HASH = HashingUtils::HashString("LAMBDA");
        static const int VPC_HASH = HashingUtils::HashString("VPC");
        static const int SUBNET_HASH = HashingUtils::HashString("SUBNET");
        static const int ROUTE_TABLE_HASH = HashingUtils::HashString("ROUTE_TABLE");
        static const int SECURITY_GROUP_HASH = HashingUtils::HashString("SECURITY_GROUP");
        static const int VPC_ENDPOINT_SERVICE_CONFIGURATION_HASH = HashingUtils::HashString("VPC_ENDPOINT_SERVICE_CONFIGURATION");
        static const int RESOURCE_SHARE_HASH = HashingUtils::HashString("RESOURCE_SHARE");
        static const int IAM_ROLE_HASH = HashingUtils::HashString("IAM_ROLE");


        ErrorResourceType GetErrorResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENVIRONMENT_HASH)
          {
            return ErrorResourceType::ENVIRONMENT;
          }
          else if (hashCode == APPLICATION_HASH)
          {
            return ErrorResourceType::APPLICATION;
          }
          else if (hashCode == ROUTE_HASH)
          {
            return ErrorResourceType::ROUTE;
          }
          else if (hashCode == SERVICE_HASH)
          {
            return ErrorResourceType::SERVICE;
          }
          else if (hashCode == TRANSIT_GATEWAY_HASH)
          {
            return ErrorResourceType::TRANSIT_GATEWAY;
          }
          else if (hashCode == TRANSIT_GATEWAY_ATTACHMENT_HASH)
          {
            return ErrorResourceType::TRANSIT_GATEWAY_ATTACHMENT;
          }
          else if (hashCode == API_GATEWAY_HASH)
          {
            return ErrorResourceType::API_GATEWAY;
          }
          else if (hashCode == NLB_HASH)
          {
            return ErrorResourceType::NLB;
          }
          else if (hashCode == TARGET_GROUP_HASH)
          {
            return ErrorResourceType::TARGET_GROUP;
          }
          else if (hashCode == LOAD_BALANCER_LISTENER_HASH)
          {
            return ErrorResourceType::LOAD_BALANCER_LISTENER;
          }
          else if (hashCode == VPC_LINK_HASH)
          {
            return ErrorResourceType::VPC_LINK;
          }
          else if (hashCode == LAMBDA_HASH)
          {
            return ErrorResourceType::LAMBDA;
          }
          else if (hashCode == VPC_HASH)
          {
            return ErrorResourceType::VPC;
          }
          else if (hashCode == SUBNET_HASH)
          {
            return ErrorResourceType::SUBNET;
          }
          else if (hashCode == ROUTE_TABLE_HASH)
          {
            return ErrorResourceType::ROUTE_TABLE;
          }
          else if (hashCode == SECURITY_GROUP_HASH)
          {
            return ErrorResourceType::SECURITY_GROUP;
          }
          else if (hashCode == VPC_ENDPOINT_SERVICE_CONFIGURATION_HASH)
          {
            return ErrorResourceType::VPC_ENDPOINT_SERVICE_CONFIGURATION;
          }
          else if (hashCode == RESOURCE_SHARE_HASH)
          {
            return ErrorResourceType::RESOURCE_SHARE;
          }
          else if (hashCode == IAM_ROLE_HASH)
          {
            return ErrorResourceType::IAM_ROLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ErrorResourceType>(hashCode);
          }

          return ErrorResourceType::NOT_SET;
        }

        Aws::String GetNameForErrorResourceType(ErrorResourceType enumValue)
        {
          switch(enumValue)
          {
          case ErrorResourceType::NOT_SET:
            return {};
          case ErrorResourceType::ENVIRONMENT:
            return "ENVIRONMENT";
          case ErrorResourceType::APPLICATION:
            return "APPLICATION";
          case ErrorResourceType::ROUTE:
            return "ROUTE";
          case ErrorResourceType::SERVICE:
            return "SERVICE";
          case ErrorResourceType::TRANSIT_GATEWAY:
            return "TRANSIT_GATEWAY";
          case ErrorResourceType::TRANSIT_GATEWAY_ATTACHMENT:
            return "TRANSIT_GATEWAY_ATTACHMENT";
          case ErrorResourceType::API_GATEWAY:
            return "API_GATEWAY";
          case ErrorResourceType::NLB:
            return "NLB";
          case ErrorResourceType::TARGET_GROUP:
            return "TARGET_GROUP";
          case ErrorResourceType::LOAD_BALANCER_LISTENER:
            return "LOAD_BALANCER_LISTENER";
          case ErrorResourceType::VPC_LINK:
            return "VPC_LINK";
          case ErrorResourceType::LAMBDA:
            return "LAMBDA";
          case ErrorResourceType::VPC:
            return "VPC";
          case ErrorResourceType::SUBNET:
            return "SUBNET";
          case ErrorResourceType::ROUTE_TABLE:
            return "ROUTE_TABLE";
          case ErrorResourceType::SECURITY_GROUP:
            return "SECURITY_GROUP";
          case ErrorResourceType::VPC_ENDPOINT_SERVICE_CONFIGURATION:
            return "VPC_ENDPOINT_SERVICE_CONFIGURATION";
          case ErrorResourceType::RESOURCE_SHARE:
            return "RESOURCE_SHARE";
          case ErrorResourceType::IAM_ROLE:
            return "IAM_ROLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ErrorResourceTypeMapper
    } // namespace Model
  } // namespace MigrationHubRefactorSpaces
} // namespace Aws
