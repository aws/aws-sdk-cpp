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

        static const int APPLICATION_LOAD_BALANCER_HASH = HashingUtils::HashString("APPLICATION_LOAD_BALANCER");
        static const int API_GATEWAY_HASH = HashingUtils::HashString("API_GATEWAY");
        static const int APPSYNC_HASH = HashingUtils::HashString("APPSYNC");
        static const int COGNITO_USER_POOL_HASH = HashingUtils::HashString("COGNITO_USER_POOL");
        static const int APP_RUNNER_SERVICE_HASH = HashingUtils::HashString("APP_RUNNER_SERVICE");
        static const int VERIFIED_ACCESS_INSTANCE_HASH = HashingUtils::HashString("VERIFIED_ACCESS_INSTANCE");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
