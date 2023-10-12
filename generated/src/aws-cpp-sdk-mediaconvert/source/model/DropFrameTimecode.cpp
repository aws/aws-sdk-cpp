/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DropFrameTimecode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace DropFrameTimecodeMapper
      {

        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t ENABLED_HASH = ConstExprHashingUtils::HashString("ENABLED");


        DropFrameTimecode GetDropFrameTimecodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return DropFrameTimecode::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return DropFrameTimecode::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DropFrameTimecode>(hashCode);
          }

          return DropFrameTimecode::NOT_SET;
        }

        Aws::String GetNameForDropFrameTimecode(DropFrameTimecode enumValue)
        {
          switch(enumValue)
          {
          case DropFrameTimecode::NOT_SET:
            return {};
          case DropFrameTimecode::DISABLED:
            return "DISABLED";
          case DropFrameTimecode::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DropFrameTimecodeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
