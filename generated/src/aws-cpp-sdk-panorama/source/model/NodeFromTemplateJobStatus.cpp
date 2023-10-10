/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/NodeFromTemplateJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Panorama
  {
    namespace Model
    {
      namespace NodeFromTemplateJobStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        NodeFromTemplateJobStatus GetNodeFromTemplateJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return NodeFromTemplateJobStatus::PENDING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return NodeFromTemplateJobStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return NodeFromTemplateJobStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NodeFromTemplateJobStatus>(hashCode);
          }

          return NodeFromTemplateJobStatus::NOT_SET;
        }

        Aws::String GetNameForNodeFromTemplateJobStatus(NodeFromTemplateJobStatus enumValue)
        {
          switch(enumValue)
          {
          case NodeFromTemplateJobStatus::NOT_SET:
            return {};
          case NodeFromTemplateJobStatus::PENDING:
            return "PENDING";
          case NodeFromTemplateJobStatus::SUCCEEDED:
            return "SUCCEEDED";
          case NodeFromTemplateJobStatus::FAILED:
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

      } // namespace NodeFromTemplateJobStatusMapper
    } // namespace Model
  } // namespace Panorama
} // namespace Aws
