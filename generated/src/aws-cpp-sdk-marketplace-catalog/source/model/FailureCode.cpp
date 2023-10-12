/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/FailureCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MarketplaceCatalog
  {
    namespace Model
    {
      namespace FailureCodeMapper
      {

        static constexpr uint32_t CLIENT_ERROR_HASH = ConstExprHashingUtils::HashString("CLIENT_ERROR");
        static constexpr uint32_t SERVER_FAULT_HASH = ConstExprHashingUtils::HashString("SERVER_FAULT");


        FailureCode GetFailureCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLIENT_ERROR_HASH)
          {
            return FailureCode::CLIENT_ERROR;
          }
          else if (hashCode == SERVER_FAULT_HASH)
          {
            return FailureCode::SERVER_FAULT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FailureCode>(hashCode);
          }

          return FailureCode::NOT_SET;
        }

        Aws::String GetNameForFailureCode(FailureCode enumValue)
        {
          switch(enumValue)
          {
          case FailureCode::NOT_SET:
            return {};
          case FailureCode::CLIENT_ERROR:
            return "CLIENT_ERROR";
          case FailureCode::SERVER_FAULT:
            return "SERVER_FAULT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FailureCodeMapper
    } // namespace Model
  } // namespace MarketplaceCatalog
} // namespace Aws
