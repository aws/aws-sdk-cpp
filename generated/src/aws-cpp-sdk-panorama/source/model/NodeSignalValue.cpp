/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/NodeSignalValue.h>
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
      namespace NodeSignalValueMapper
      {

        static const int PAUSE_HASH = HashingUtils::HashString("PAUSE");
        static const int RESUME_HASH = HashingUtils::HashString("RESUME");


        NodeSignalValue GetNodeSignalValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PAUSE_HASH)
          {
            return NodeSignalValue::PAUSE;
          }
          else if (hashCode == RESUME_HASH)
          {
            return NodeSignalValue::RESUME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NodeSignalValue>(hashCode);
          }

          return NodeSignalValue::NOT_SET;
        }

        Aws::String GetNameForNodeSignalValue(NodeSignalValue enumValue)
        {
          switch(enumValue)
          {
          case NodeSignalValue::PAUSE:
            return "PAUSE";
          case NodeSignalValue::RESUME:
            return "RESUME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NodeSignalValueMapper
    } // namespace Model
  } // namespace Panorama
} // namespace Aws
