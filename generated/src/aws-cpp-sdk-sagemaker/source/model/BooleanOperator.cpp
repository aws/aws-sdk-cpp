/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/BooleanOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace BooleanOperatorMapper
      {

        static const int And_HASH = HashingUtils::HashString("And");
        static const int Or_HASH = HashingUtils::HashString("Or");


        BooleanOperator GetBooleanOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == And_HASH)
          {
            return BooleanOperator::And;
          }
          else if (hashCode == Or_HASH)
          {
            return BooleanOperator::Or;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BooleanOperator>(hashCode);
          }

          return BooleanOperator::NOT_SET;
        }

        Aws::String GetNameForBooleanOperator(BooleanOperator enumValue)
        {
          switch(enumValue)
          {
          case BooleanOperator::And:
            return "And";
          case BooleanOperator::Or:
            return "Or";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BooleanOperatorMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
