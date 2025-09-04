/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/EndpointNetworkType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace EndpointNetworkTypeMapper
      {

        static const int IPV4_HASH = HashingUtils::HashString("IPV4");
        static const int IPV6_HASH = HashingUtils::HashString("IPV6");
        static const int DUAL_HASH = HashingUtils::HashString("DUAL");


        EndpointNetworkType GetEndpointNetworkTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IPV4_HASH)
          {
            return EndpointNetworkType::IPV4;
          }
          else if (hashCode == IPV6_HASH)
          {
            return EndpointNetworkType::IPV6;
          }
          else if (hashCode == DUAL_HASH)
          {
            return EndpointNetworkType::DUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EndpointNetworkType>(hashCode);
          }

          return EndpointNetworkType::NOT_SET;
        }

        Aws::String GetNameForEndpointNetworkType(EndpointNetworkType enumValue)
        {
          switch(enumValue)
          {
          case EndpointNetworkType::NOT_SET:
            return {};
          case EndpointNetworkType::IPV4:
            return "IPV4";
          case EndpointNetworkType::IPV6:
            return "IPV6";
          case EndpointNetworkType::DUAL:
            return "DUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EndpointNetworkTypeMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
