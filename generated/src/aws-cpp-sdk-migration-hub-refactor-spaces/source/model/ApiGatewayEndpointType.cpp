/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/ApiGatewayEndpointType.h>
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
      namespace ApiGatewayEndpointTypeMapper
      {

        static const int REGIONAL_HASH = HashingUtils::HashString("REGIONAL");
        static const int PRIVATE__HASH = HashingUtils::HashString("PRIVATE");


        ApiGatewayEndpointType GetApiGatewayEndpointTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REGIONAL_HASH)
          {
            return ApiGatewayEndpointType::REGIONAL;
          }
          else if (hashCode == PRIVATE__HASH)
          {
            return ApiGatewayEndpointType::PRIVATE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApiGatewayEndpointType>(hashCode);
          }

          return ApiGatewayEndpointType::NOT_SET;
        }

        Aws::String GetNameForApiGatewayEndpointType(ApiGatewayEndpointType enumValue)
        {
          switch(enumValue)
          {
          case ApiGatewayEndpointType::NOT_SET:
            return {};
          case ApiGatewayEndpointType::REGIONAL:
            return "REGIONAL";
          case ApiGatewayEndpointType::PRIVATE_:
            return "PRIVATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApiGatewayEndpointTypeMapper
    } // namespace Model
  } // namespace MigrationHubRefactorSpaces
} // namespace Aws
