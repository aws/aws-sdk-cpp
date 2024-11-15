/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/DnsThreatProtection.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53Resolver
  {
    namespace Model
    {
      namespace DnsThreatProtectionMapper
      {

        static const int DGA_HASH = HashingUtils::HashString("DGA");
        static const int DNS_TUNNELING_HASH = HashingUtils::HashString("DNS_TUNNELING");


        DnsThreatProtection GetDnsThreatProtectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DGA_HASH)
          {
            return DnsThreatProtection::DGA;
          }
          else if (hashCode == DNS_TUNNELING_HASH)
          {
            return DnsThreatProtection::DNS_TUNNELING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DnsThreatProtection>(hashCode);
          }

          return DnsThreatProtection::NOT_SET;
        }

        Aws::String GetNameForDnsThreatProtection(DnsThreatProtection enumValue)
        {
          switch(enumValue)
          {
          case DnsThreatProtection::NOT_SET:
            return {};
          case DnsThreatProtection::DGA:
            return "DGA";
          case DnsThreatProtection::DNS_TUNNELING:
            return "DNS_TUNNELING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DnsThreatProtectionMapper
    } // namespace Model
  } // namespace Route53Resolver
} // namespace Aws
