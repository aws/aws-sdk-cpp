/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFV2
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static constexpr uint32_t APPLICATION_LOAD_BALANCER_HASH = ConstExprHashingUtils::HashString("APPLICATION_LOAD_BALANCER");
        static constexpr uint32_t API_GATEWAY_HASH = ConstExprHashingUtils::HashString("API_GATEWAY");
        static constexpr uint32_t APPSYNC_HASH = ConstExprHashingUtils::HashString("APPSYNC");
        static constexpr uint32_t COGNITO_USER_POOL_HASH = ConstExprHashingUtils::HashString("COGNITO_USER_POOL");
        static constexpr uint32_t APP_RUNNER_SERVICE_HASH = ConstExprHashingUtils::HashString("APP_RUNNER_SERVICE");
        static constexpr uint32_t VERIFIED_ACCESS_INSTANCE_HASH = ConstExprHashingUtils::HashString("VERIFIED_ACCESS_INSTANCE");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPLICATION_LOAD_BALANCER_HASH)
          {
            return ResourceType::APPLICATION_LOAD_BALANCER;
          }
          else if (hashCode == API_GATEWAY_HASH)
          {
            return ResourceType::API_GATEWAY;
          }
          else if (hashCode == APPSYNC_HASH)
          {
            return ResourceType::APPSYNC;
          }
          else if (hashCode == COGNITO_USER_POOL_HASH)
          {
            return ResourceType::COGNITO_USER_POOL;
          }
          else if (hashCode == APP_RUNNER_SERVICE_HASH)
          {
            return ResourceType::APP_RUNNER_SERVICE;
          }
          else if (hashCode == VERIFIED_ACCESS_INSTANCE_HASH)
          {
            return ResourceType::VERIFIED_ACCESS_INSTANCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceType>(hashCode);
          }

          return ResourceType::NOT_SET;
        }

        Aws::String GetNameForResourceType(ResourceType enumValue)
        {
          switch(enumValue)
          {
          case ResourceType::NOT_SET:
            return {};
          case ResourceType::APPLICATION_LOAD_BALANCER:
            return "APPLICATION_LOAD_BALANCER";
          case ResourceType::API_GATEWAY:
            return "API_GATEWAY";
          case ResourceType::APPSYNC:
            return "APPSYNC";
          case ResourceType::COGNITO_USER_POOL:
            return "COGNITO_USER_POOL";
          case ResourceType::APP_RUNNER_SERVICE:
            return "APP_RUNNER_SERVICE";
          case ResourceType::VERIFIED_ACCESS_INSTANCE:
            return "VERIFIED_ACCESS_INSTANCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws
