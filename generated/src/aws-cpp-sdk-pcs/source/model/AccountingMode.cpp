/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pcs/model/AccountingMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PCS
  {
    namespace Model
    {
      namespace AccountingModeMapper
      {

        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        AccountingMode GetAccountingModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return AccountingMode::STANDARD;
          }
          else if (hashCode == NONE_HASH)
          {
            return AccountingMode::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccountingMode>(hashCode);
          }

          return AccountingMode::NOT_SET;
        }

        Aws::String GetNameForAccountingMode(AccountingMode enumValue)
        {
          switch(enumValue)
          {
          case AccountingMode::NOT_SET:
            return {};
          case AccountingMode::STANDARD:
            return "STANDARD";
          case AccountingMode::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccountingModeMapper
    } // namespace Model
  } // namespace PCS
} // namespace Aws
