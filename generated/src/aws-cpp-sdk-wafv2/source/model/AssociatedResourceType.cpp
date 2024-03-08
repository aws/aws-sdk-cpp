/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/AssociatedResourceType.h>
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
      namespace AssociatedResourceTypeMapper
      {

        static const int CLOUDFRONT_HASH = HashingUtils::HashString("CLOUDFRONT");
        static const int API_GATEWAY_HASH = HashingUtils::HashString("API_GATEWAY");
        static const int COGNITO_USER_POOL_HASH = HashingUtils::HashString("COGNITO_USER_POOL");
        static const int APP_RUNNER_SERVICE_HASH = HashingUtils::HashString("APP_RUNNER_SERVICE");
        static const int VERIFIED_ACCESS_INSTANCE_HASH = HashingUtils::HashString("VERIFIED_ACCESS_INSTANCE");


        AssociatedResourceType GetAssociatedResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLOUDFRONT_HASH)
          {
            return AssociatedResourceType::CLOUDFRONT;
          }
          else if (hashCode == API_GATEWAY_HASH)
          {
            return AssociatedResourceType::API_GATEWAY;
          }
          else if (hashCode == COGNITO_USER_POOL_HASH)
          {
            return AssociatedResourceType::COGNITO_USER_POOL;
          }
          else if (hashCode == APP_RUNNER_SERVICE_HASH)
          {
            return AssociatedResourceType::APP_RUNNER_SERVICE;
          }
          else if (hashCode == VERIFIED_ACCESS_INSTANCE_HASH)
          {
            return AssociatedResourceType::VERIFIED_ACCESS_INSTANCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssociatedResourceType>(hashCode);
          }

          return AssociatedResourceType::NOT_SET;
        }

        Aws::String GetNameForAssociatedResourceType(AssociatedResourceType enumValue)
        {
          switch(enumValue)
          {
          case AssociatedResourceType::NOT_SET:
            return {};
          case AssociatedResourceType::CLOUDFRONT:
            return "CLOUDFRONT";
          case AssociatedResourceType::API_GATEWAY:
            return "API_GATEWAY";
          case AssociatedResourceType::COGNITO_USER_POOL:
            return "COGNITO_USER_POOL";
          case AssociatedResourceType::APP_RUNNER_SERVICE:
            return "APP_RUNNER_SERVICE";
          case AssociatedResourceType::VERIFIED_ACCESS_INSTANCE:
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

      } // namespace AssociatedResourceTypeMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws
