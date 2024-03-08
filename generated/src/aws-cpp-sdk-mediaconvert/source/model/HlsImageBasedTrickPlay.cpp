/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/HlsImageBasedTrickPlay.h>
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
      namespace HlsImageBasedTrickPlayMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int THUMBNAIL_HASH = HashingUtils::HashString("THUMBNAIL");
        static const int THUMBNAIL_AND_FULLFRAME_HASH = HashingUtils::HashString("THUMBNAIL_AND_FULLFRAME");
        static const int ADVANCED_HASH = HashingUtils::HashString("ADVANCED");


        HlsImageBasedTrickPlay GetHlsImageBasedTrickPlayForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return HlsImageBasedTrickPlay::NONE;
          }
          else if (hashCode == THUMBNAIL_HASH)
          {
            return HlsImageBasedTrickPlay::THUMBNAIL;
          }
          else if (hashCode == THUMBNAIL_AND_FULLFRAME_HASH)
          {
            return HlsImageBasedTrickPlay::THUMBNAIL_AND_FULLFRAME;
          }
          else if (hashCode == ADVANCED_HASH)
          {
            return HlsImageBasedTrickPlay::ADVANCED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsImageBasedTrickPlay>(hashCode);
          }

          return HlsImageBasedTrickPlay::NOT_SET;
        }

        Aws::String GetNameForHlsImageBasedTrickPlay(HlsImageBasedTrickPlay enumValue)
        {
          switch(enumValue)
          {
          case HlsImageBasedTrickPlay::NOT_SET:
            return {};
          case HlsImageBasedTrickPlay::NONE:
            return "NONE";
          case HlsImageBasedTrickPlay::THUMBNAIL:
            return "THUMBNAIL";
          case HlsImageBasedTrickPlay::THUMBNAIL_AND_FULLFRAME:
            return "THUMBNAIL_AND_FULLFRAME";
          case HlsImageBasedTrickPlay::ADVANCED:
            return "ADVANCED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsImageBasedTrickPlayMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
