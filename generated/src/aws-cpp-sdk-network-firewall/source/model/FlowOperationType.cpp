/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/FlowOperationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkFirewall
  {
    namespace Model
    {
      namespace FlowOperationTypeMapper
      {

        static const int FLOW_FLUSH_HASH = HashingUtils::HashString("FLOW_FLUSH");
        static const int FLOW_CAPTURE_HASH = HashingUtils::HashString("FLOW_CAPTURE");


        FlowOperationType GetFlowOperationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FLOW_FLUSH_HASH)
          {
            return FlowOperationType::FLOW_FLUSH;
          }
          else if (hashCode == FLOW_CAPTURE_HASH)
          {
            return FlowOperationType::FLOW_CAPTURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlowOperationType>(hashCode);
          }

          return FlowOperationType::NOT_SET;
        }

        Aws::String GetNameForFlowOperationType(FlowOperationType enumValue)
        {
          switch(enumValue)
          {
          case FlowOperationType::NOT_SET:
            return {};
          case FlowOperationType::FLOW_FLUSH:
            return "FLOW_FLUSH";
          case FlowOperationType::FLOW_CAPTURE:
            return "FLOW_CAPTURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FlowOperationTypeMapper
    } // namespace Model
  } // namespace NetworkFirewall
} // namespace Aws
