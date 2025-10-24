/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/OcsfIpField.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace OcsfIpFieldMapper
      {

        static const int evidences_dst_endpoint_ip_HASH = HashingUtils::HashString("evidences.dst_endpoint.ip");
        static const int evidences_src_endpoint_ip_HASH = HashingUtils::HashString("evidences.src_endpoint.ip");


        OcsfIpField GetOcsfIpFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == evidences_dst_endpoint_ip_HASH)
          {
            return OcsfIpField::evidences_dst_endpoint_ip;
          }
          else if (hashCode == evidences_src_endpoint_ip_HASH)
          {
            return OcsfIpField::evidences_src_endpoint_ip;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OcsfIpField>(hashCode);
          }

          return OcsfIpField::NOT_SET;
        }

        Aws::String GetNameForOcsfIpField(OcsfIpField enumValue)
        {
          switch(enumValue)
          {
          case OcsfIpField::NOT_SET:
            return {};
          case OcsfIpField::evidences_dst_endpoint_ip:
            return "evidences.dst_endpoint.ip";
          case OcsfIpField::evidences_src_endpoint_ip:
            return "evidences.src_endpoint.ip";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OcsfIpFieldMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
