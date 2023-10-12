/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ConditionOutcome.h>
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
      namespace ConditionOutcomeMapper
      {

        static constexpr uint32_t True_HASH = ConstExprHashingUtils::HashString("True");
        static constexpr uint32_t False_HASH = ConstExprHashingUtils::HashString("False");


        ConditionOutcome GetConditionOutcomeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == True_HASH)
          {
            return ConditionOutcome::True;
          }
          else if (hashCode == False_HASH)
          {
            return ConditionOutcome::False;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConditionOutcome>(hashCode);
          }

          return ConditionOutcome::NOT_SET;
        }

        Aws::String GetNameForConditionOutcome(ConditionOutcome enumValue)
        {
          switch(enumValue)
          {
          case ConditionOutcome::NOT_SET:
            return {};
          case ConditionOutcome::True:
            return "True";
          case ConditionOutcome::False:
            return "False";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConditionOutcomeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
