﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/ComparisonOperator.h>
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
      namespace ComparisonOperatorMapper
      {

        static const int EQ_HASH = HashingUtils::HashString("EQ");
        static const int NE_HASH = HashingUtils::HashString("NE");
        static const int LE_HASH = HashingUtils::HashString("LE");
        static const int LT_HASH = HashingUtils::HashString("LT");
        static const int GE_HASH = HashingUtils::HashString("GE");
        static const int GT_HASH = HashingUtils::HashString("GT");


        ComparisonOperator GetComparisonOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQ_HASH)
          {
            return ComparisonOperator::EQ;
          }
          else if (hashCode == NE_HASH)
          {
            return ComparisonOperator::NE;
          }
          else if (hashCode == LE_HASH)
          {
            return ComparisonOperator::LE;
          }
          else if (hashCode == LT_HASH)
          {
            return ComparisonOperator::LT;
          }
          else if (hashCode == GE_HASH)
          {
            return ComparisonOperator::GE;
          }
          else if (hashCode == GT_HASH)
          {
            return ComparisonOperator::GT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComparisonOperator>(hashCode);
          }

          return ComparisonOperator::NOT_SET;
        }

        Aws::String GetNameForComparisonOperator(ComparisonOperator enumValue)
        {
          switch(enumValue)
          {
          case ComparisonOperator::NOT_SET:
            return {};
          case ComparisonOperator::EQ:
            return "EQ";
          case ComparisonOperator::NE:
            return "NE";
          case ComparisonOperator::LE:
            return "LE";
          case ComparisonOperator::LT:
            return "LT";
          case ComparisonOperator::GE:
            return "GE";
          case ComparisonOperator::GT:
            return "GT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComparisonOperatorMapper
    } // namespace Model
  } // namespace WAF
} // namespace Aws
