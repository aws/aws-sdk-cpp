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

        static constexpr uint32_t ENVIRONMENT_HASH = ConstExprHashingUtils::HashString("ENVIRONMENT");
        static constexpr uint32_t APPLICATION_HASH = ConstExprHashingUtils::HashString("APPLICATION");
        static constexpr uint32_t ROUTE_HASH = ConstExprHashingUtils::HashString("ROUTE");
        static constexpr uint32_t SERVICE_HASH = ConstExprHashingUtils::HashString("SERVICE");
        static constexpr uint32_t TRANSIT_GATEWAY_HASH = ConstExprHashingUtils::HashString("TRANSIT_GATEWAY");
        static constexpr uint32_t TRANSIT_GATEWAY_ATTACHMENT_HASH = ConstExprHashingUtils::HashString("TRANSIT_GATEWAY_ATTACHMENT");
        static constexpr uint32_t API_GATEWAY_HASH = ConstExprHashingUtils::HashString("API_GATEWAY");
        static constexpr uint32_t NLB_HASH = ConstExprHashingUtils::HashString("NLB");
        static constexpr uint32_t TARGET_GROUP_HASH = ConstExprHashingUtils::HashString("TARGET_GROUP");
        static constexpr uint32_t LOAD_BALANCER_LISTENER_HASH = ConstExprHashingUtils::HashString("LOAD_BALANCER_LISTENER");
        static constexpr uint32_t VPC_LINK_HASH = ConstExprHashingUtils::HashString("VPC_LINK");
        static constexpr uint32_t LAMBDA_HASH = ConstExprHashingUtils::HashString("LAMBDA");
        static constexpr uint32_t VPC_HASH = ConstExprHashingUtils::HashString("VPC");
        static constexpr uint32_t SUBNET_HASH = ConstExprHashingUtils::HashString("SUBNET");
        static constexpr uint32_t ROUTE_TABLE_HASH = ConstExprHashingUtils::HashString("ROUTE_TABLE");
        static constexpr uint32_t SECURITY_GROUP_HASH = ConstExprHashingUtils::HashString("SECURITY_GROUP");
        static constexpr uint32_t VPC_ENDPOINT_SERVICE_CONFIGURATION_HASH = ConstExprHashingUtils::HashString("VPC_ENDPOINT_SERVICE_CONFIGURATION");
        static constexpr uint32_t RESOURCE_SHARE_HASH = ConstExprHashingUtils::HashString("RESOURCE_SHARE");
        static constexpr uint32_t IAM_ROLE_HASH = ConstExprHashingUtils::HashString("IAM_ROLE");


        ErrorResourceType GetErrorResourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
