/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/ListTransactionsSortBy.h>
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
      namespace ListTransactionsSortByMapper
      {

        static const int TRANSACTION_TIMESTAMP_HASH = HashingUtils::HashString("TRANSACTION_TIMESTAMP");


        ListTransactionsSortBy GetListTransactionsSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRANSACTION_TIMESTAMP_HASH)
          {
            return ListTransactionsSortBy::TRANSACTION_TIMESTAMP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListTransactionsSortBy>(hashCode);
          }

          return ListTransactionsSortBy::NOT_SET;
        }

        Aws::String GetNameForListTransactionsSortBy(ListTransactionsSortBy enumValue)
        {
          switch(enumValue)
          {
          case ListTransactionsSortBy::NOT_SET:
            return {};
          case ListTransactionsSortBy::TRANSACTION_TIMESTAMP:
            return "TRANSACTION_TIMESTAMP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListTransactionsSortByMapper
    } // namespace Model
  } // namespace ManagedBlockchainQuery
} // namespace Aws
