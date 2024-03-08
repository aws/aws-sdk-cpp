/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa/model/EndpointManagement.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MWAA
  {
    namespace Model
    {
      namespace EndpointManagementMapper
      {

        static const int CUSTOMER_HASH = HashingUtils::HashString("CUSTOMER");
        static const int SERVICE_HASH = HashingUtils::HashString("SERVICE");


        EndpointManagement GetEndpointManagementForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOMER_HASH)
          {
            return EndpointManagement::CUSTOMER;
          }
          else if (hashCode == SERVICE_HASH)
          {
            return EndpointManagement::SERVICE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EndpointManagement>(hashCode);
          }

          return EndpointManagement::NOT_SET;
        }

        Aws::String GetNameForEndpointManagement(EndpointManagement enumValue)
        {
          switch(enumValue)
          {
          case EndpointManagement::NOT_SET:
            return {};
          case EndpointManagement::CUSTOMER:
            return "CUSTOMER";
          case EndpointManagement::SERVICE:
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

      } // namespace EndpointManagementMapper
    } // namespace Model
  } // namespace MWAA
} // namespace Aws
