/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/Operator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53Domains
  {
    namespace Model
    {
      namespace OperatorMapper
      {

        static const int LE_HASH = HashingUtils::HashString("LE");
        static const int GE_HASH = HashingUtils::HashString("GE");
        static const int BEGINS_WITH_HASH = HashingUtils::HashString("BEGINS_WITH");


        Operator GetOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LE_HASH)
          {
            return Operator::LE;
          }
          else if (hashCode == GE_HASH)
          {
            return Operator::GE;
          }
          else if (hashCode == BEGINS_WITH_HASH)
          {
            return Operator::BEGINS_WITH;
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
          case Operator::LE:
            return "LE";
          case Operator::GE:
            return "GE";
          case Operator::BEGINS_WITH:
            return "BEGINS_WITH";
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
  } // namespace Route53Domains
} // namespace Aws
