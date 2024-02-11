/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MxfXavcDurationMode.h>
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
      namespace MxfXavcDurationModeMapper
      {

        static const int ALLOW_ANY_DURATION_HASH = HashingUtils::HashString("ALLOW_ANY_DURATION");
        static const int DROP_FRAMES_FOR_COMPLIANCE_HASH = HashingUtils::HashString("DROP_FRAMES_FOR_COMPLIANCE");


        MxfXavcDurationMode GetMxfXavcDurationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOW_ANY_DURATION_HASH)
          {
            return MxfXavcDurationMode::ALLOW_ANY_DURATION;
          }
          else if (hashCode == DROP_FRAMES_FOR_COMPLIANCE_HASH)
          {
            return MxfXavcDurationMode::DROP_FRAMES_FOR_COMPLIANCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MxfXavcDurationMode>(hashCode);
          }

          return MxfXavcDurationMode::NOT_SET;
        }

        Aws::String GetNameForMxfXavcDurationMode(MxfXavcDurationMode enumValue)
        {
          switch(enumValue)
          {
          case MxfXavcDurationMode::NOT_SET:
            return {};
          case MxfXavcDurationMode::ALLOW_ANY_DURATION:
            return "ALLOW_ANY_DURATION";
          case MxfXavcDurationMode::DROP_FRAMES_FOR_COMPLIANCE:
            return "DROP_FRAMES_FOR_COMPLIANCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MxfXavcDurationModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
