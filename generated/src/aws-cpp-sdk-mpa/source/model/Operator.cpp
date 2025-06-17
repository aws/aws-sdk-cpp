/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/Operator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MPA
  {
    namespace Model
    {
      namespace OperatorMapper
      {

        static const int EQ_HASH = HashingUtils::HashString("EQ");
        static const int NE_HASH = HashingUtils::HashString("NE");
        static const int GT_HASH = HashingUtils::HashString("GT");
        static const int LT_HASH = HashingUtils::HashString("LT");
        static const int GTE_HASH = HashingUtils::HashString("GTE");
        static const int LTE_HASH = HashingUtils::HashString("LTE");
        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");
        static const int NOT_CONTAINS_HASH = HashingUtils::HashString("NOT_CONTAINS");
        static const int BETWEEN_HASH = HashingUtils::HashString("BETWEEN");


        Operator GetOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQ_HASH)
          {
            return Operator::EQ;
          }
          else if (hashCode == NE_HASH)
          {
            return Operator::NE;
          }
          else if (hashCode == GT_HASH)
          {
            return Operator::GT;
          }
          else if (hashCode == LT_HASH)
          {
            return Operator::LT;
          }
          else if (hashCode == GTE_HASH)
          {
            return Operator::GTE;
          }
          else if (hashCode == LTE_HASH)
          {
            return Operator::LTE;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return Operator::CONTAINS;
          }
          else if (hashCode == NOT_CONTAINS_HASH)
          {
            return Operator::NOT_CONTAINS;
          }
          else if (hashCode == BETWEEN_HASH)
          {
            return Operator::BETWEEN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Operator>(hashCode);
          }

          return Operator::NOT_SET;
        }

        Aws::String GetNameForOperator(Operator enumValue)
        {
          switch(enumValue)
          {
          case Operator::NOT_SET:
            return {};
          case Operator::EQ:
            return "EQ";
          case Operator::NE:
            return "NE";
          case Operator::GT:
            return "GT";
          case Operator::LT:
            return "LT";
          case Operator::GTE:
            return "GTE";
          case Operator::LTE:
            return "LTE";
          case Operator::CONTAINS:
            return "CONTAINS";
          case Operator::NOT_CONTAINS:
            return "NOT_CONTAINS";
          case Operator::BETWEEN:
            return "BETWEEN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OperatorMapper
    } // namespace Model
  } // namespace MPA
} // namespace Aws
