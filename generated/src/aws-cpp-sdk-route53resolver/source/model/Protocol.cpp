/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/Protocol.h>
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
      namespace ProtocolMapper
      {

        static const int DoH_HASH = HashingUtils::HashString("DoH");
        static const int Do53_HASH = HashingUtils::HashString("Do53");
        static const int DoH_FIPS_HASH = HashingUtils::HashString("DoH-FIPS");


        Protocol GetProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DoH_HASH)
          {
            return Protocol::DoH;
          }
          else if (hashCode == Do53_HASH)
          {
            return Protocol::Do53;
          }
          else if (hashCode == DoH_FIPS_HASH)
          {
            return Protocol::DoH_FIPS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Protocol>(hashCode);
          }

          return Protocol::NOT_SET;
        }

        Aws::String GetNameForProtocol(Protocol enumValue)
        {
          switch(enumValue)
          {
          case Protocol::NOT_SET:
            return {};
          case Protocol::DoH:
            return "DoH";
          case Protocol::Do53:
            return "Do53";
          case Protocol::DoH_FIPS:
            return "DoH-FIPS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProtocolMapper
    } // namespace Model
  } // namespace Route53Resolver
} // namespace Aws
