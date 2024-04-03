/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DashRoleCaption.h>
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
      namespace DashRoleCaptionMapper
      {

        static const int ALTERNATE_HASH = HashingUtils::HashString("ALTERNATE");
        static const int CAPTION_HASH = HashingUtils::HashString("CAPTION");
        static const int COMMENTARY_HASH = HashingUtils::HashString("COMMENTARY");
        static const int DESCRIPTION_HASH = HashingUtils::HashString("DESCRIPTION");
        static const int DUB_HASH = HashingUtils::HashString("DUB");
        static const int EASYREADER_HASH = HashingUtils::HashString("EASYREADER");
        static const int EMERGENCY_HASH = HashingUtils::HashString("EMERGENCY");
        static const int FORCED_SUBTITLE_HASH = HashingUtils::HashString("FORCED-SUBTITLE");
        static const int KARAOKE_HASH = HashingUtils::HashString("KARAOKE");
        static const int MAIN_HASH = HashingUtils::HashString("MAIN");
        static const int METADATA_HASH = HashingUtils::HashString("METADATA");
        static const int SUBTITLE_HASH = HashingUtils::HashString("SUBTITLE");
        static const int SUPPLEMENTARY_HASH = HashingUtils::HashString("SUPPLEMENTARY");


        DashRoleCaption GetDashRoleCaptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALTERNATE_HASH)
          {
            return DashRoleCaption::ALTERNATE;
          }
          else if (hashCode == CAPTION_HASH)
          {
            return DashRoleCaption::CAPTION;
          }
          else if (hashCode == COMMENTARY_HASH)
          {
            return DashRoleCaption::COMMENTARY;
          }
          else if (hashCode == DESCRIPTION_HASH)
          {
            return DashRoleCaption::DESCRIPTION;
          }
          else if (hashCode == DUB_HASH)
          {
            return DashRoleCaption::DUB;
          }
          else if (hashCode == EASYREADER_HASH)
          {
            return DashRoleCaption::EASYREADER;
          }
          else if (hashCode == EMERGENCY_HASH)
          {
            return DashRoleCaption::EMERGENCY;
          }
          else if (hashCode == FORCED_SUBTITLE_HASH)
          {
            return DashRoleCaption::FORCED_SUBTITLE;
          }
          else if (hashCode == KARAOKE_HASH)
          {
            return DashRoleCaption::KARAOKE;
          }
          else if (hashCode == MAIN_HASH)
          {
            return DashRoleCaption::MAIN;
          }
          else if (hashCode == METADATA_HASH)
          {
            return DashRoleCaption::METADATA;
          }
          else if (hashCode == SUBTITLE_HASH)
          {
            return DashRoleCaption::SUBTITLE;
          }
          else if (hashCode == SUPPLEMENTARY_HASH)
          {
            return DashRoleCaption::SUPPLEMENTARY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DashRoleCaption>(hashCode);
          }

          return DashRoleCaption::NOT_SET;
        }

        Aws::String GetNameForDashRoleCaption(DashRoleCaption enumValue)
        {
          switch(enumValue)
          {
          case DashRoleCaption::NOT_SET:
            return {};
          case DashRoleCaption::ALTERNATE:
            return "ALTERNATE";
          case DashRoleCaption::CAPTION:
            return "CAPTION";
          case DashRoleCaption::COMMENTARY:
            return "COMMENTARY";
          case DashRoleCaption::DESCRIPTION:
            return "DESCRIPTION";
          case DashRoleCaption::DUB:
            return "DUB";
          case DashRoleCaption::EASYREADER:
            return "EASYREADER";
          case DashRoleCaption::EMERGENCY:
            return "EMERGENCY";
          case DashRoleCaption::FORCED_SUBTITLE:
            return "FORCED-SUBTITLE";
          case DashRoleCaption::KARAOKE:
            return "KARAOKE";
          case DashRoleCaption::MAIN:
            return "MAIN";
          case DashRoleCaption::METADATA:
            return "METADATA";
          case DashRoleCaption::SUBTITLE:
            return "SUBTITLE";
          case DashRoleCaption::SUPPLEMENTARY:
            return "SUPPLEMENTARY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DashRoleCaptionMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
