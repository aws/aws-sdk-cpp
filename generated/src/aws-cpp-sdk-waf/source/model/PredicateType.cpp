/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/PredicateType.h>
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
      namespace PredicateTypeMapper
      {

        static constexpr uint32_t IPMatch_HASH = ConstExprHashingUtils::HashString("IPMatch");
        static constexpr uint32_t ByteMatch_HASH = ConstExprHashingUtils::HashString("ByteMatch");
        static constexpr uint32_t SqlInjectionMatch_HASH = ConstExprHashingUtils::HashString("SqlInjectionMatch");
        static constexpr uint32_t GeoMatch_HASH = ConstExprHashingUtils::HashString("GeoMatch");
        static constexpr uint32_t SizeConstraint_HASH = ConstExprHashingUtils::HashString("SizeConstraint");
        static constexpr uint32_t XssMatch_HASH = ConstExprHashingUtils::HashString("XssMatch");
        static constexpr uint32_t RegexMatch_HASH = ConstExprHashingUtils::HashString("RegexMatch");


        PredicateType GetPredicateTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IPMatch_HASH)
          {
            return PredicateType::IPMatch;
          }
          else if (hashCode == ByteMatch_HASH)
          {
            return PredicateType::ByteMatch;
          }
          else if (hashCode == SqlInjectionMatch_HASH)
          {
            return PredicateType::SqlInjectionMatch;
          }
          else if (hashCode == GeoMatch_HASH)
          {
            return PredicateType::GeoMatch;
          }
          else if (hashCode == SizeConstraint_HASH)
          {
            return PredicateType::SizeConstraint;
          }
          else if (hashCode == XssMatch_HASH)
          {
            return PredicateType::XssMatch;
          }
          else if (hashCode == RegexMatch_HASH)
          {
            return PredicateType::RegexMatch;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PredicateType>(hashCode);
          }

          return PredicateType::NOT_SET;
        }

        Aws::String GetNameForPredicateType(PredicateType enumValue)
        {
          switch(enumValue)
          {
          case PredicateType::NOT_SET:
            return {};
          case PredicateType::IPMatch:
            return "IPMatch";
          case PredicateType::ByteMatch:
            return "ByteMatch";
          case PredicateType::SqlInjectionMatch:
            return "SqlInjectionMatch";
          case PredicateType::GeoMatch:
            return "GeoMatch";
          case PredicateType::SizeConstraint:
            return "SizeConstraint";
          case PredicateType::XssMatch:
            return "XssMatch";
          case PredicateType::RegexMatch:
            return "RegexMatch";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PredicateTypeMapper
    } // namespace Model
  } // namespace WAF
} // namespace Aws
