/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/QueryTokenStandard.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ManagedBlockchainQuery
  {
    namespace Model
    {
      namespace QueryTokenStandardMapper
      {

        static const int ERC20_HASH = HashingUtils::HashString("ERC20");
        static const int ERC721_HASH = HashingUtils::HashString("ERC721");
        static const int ERC1155_HASH = HashingUtils::HashString("ERC1155");


        QueryTokenStandard GetQueryTokenStandardForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ERC20_HASH)
          {
            return QueryTokenStandard::ERC20;
          }
          else if (hashCode == ERC721_HASH)
          {
            return QueryTokenStandard::ERC721;
          }
          else if (hashCode == ERC1155_HASH)
          {
            return QueryTokenStandard::ERC1155;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryTokenStandard>(hashCode);
          }

          return QueryTokenStandard::NOT_SET;
        }

        Aws::String GetNameForQueryTokenStandard(QueryTokenStandard enumValue)
        {
          switch(enumValue)
          {
          case QueryTokenStandard::NOT_SET:
            return {};
          case QueryTokenStandard::ERC20:
            return "ERC20";
          case QueryTokenStandard::ERC721:
            return "ERC721";
          case QueryTokenStandard::ERC1155:
            return "ERC1155";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryTokenStandardMapper
    } // namespace Model
  } // namespace ManagedBlockchainQuery
} // namespace Aws
