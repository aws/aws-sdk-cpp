/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/VpcEndpointType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace odb
  {
    namespace Model
    {
      namespace VpcEndpointTypeMapper
      {

        static const int SERVICENETWORK_HASH = HashingUtils::HashString("SERVICENETWORK");


        VpcEndpointType GetVpcEndpointTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SERVICENETWORK_HASH)
          {
            return VpcEndpointType::SERVICENETWORK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VpcEndpointType>(hashCode);
          }

          return VpcEndpointType::NOT_SET;
        }

        Aws::String GetNameForVpcEndpointType(VpcEndpointType enumValue)
        {
          switch(enumValue)
          {
          case VpcEndpointType::NOT_SET:
            return {};
          case VpcEndpointType::SERVICENETWORK:
            return "SERVICENETWORK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VpcEndpointTypeMapper
    } // namespace Model
  } // namespace odb
} // namespace Aws
