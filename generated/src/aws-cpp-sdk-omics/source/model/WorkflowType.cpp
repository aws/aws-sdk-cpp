/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/WorkflowType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Omics
  {
    namespace Model
    {
      namespace WorkflowTypeMapper
      {

        static constexpr uint32_t PRIVATE__HASH = ConstExprHashingUtils::HashString("PRIVATE");
        static constexpr uint32_t READY2RUN_HASH = ConstExprHashingUtils::HashString("READY2RUN");


        WorkflowType GetWorkflowTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRIVATE__HASH)
          {
            return WorkflowType::PRIVATE_;
          }
          else if (hashCode == READY2RUN_HASH)
          {
            return WorkflowType::READY2RUN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkflowType>(hashCode);
          }

          return WorkflowType::NOT_SET;
        }

        Aws::String GetNameForWorkflowType(WorkflowType enumValue)
        {
          switch(enumValue)
          {
          case WorkflowType::NOT_SET:
            return {};
          case WorkflowType::PRIVATE_:
            return "PRIVATE";
          case WorkflowType::READY2RUN:
            return "READY2RUN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkflowTypeMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
