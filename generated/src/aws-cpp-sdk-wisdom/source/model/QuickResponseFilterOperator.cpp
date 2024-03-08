/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/QuickResponseFilterOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectWisdomService
  {
    namespace Model
    {
      namespace QuickResponseFilterOperatorMapper
      {

        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
        static const int PREFIX_HASH = HashingUtils::HashString("PREFIX");


        QuickResponseFilterOperator GetQuickResponseFilterOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return QuickResponseFilterOperator::EQUALS;
          }
          else if (hashCode == PREFIX_HASH)
          {
            return QuickResponseFilterOperator::PREFIX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QuickResponseFilterOperator>(hashCode);
          }

          return QuickResponseFilterOperator::NOT_SET;
        }

        Aws::String GetNameForQuickResponseFilterOperator(QuickResponseFilterOperator enumValue)
        {
          switch(enumValue)
          {
          case QuickResponseFilterOperator::NOT_SET:
            return {};
          case QuickResponseFilterOperator::EQUALS:
            return "EQUALS";
          case QuickResponseFilterOperator::PREFIX:
            return "PREFIX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QuickResponseFilterOperatorMapper
    } // namespace Model
  } // namespace ConnectWisdomService
} // namespace Aws
