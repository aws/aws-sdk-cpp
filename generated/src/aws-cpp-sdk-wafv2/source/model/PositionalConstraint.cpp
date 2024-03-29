﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/PositionalConstraint.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFV2
  {
    namespace Model
    {
      namespace PositionalConstraintMapper
      {

        static const int EXACTLY_HASH = HashingUtils::HashString("EXACTLY");
        static const int STARTS_WITH_HASH = HashingUtils::HashString("STARTS_WITH");
        static const int ENDS_WITH_HASH = HashingUtils::HashString("ENDS_WITH");
        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");
        static const int CONTAINS_WORD_HASH = HashingUtils::HashString("CONTAINS_WORD");


        PositionalConstraint GetPositionalConstraintForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXACTLY_HASH)
          {
            return PositionalConstraint::EXACTLY;
          }
          else if (hashCode == STARTS_WITH_HASH)
          {
            return PositionalConstraint::STARTS_WITH;
          }
          else if (hashCode == ENDS_WITH_HASH)
          {
            return PositionalConstraint::ENDS_WITH;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return PositionalConstraint::CONTAINS;
          }
          else if (hashCode == CONTAINS_WORD_HASH)
          {
            return PositionalConstraint::CONTAINS_WORD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PositionalConstraint>(hashCode);
          }

          return PositionalConstraint::NOT_SET;
        }

        Aws::String GetNameForPositionalConstraint(PositionalConstraint enumValue)
        {
          switch(enumValue)
          {
          case PositionalConstraint::NOT_SET:
            return {};
          case PositionalConstraint::EXACTLY:
            return "EXACTLY";
          case PositionalConstraint::STARTS_WITH:
            return "STARTS_WITH";
          case PositionalConstraint::ENDS_WITH:
            return "ENDS_WITH";
          case PositionalConstraint::CONTAINS:
            return "CONTAINS";
          case PositionalConstraint::CONTAINS_WORD:
            return "CONTAINS_WORD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PositionalConstraintMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws
