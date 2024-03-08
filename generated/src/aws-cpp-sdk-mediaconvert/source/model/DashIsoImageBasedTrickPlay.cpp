/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DashIsoImageBasedTrickPlay.h>
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
      namespace DashIsoImageBasedTrickPlayMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int THUMBNAIL_HASH = HashingUtils::HashString("THUMBNAIL");
        static const int THUMBNAIL_AND_FULLFRAME_HASH = HashingUtils::HashString("THUMBNAIL_AND_FULLFRAME");
        static const int ADVANCED_HASH = HashingUtils::HashString("ADVANCED");


        DashIsoImageBasedTrickPlay GetDashIsoImageBasedTrickPlayForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return DashIsoImageBasedTrickPlay::NONE;
          }
          else if (hashCode == THUMBNAIL_HASH)
          {
            return DashIsoImageBasedTrickPlay::THUMBNAIL;
          }
          else if (hashCode == THUMBNAIL_AND_FULLFRAME_HASH)
          {
            return DashIsoImageBasedTrickPlay::THUMBNAIL_AND_FULLFRAME;
          }
          else if (hashCode == ADVANCED_HASH)
          {
            return DashIsoImageBasedTrickPlay::ADVANCED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DashIsoImageBasedTrickPlay>(hashCode);
          }

          return DashIsoImageBasedTrickPlay::NOT_SET;
        }

        Aws::String GetNameForDashIsoImageBasedTrickPlay(DashIsoImageBasedTrickPlay enumValue)
        {
          switch(enumValue)
          {
          case DashIsoImageBasedTrickPlay::NOT_SET:
            return {};
          case DashIsoImageBasedTrickPlay::NONE:
            return "NONE";
          case DashIsoImageBasedTrickPlay::THUMBNAIL:
            return "THUMBNAIL";
          case DashIsoImageBasedTrickPlay::THUMBNAIL_AND_FULLFRAME:
            return "THUMBNAIL_AND_FULLFRAME";
          case DashIsoImageBasedTrickPlay::ADVANCED:
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

      } // namespace DashIsoImageBasedTrickPlayMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
