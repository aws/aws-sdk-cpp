/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/WorkflowEngine.h>
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
      namespace WorkflowEngineMapper
      {

        static constexpr uint32_t WDL_HASH = ConstExprHashingUtils::HashString("WDL");
        static constexpr uint32_t NEXTFLOW_HASH = ConstExprHashingUtils::HashString("NEXTFLOW");
        static constexpr uint32_t CWL_HASH = ConstExprHashingUtils::HashString("CWL");


        WorkflowEngine GetWorkflowEngineForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WDL_HASH)
          {
            return WorkflowEngine::WDL;
          }
          else if (hashCode == NEXTFLOW_HASH)
          {
            return WorkflowEngine::NEXTFLOW;
          }
          else if (hashCode == CWL_HASH)
          {
            return WorkflowEngine::CWL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkflowEngine>(hashCode);
          }

          return WorkflowEngine::NOT_SET;
        }

        Aws::String GetNameForWorkflowEngine(WorkflowEngine enumValue)
        {
          switch(enumValue)
          {
          case WorkflowEngine::NOT_SET:
            return {};
          case WorkflowEngine::WDL:
            return "WDL";
          case WorkflowEngine::NEXTFLOW:
            return "NEXTFLOW";
          case WorkflowEngine::CWL:
            return "CWL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkflowEngineMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
