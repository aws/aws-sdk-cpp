/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/ServiceEndpointType.h>
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
      namespace ServiceEndpointTypeMapper
      {

        static const int LAMBDA_HASH = HashingUtils::HashString("LAMBDA");
        static const int URL_HASH = HashingUtils::HashString("URL");


        ServiceEndpointType GetServiceEndpointTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LAMBDA_HASH)
          {
            return ServiceEndpointType::LAMBDA;
          }
          else if (hashCode == URL_HASH)
          {
            return ServiceEndpointType::URL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceEndpointType>(hashCode);
          }

          return ServiceEndpointType::NOT_SET;
        }

        Aws::String GetNameForServiceEndpointType(ServiceEndpointType enumValue)
        {
          switch(enumValue)
          {
          case ServiceEndpointType::NOT_SET:
            return {};
          case ServiceEndpointType::LAMBDA:
            return "LAMBDA";
          case ServiceEndpointType::URL:
            return "URL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceEndpointTypeMapper
    } // namespace Model
  } // namespace MigrationHubRefactorSpaces
} // namespace Aws
