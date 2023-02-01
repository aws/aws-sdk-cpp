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

        static const int IPMatch_HASH = HashingUtils::HashString("IPMatch");
        static const int ByteMatch_HASH = HashingUtils::HashString("ByteMatch");
        static const int SqlInjectionMatch_HASH = HashingUtils::HashString("SqlInjectionMatch");
        static const int GeoMatch_HASH = HashingUtils::HashString("GeoMatch");
        static const int SizeConstraint_HASH = HashingUtils::HashString("SizeConstraint");
        static const int XssMatch_HASH = HashingUtils::HashString("XssMatch");
        static const int RegexMatch_HASH = HashingUtils::HashString("RegexMatch");


        PredicateType GetPredicateTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
