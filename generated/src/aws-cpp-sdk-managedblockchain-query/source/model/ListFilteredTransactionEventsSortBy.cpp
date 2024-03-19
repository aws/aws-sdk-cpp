/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/ListFilteredTransactionEventsSortBy.h>
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
      namespace ListFilteredTransactionEventsSortByMapper
      {

        static const int blockchainInstant_HASH = HashingUtils::HashString("blockchainInstant");


        ListFilteredTransactionEventsSortBy GetListFilteredTransactionEventsSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == blockchainInstant_HASH)
          {
            return ListFilteredTransactionEventsSortBy::blockchainInstant;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListFilteredTransactionEventsSortBy>(hashCode);
          }

          return ListFilteredTransactionEventsSortBy::NOT_SET;
        }

        Aws::String GetNameForListFilteredTransactionEventsSortBy(ListFilteredTransactionEventsSortBy enumValue)
        {
          switch(enumValue)
          {
          case ListFilteredTransactionEventsSortBy::NOT_SET:
            return {};
          case ListFilteredTransactionEventsSortBy::blockchainInstant:
            return "blockchainInstant";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListFilteredTransactionEventsSortByMapper
    } // namespace Model
  } // namespace ManagedBlockchainQuery
} // namespace Aws
