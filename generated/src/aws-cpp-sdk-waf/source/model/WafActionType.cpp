/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/WafActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAF
  {
    namespace Model
    {
      namespace WafActionTypeMapper
      {

        static const int BLOCK_HASH = HashingUtils::HashString("BLOCK");
        static const int ALLOW_HASH = HashingUtils::HashString("ALLOW");
        static const int COUNT_HASH = HashingUtils::HashString("COUNT");


        WafActionType GetWafActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLOCK_HASH)
          {
            return WafActionType::BLOCK;
          }
          else if (hashCode == ALLOW_HASH)
          {
            return WafActionType::ALLOW;
          }
          else if (hashCode == COUNT_HASH)
          {
            return WafActionType::COUNT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WafActionType>(hashCode);
          }

          return WafActionType::NOT_SET;
        }

        Aws::String GetNameForWafActionType(WafActionType enumValue)
        {
          switch(enumValue)
          {
          case WafActionType::BLOCK:
            return "BLOCK";
          case WafActionType::ALLOW:
            return "ALLOW";
          case WafActionType::COUNT:
            return "COUNT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WafActionTypeMapper
    } // namespace Model
  } // namespace WAF
} // namespace Aws
