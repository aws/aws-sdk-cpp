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

        static const int HEV1_HASH = HashingUtils::HashString("HEV1");
        static const int HEV2_HASH = HashingUtils::HashString("HEV2");
        static const int LC_HASH = HashingUtils::HashString("LC");


        AacProfile GetAacProfileForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
