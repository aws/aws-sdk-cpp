/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/ServiceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceDiscovery
  {
    namespace Model
    {
      namespace ServiceTypeMapper
      {

        static const int HTTP_HASH = HashingUtils::HashString("HTTP");
        static const int DNS_HTTP_HASH = HashingUtils::HashString("DNS_HTTP");
        static const int DNS_HASH = HashingUtils::HashString("DNS");


        ServiceType GetServiceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HTTP_HASH)
          {
            return ServiceType::HTTP;
          }
          else if (hashCode == DNS_HTTP_HASH)
          {
            return ServiceType::DNS_HTTP;
          }
          else if (hashCode == DNS_HASH)
          {
            return ServiceType::DNS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceType>(hashCode);
          }

          return ServiceType::NOT_SET;
        }

        Aws::String GetNameForServiceType(ServiceType enumValue)
        {
          switch(enumValue)
          {
          case ServiceType::HTTP:
            return "HTTP";
          case ServiceType::DNS_HTTP:
            return "DNS_HTTP";
          case ServiceType::DNS:
            return "DNS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceTypeMapper
    } // namespace Model
  } // namespace ServiceDiscovery
} // namespace Aws
