/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/osis/model/VpcEndpointServiceName.h>
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
      namespace VpcEndpointServiceNameMapper
      {

        static const int OPENSEARCH_SERVERLESS_HASH = HashingUtils::HashString("OPENSEARCH_SERVERLESS");


        VpcEndpointServiceName GetVpcEndpointServiceNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OPENSEARCH_SERVERLESS_HASH)
          {
            return VpcEndpointServiceName::OPENSEARCH_SERVERLESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VpcEndpointServiceName>(hashCode);
          }

          return VpcEndpointServiceName::NOT_SET;
        }

        Aws::String GetNameForVpcEndpointServiceName(VpcEndpointServiceName enumValue)
        {
          switch(enumValue)
          {
          case VpcEndpointServiceName::NOT_SET:
            return {};
          case VpcEndpointServiceName::OPENSEARCH_SERVERLESS:
            return "OPENSEARCH_SERVERLESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VpcEndpointServiceNameMapper
    } // namespace Model
  } // namespace OSIS
} // namespace Aws
