/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/scheduler/model/ActionAfterCompletion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Scheduler
  {
    namespace Model
    {
      namespace ActionAfterCompletionMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int DELETE__HASH = HashingUtils::HashString("DELETE");


        ActionAfterCompletion GetActionAfterCompletionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return ActionAfterCompletion::NONE;
          }
          else if (hashCode == DELETE__HASH)
          {
            return ActionAfterCompletion::DELETE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionAfterCompletion>(hashCode);
          }

          return ActionAfterCompletion::NOT_SET;
        }

        Aws::String GetNameForActionAfterCompletion(ActionAfterCompletion enumValue)
        {
          switch(enumValue)
          {
          case ActionAfterCompletion::NOT_SET:
            return {};
          case ActionAfterCompletion::NONE:
            return "NONE";
          case ActionAfterCompletion::DELETE_:
            return "DELETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionAfterCompletionMapper
    } // namespace Model
  } // namespace Scheduler
} // namespace Aws
