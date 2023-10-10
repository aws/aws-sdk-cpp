/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/BlockOverrideDnsType.h>
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
      namespace BlockOverrideDnsTypeMapper
      {

        static const int CNAME_HASH = HashingUtils::HashString("CNAME");


        BlockOverrideDnsType GetBlockOverrideDnsTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CNAME_HASH)
          {
            return BlockOverrideDnsType::CNAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BlockOverrideDnsType>(hashCode);
          }

          return BlockOverrideDnsType::NOT_SET;
        }

        Aws::String GetNameForBlockOverrideDnsType(BlockOverrideDnsType enumValue)
        {
          switch(enumValue)
          {
          case BlockOverrideDnsType::NOT_SET:
            return {};
          case BlockOverrideDnsType::CNAME:
            return "CNAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BlockOverrideDnsTypeMapper
    } // namespace Model
  } // namespace Route53Resolver
} // namespace Aws
