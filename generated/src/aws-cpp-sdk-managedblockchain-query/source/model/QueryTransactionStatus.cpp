/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/QueryTransactionStatus.h>
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
      namespace QueryTransactionStatusMapper
      {

        static const int FINAL_HASH = HashingUtils::HashString("FINAL");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        QueryTransactionStatus GetQueryTransactionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FINAL_HASH)
          {
            return QueryTransactionStatus::FINAL;
          }
          else if (hashCode == FAILED_HASH)
          {
            return QueryTransactionStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryTransactionStatus>(hashCode);
          }

          return QueryTransactionStatus::NOT_SET;
        }

        Aws::String GetNameForQueryTransactionStatus(QueryTransactionStatus enumValue)
        {
          switch(enumValue)
          {
          case QueryTransactionStatus::NOT_SET:
            return {};
          case QueryTransactionStatus::FINAL:
            return "FINAL";
          case QueryTransactionStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryTransactionStatusMapper
    } // namespace Model
  } // namespace ManagedBlockchainQuery
} // namespace Aws
