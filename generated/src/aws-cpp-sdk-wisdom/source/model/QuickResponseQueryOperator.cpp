/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/QuickResponseQueryOperator.h>
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
      namespace QuickResponseQueryOperatorMapper
      {

        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");
        static const int CONTAINS_AND_PREFIX_HASH = HashingUtils::HashString("CONTAINS_AND_PREFIX");


        QuickResponseQueryOperator GetQuickResponseQueryOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONTAINS_HASH)
          {
            return QuickResponseQueryOperator::CONTAINS;
          }
          else if (hashCode == CONTAINS_AND_PREFIX_HASH)
          {
            return QuickResponseQueryOperator::CONTAINS_AND_PREFIX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QuickResponseQueryOperator>(hashCode);
          }

          return QuickResponseQueryOperator::NOT_SET;
        }

        Aws::String GetNameForQuickResponseQueryOperator(QuickResponseQueryOperator enumValue)
        {
          switch(enumValue)
          {
          case QuickResponseQueryOperator::NOT_SET:
            return {};
          case QuickResponseQueryOperator::CONTAINS:
            return "CONTAINS";
          case QuickResponseQueryOperator::CONTAINS_AND_PREFIX:
            return "CONTAINS_AND_PREFIX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QuickResponseQueryOperatorMapper
    } // namespace Model
  } // namespace ConnectWisdomService
} // namespace Aws
