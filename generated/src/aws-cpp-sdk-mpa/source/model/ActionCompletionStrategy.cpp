/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/ActionCompletionStrategy.h>
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
      namespace ActionCompletionStrategyMapper
      {

        static const int AUTO_COMPLETION_UPON_APPROVAL_HASH = HashingUtils::HashString("AUTO_COMPLETION_UPON_APPROVAL");


        ActionCompletionStrategy GetActionCompletionStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_COMPLETION_UPON_APPROVAL_HASH)
          {
            return ActionCompletionStrategy::AUTO_COMPLETION_UPON_APPROVAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionCompletionStrategy>(hashCode);
          }

          return ActionCompletionStrategy::NOT_SET;
        }

        Aws::String GetNameForActionCompletionStrategy(ActionCompletionStrategy enumValue)
        {
          switch(enumValue)
          {
          case ActionCompletionStrategy::NOT_SET:
            return {};
          case ActionCompletionStrategy::AUTO_COMPLETION_UPON_APPROVAL:
            return "AUTO_COMPLETION_UPON_APPROVAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionCompletionStrategyMapper
    } // namespace Model
  } // namespace MPA
} // namespace Aws
