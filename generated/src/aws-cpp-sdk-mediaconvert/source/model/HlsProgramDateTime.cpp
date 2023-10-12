/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/HlsProgramDateTime.h>
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
      namespace HlsProgramDateTimeMapper
      {

        static constexpr uint32_t INCLUDE_HASH = ConstExprHashingUtils::HashString("INCLUDE");
        static constexpr uint32_t EXCLUDE_HASH = ConstExprHashingUtils::HashString("EXCLUDE");


        HlsProgramDateTime GetHlsProgramDateTimeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCLUDE_HASH)
          {
            return HlsProgramDateTime::INCLUDE;
          }
          else if (hashCode == EXCLUDE_HASH)
          {
            return HlsProgramDateTime::EXCLUDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsProgramDateTime>(hashCode);
          }

          return HlsProgramDateTime::NOT_SET;
        }

        Aws::String GetNameForHlsProgramDateTime(HlsProgramDateTime enumValue)
        {
          switch(enumValue)
          {
          case HlsProgramDateTime::NOT_SET:
            return {};
          case HlsProgramDateTime::INCLUDE:
            return "INCLUDE";
          case HlsProgramDateTime::EXCLUDE:
            return "EXCLUDE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsProgramDateTimeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
