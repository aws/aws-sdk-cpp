/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/HostedZoneType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53
  {
    namespace Model
    {
      namespace HostedZoneTypeMapper
      {

        static const int PrivateHostedZone_HASH = HashingUtils::HashString("PrivateHostedZone");


        HostedZoneType GetHostedZoneTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PrivateHostedZone_HASH)
          {
            return HostedZoneType::PrivateHostedZone;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HostedZoneType>(hashCode);
          }

          return HostedZoneType::NOT_SET;
        }

        Aws::String GetNameForHostedZoneType(HostedZoneType enumValue)
        {
          switch(enumValue)
          {
          case HostedZoneType::NOT_SET:
            return {};
          case HostedZoneType::PrivateHostedZone:
            return "PrivateHostedZone";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HostedZoneTypeMapper
    } // namespace Model
  } // namespace Route53
} // namespace Aws
