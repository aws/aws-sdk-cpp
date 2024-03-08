/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/BlockResponse.h>
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
      namespace BlockResponseMapper
      {

        static const int NODATA_HASH = HashingUtils::HashString("NODATA");
        static const int NXDOMAIN_HASH = HashingUtils::HashString("NXDOMAIN");
        static const int OVERRIDE_HASH = HashingUtils::HashString("OVERRIDE");


        BlockResponse GetBlockResponseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NODATA_HASH)
          {
            return BlockResponse::NODATA;
          }
          else if (hashCode == NXDOMAIN_HASH)
          {
            return BlockResponse::NXDOMAIN;
          }
          else if (hashCode == OVERRIDE_HASH)
          {
            return BlockResponse::OVERRIDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BlockResponse>(hashCode);
          }

          return BlockResponse::NOT_SET;
        }

        Aws::String GetNameForBlockResponse(BlockResponse enumValue)
        {
          switch(enumValue)
          {
          case BlockResponse::NOT_SET:
            return {};
          case BlockResponse::NODATA:
            return "NODATA";
          case BlockResponse::NXDOMAIN:
            return "NXDOMAIN";
          case BlockResponse::OVERRIDE:
            return "OVERRIDE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BlockResponseMapper
    } // namespace Model
  } // namespace Route53Resolver
} // namespace Aws
