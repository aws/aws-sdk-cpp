/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/ServiceNetworkLogType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace VPCLattice
  {
    namespace Model
    {
      namespace ServiceNetworkLogTypeMapper
      {

        static const int SERVICE_HASH = HashingUtils::HashString("SERVICE");
        static const int RESOURCE_HASH = HashingUtils::HashString("RESOURCE");


        ServiceNetworkLogType GetServiceNetworkLogTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SERVICE_HASH)
          {
            return ServiceNetworkLogType::SERVICE;
          }
          else if (hashCode == RESOURCE_HASH)
          {
            return ServiceNetworkLogType::RESOURCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceNetworkLogType>(hashCode);
          }

          return ServiceNetworkLogType::NOT_SET;
        }

        Aws::String GetNameForServiceNetworkLogType(ServiceNetworkLogType enumValue)
        {
          switch(enumValue)
          {
          case ServiceNetworkLogType::NOT_SET:
            return {};
          case ServiceNetworkLogType::SERVICE:
            return "SERVICE";
          case ServiceNetworkLogType::RESOURCE:
            return "RESOURCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceNetworkLogTypeMapper
    } // namespace Model
  } // namespace VPCLattice
} // namespace Aws
