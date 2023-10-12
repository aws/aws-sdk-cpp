/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/GeneratedRulesType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkFirewall
  {
    namespace Model
    {
      namespace GeneratedRulesTypeMapper
      {

        static constexpr uint32_t ALLOWLIST_HASH = ConstExprHashingUtils::HashString("ALLOWLIST");
        static constexpr uint32_t DENYLIST_HASH = ConstExprHashingUtils::HashString("DENYLIST");


        GeneratedRulesType GetGeneratedRulesTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOWLIST_HASH)
          {
            return GeneratedRulesType::ALLOWLIST;
          }
          else if (hashCode == DENYLIST_HASH)
          {
            return GeneratedRulesType::DENYLIST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GeneratedRulesType>(hashCode);
          }

          return GeneratedRulesType::NOT_SET;
        }

        Aws::String GetNameForGeneratedRulesType(GeneratedRulesType enumValue)
        {
          switch(enumValue)
          {
          case GeneratedRulesType::NOT_SET:
            return {};
          case GeneratedRulesType::ALLOWLIST:
            return "ALLOWLIST";
          case GeneratedRulesType::DENYLIST:
            return "DENYLIST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GeneratedRulesTypeMapper
    } // namespace Model
  } // namespace NetworkFirewall
} // namespace Aws
