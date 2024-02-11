/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/EngineWorkflowStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceCatalog
  {
    namespace Model
    {
      namespace EngineWorkflowStatusMapper
      {

        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        EngineWorkflowStatus GetEngineWorkflowStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCEEDED_HASH)
          {
            return EngineWorkflowStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return EngineWorkflowStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EngineWorkflowStatus>(hashCode);
          }

          return EngineWorkflowStatus::NOT_SET;
        }

        Aws::String GetNameForEngineWorkflowStatus(EngineWorkflowStatus enumValue)
        {
          switch(enumValue)
          {
          case EngineWorkflowStatus::NOT_SET:
            return {};
          case EngineWorkflowStatus::SUCCEEDED:
            return "SUCCEEDED";
          case EngineWorkflowStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EngineWorkflowStatusMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
