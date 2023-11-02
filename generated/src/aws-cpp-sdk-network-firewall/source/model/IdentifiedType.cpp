/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/IdentifiedType.h>
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
      namespace IdentifiedTypeMapper
      {

        static const int STATELESS_RULE_FORWARDING_ASYMMETRICALLY_HASH = HashingUtils::HashString("STATELESS_RULE_FORWARDING_ASYMMETRICALLY");
        static const int STATELESS_RULE_CONTAINS_TCP_FLAGS_HASH = HashingUtils::HashString("STATELESS_RULE_CONTAINS_TCP_FLAGS");


        IdentifiedType GetIdentifiedTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STATELESS_RULE_FORWARDING_ASYMMETRICALLY_HASH)
          {
            return IdentifiedType::STATELESS_RULE_FORWARDING_ASYMMETRICALLY;
          }
          else if (hashCode == STATELESS_RULE_CONTAINS_TCP_FLAGS_HASH)
          {
            return IdentifiedType::STATELESS_RULE_CONTAINS_TCP_FLAGS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IdentifiedType>(hashCode);
          }

          return IdentifiedType::NOT_SET;
        }

        Aws::String GetNameForIdentifiedType(IdentifiedType enumValue)
        {
          switch(enumValue)
          {
          case IdentifiedType::NOT_SET:
            return {};
          case IdentifiedType::STATELESS_RULE_FORWARDING_ASYMMETRICALLY:
            return "STATELESS_RULE_FORWARDING_ASYMMETRICALLY";
          case IdentifiedType::STATELESS_RULE_CONTAINS_TCP_FLAGS:
            return "STATELESS_RULE_CONTAINS_TCP_FLAGS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IdentifiedTypeMapper
    } // namespace Model
  } // namespace NetworkFirewall
} // namespace Aws
