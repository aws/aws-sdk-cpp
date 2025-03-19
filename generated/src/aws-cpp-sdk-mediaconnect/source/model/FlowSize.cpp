/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/FlowSize.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConnect
  {
    namespace Model
    {
      namespace FlowSizeMapper
      {

        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int LARGE_HASH = HashingUtils::HashString("LARGE");


        FlowSize GetFlowSizeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MEDIUM_HASH)
          {
            return FlowSize::MEDIUM;
          }
          else if (hashCode == LARGE_HASH)
          {
            return FlowSize::LARGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlowSize>(hashCode);
          }

          return FlowSize::NOT_SET;
        }

        Aws::String GetNameForFlowSize(FlowSize enumValue)
        {
          switch(enumValue)
          {
          case FlowSize::NOT_SET:
            return {};
          case FlowSize::MEDIUM:
            return "MEDIUM";
          case FlowSize::LARGE:
            return "LARGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FlowSizeMapper
    } // namespace Model
  } // namespace MediaConnect
} // namespace Aws
