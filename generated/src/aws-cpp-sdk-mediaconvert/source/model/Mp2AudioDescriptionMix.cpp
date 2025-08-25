/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Mp2AudioDescriptionMix.h>
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
      namespace Mp2AudioDescriptionMixMapper
      {

        static const int BROADCASTER_MIXED_AD_HASH = HashingUtils::HashString("BROADCASTER_MIXED_AD");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        Mp2AudioDescriptionMix GetMp2AudioDescriptionMixForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BROADCASTER_MIXED_AD_HASH)
          {
            return Mp2AudioDescriptionMix::BROADCASTER_MIXED_AD;
          }
          else if (hashCode == NONE_HASH)
          {
            return Mp2AudioDescriptionMix::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mp2AudioDescriptionMix>(hashCode);
          }

          return Mp2AudioDescriptionMix::NOT_SET;
        }

        Aws::String GetNameForMp2AudioDescriptionMix(Mp2AudioDescriptionMix enumValue)
        {
          switch(enumValue)
          {
          case Mp2AudioDescriptionMix::NOT_SET:
            return {};
          case Mp2AudioDescriptionMix::BROADCASTER_MIXED_AD:
            return "BROADCASTER_MIXED_AD";
          case Mp2AudioDescriptionMix::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Mp2AudioDescriptionMixMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
