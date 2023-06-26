/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/WorkflowExecutionTimeoutType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SWF
  {
    namespace Model
    {
      namespace WorkflowExecutionTimeoutTypeMapper
      {

        static const int START_TO_CLOSE_HASH = HashingUtils::HashString("START_TO_CLOSE");


        WorkflowExecutionTimeoutType GetWorkflowExecutionTimeoutTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == START_TO_CLOSE_HASH)
          {
            return WorkflowExecutionTimeoutType::START_TO_CLOSE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkflowExecutionTimeoutType>(hashCode);
          }

          return WorkflowExecutionTimeoutType::NOT_SET;
        }

        Aws::String GetNameForWorkflowExecutionTimeoutType(WorkflowExecutionTimeoutType enumValue)
        {
          switch(enumValue)
          {
          case WorkflowExecutionTimeoutType::START_TO_CLOSE:
            return "START_TO_CLOSE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkflowExecutionTimeoutTypeMapper
    } // namespace Model
  } // namespace SWF
} // namespace Aws
