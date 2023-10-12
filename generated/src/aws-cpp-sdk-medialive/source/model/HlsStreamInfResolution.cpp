/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/HlsStreamInfResolution.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace HlsStreamInfResolutionMapper
      {

        static constexpr uint32_t EXCLUDE_HASH = ConstExprHashingUtils::HashString("EXCLUDE");
        static constexpr uint32_t INCLUDE_HASH = ConstExprHashingUtils::HashString("INCLUDE");


        HlsStreamInfResolution GetHlsStreamInfResolutionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXCLUDE_HASH)
          {
            return HlsStreamInfResolution::EXCLUDE;
          }
          else if (hashCode == INCLUDE_HASH)
          {
            return HlsStreamInfResolution::INCLUDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsStreamInfResolution>(hashCode);
          }

          return HlsStreamInfResolution::NOT_SET;
        }

        Aws::String GetNameForHlsStreamInfResolution(HlsStreamInfResolution enumValue)
        {
          switch(enumValue)
          {
          case HlsStreamInfResolution::NOT_SET:
            return {};
          case HlsStreamInfResolution::EXCLUDE:
            return "EXCLUDE";
          case HlsStreamInfResolution::INCLUDE:
            return "INCLUDE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsStreamInfResolutionMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
