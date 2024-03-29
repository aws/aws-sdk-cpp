﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/CancelWorkflowExecutionFailedCause.h>
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
      namespace CancelWorkflowExecutionFailedCauseMapper
      {

        static const int UNHANDLED_DECISION_HASH = HashingUtils::HashString("UNHANDLED_DECISION");
        static const int OPERATION_NOT_PERMITTED_HASH = HashingUtils::HashString("OPERATION_NOT_PERMITTED");


        CancelWorkflowExecutionFailedCause GetCancelWorkflowExecutionFailedCauseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNHANDLED_DECISION_HASH)
          {
            return CancelWorkflowExecutionFailedCause::UNHANDLED_DECISION;
          }
          else if (hashCode == OPERATION_NOT_PERMITTED_HASH)
          {
            return CancelWorkflowExecutionFailedCause::OPERATION_NOT_PERMITTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CancelWorkflowExecutionFailedCause>(hashCode);
          }

          return CancelWorkflowExecutionFailedCause::NOT_SET;
        }

        Aws::String GetNameForCancelWorkflowExecutionFailedCause(CancelWorkflowExecutionFailedCause enumValue)
        {
          switch(enumValue)
          {
          case CancelWorkflowExecutionFailedCause::NOT_SET:
            return {};
          case CancelWorkflowExecutionFailedCause::UNHANDLED_DECISION:
            return "UNHANDLED_DECISION";
          case CancelWorkflowExecutionFailedCause::OPERATION_NOT_PERMITTED:
            return "OPERATION_NOT_PERMITTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CancelWorkflowExecutionFailedCauseMapper
    } // namespace Model
  } // namespace SWF
} // namespace Aws
