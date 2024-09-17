/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/osis/model/VpcEndpointManagement.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OSIS
  {
    namespace Model
    {
      namespace VpcEndpointManagementMapper
      {

        static const int CUSTOMER_HASH = HashingUtils::HashString("CUSTOMER");
        static const int SERVICE_HASH = HashingUtils::HashString("SERVICE");


        VpcEndpointManagement GetVpcEndpointManagementForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOMER_HASH)
          {
            return VpcEndpointManagement::CUSTOMER;
          }
          else if (hashCode == SERVICE_HASH)
          {
            return VpcEndpointManagement::SERVICE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VpcEndpointManagement>(hashCode);
          }

          return VpcEndpointManagement::NOT_SET;
        }

        Aws::String GetNameForVpcEndpointManagement(VpcEndpointManagement enumValue)
        {
          switch(enumValue)
          {
          case VpcEndpointManagement::NOT_SET:
            return {};
          case VpcEndpointManagement::CUSTOMER:
            return "CUSTOMER";
          case VpcEndpointManagement::SERVICE:
            return "SERVICE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VpcEndpointManagementMapper
    } // namespace Model
  } // namespace OSIS
} // namespace Aws
