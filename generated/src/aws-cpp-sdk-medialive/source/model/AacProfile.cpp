/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AacProfile.h>
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
      namespace AacProfileMapper
      {

        static constexpr uint32_t HEV1_HASH = ConstExprHashingUtils::HashString("HEV1");
        static constexpr uint32_t HEV2_HASH = ConstExprHashingUtils::HashString("HEV2");
        static constexpr uint32_t LC_HASH = ConstExprHashingUtils::HashString("LC");


        AacProfile GetAacProfileForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HEV1_HASH)
          {
            return AacProfile::HEV1;
          }
          else if (hashCode == HEV2_HASH)
          {
            return AacProfile::HEV2;
          }
          else if (hashCode == LC_HASH)
          {
            return AacProfile::LC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AacProfile>(hashCode);
          }

          return AacProfile::NOT_SET;
        }

        Aws::String GetNameForAacProfile(AacProfile enumValue)
        {
          switch(enumValue)
          {
          case AacProfile::NOT_SET:
            return {};
          case AacProfile::HEV1:
            return "HEV1";
          case AacProfile::HEV2:
            return "HEV2";
          case AacProfile::LC:
            return "LC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AacProfileMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
