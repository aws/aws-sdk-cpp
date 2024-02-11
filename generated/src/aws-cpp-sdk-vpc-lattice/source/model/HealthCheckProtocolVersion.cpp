/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/HealthCheckProtocolVersion.h>
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
      namespace HealthCheckProtocolVersionMapper
      {

        static const int HTTP1_HASH = HashingUtils::HashString("HTTP1");
        static const int HTTP2_HASH = HashingUtils::HashString("HTTP2");


        HealthCheckProtocolVersion GetHealthCheckProtocolVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HTTP1_HASH)
          {
            return HealthCheckProtocolVersion::HTTP1;
          }
          else if (hashCode == HTTP2_HASH)
          {
            return HealthCheckProtocolVersion::HTTP2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HealthCheckProtocolVersion>(hashCode);
          }

          return HealthCheckProtocolVersion::NOT_SET;
        }

        Aws::String GetNameForHealthCheckProtocolVersion(HealthCheckProtocolVersion enumValue)
        {
          switch(enumValue)
          {
          case HealthCheckProtocolVersion::NOT_SET:
            return {};
          case HealthCheckProtocolVersion::HTTP1:
            return "HTTP1";
          case HealthCheckProtocolVersion::HTTP2:
            return "HTTP2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HealthCheckProtocolVersionMapper
    } // namespace Model
  } // namespace VPCLattice
} // namespace Aws
