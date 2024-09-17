/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DvbDashAccessibility.h>
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
      namespace DvbDashAccessibilityMapper
      {

        static const int DVBDASH_1_VISUALLY_IMPAIRED_HASH = HashingUtils::HashString("DVBDASH_1_VISUALLY_IMPAIRED");
        static const int DVBDASH_2_HARD_OF_HEARING_HASH = HashingUtils::HashString("DVBDASH_2_HARD_OF_HEARING");
        static const int DVBDASH_3_SUPPLEMENTAL_COMMENTARY_HASH = HashingUtils::HashString("DVBDASH_3_SUPPLEMENTAL_COMMENTARY");
        static const int DVBDASH_4_DIRECTORS_COMMENTARY_HASH = HashingUtils::HashString("DVBDASH_4_DIRECTORS_COMMENTARY");
        static const int DVBDASH_5_EDUCATIONAL_NOTES_HASH = HashingUtils::HashString("DVBDASH_5_EDUCATIONAL_NOTES");
        static const int DVBDASH_6_MAIN_PROGRAM_HASH = HashingUtils::HashString("DVBDASH_6_MAIN_PROGRAM");
        static const int DVBDASH_7_CLEAN_FEED_HASH = HashingUtils::HashString("DVBDASH_7_CLEAN_FEED");


        DvbDashAccessibility GetDvbDashAccessibilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DVBDASH_1_VISUALLY_IMPAIRED_HASH)
          {
            return DvbDashAccessibility::DVBDASH_1_VISUALLY_IMPAIRED;
          }
          else if (hashCode == DVBDASH_2_HARD_OF_HEARING_HASH)
          {
            return DvbDashAccessibility::DVBDASH_2_HARD_OF_HEARING;
          }
          else if (hashCode == DVBDASH_3_SUPPLEMENTAL_COMMENTARY_HASH)
          {
            return DvbDashAccessibility::DVBDASH_3_SUPPLEMENTAL_COMMENTARY;
          }
          else if (hashCode == DVBDASH_4_DIRECTORS_COMMENTARY_HASH)
          {
            return DvbDashAccessibility::DVBDASH_4_DIRECTORS_COMMENTARY;
          }
          else if (hashCode == DVBDASH_5_EDUCATIONAL_NOTES_HASH)
          {
            return DvbDashAccessibility::DVBDASH_5_EDUCATIONAL_NOTES;
          }
          else if (hashCode == DVBDASH_6_MAIN_PROGRAM_HASH)
          {
            return DvbDashAccessibility::DVBDASH_6_MAIN_PROGRAM;
          }
          else if (hashCode == DVBDASH_7_CLEAN_FEED_HASH)
          {
            return DvbDashAccessibility::DVBDASH_7_CLEAN_FEED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DvbDashAccessibility>(hashCode);
          }

          return DvbDashAccessibility::NOT_SET;
        }

        Aws::String GetNameForDvbDashAccessibility(DvbDashAccessibility enumValue)
        {
          switch(enumValue)
          {
          case DvbDashAccessibility::NOT_SET:
            return {};
          case DvbDashAccessibility::DVBDASH_1_VISUALLY_IMPAIRED:
            return "DVBDASH_1_VISUALLY_IMPAIRED";
          case DvbDashAccessibility::DVBDASH_2_HARD_OF_HEARING:
            return "DVBDASH_2_HARD_OF_HEARING";
          case DvbDashAccessibility::DVBDASH_3_SUPPLEMENTAL_COMMENTARY:
            return "DVBDASH_3_SUPPLEMENTAL_COMMENTARY";
          case DvbDashAccessibility::DVBDASH_4_DIRECTORS_COMMENTARY:
            return "DVBDASH_4_DIRECTORS_COMMENTARY";
          case DvbDashAccessibility::DVBDASH_5_EDUCATIONAL_NOTES:
            return "DVBDASH_5_EDUCATIONAL_NOTES";
          case DvbDashAccessibility::DVBDASH_6_MAIN_PROGRAM:
            return "DVBDASH_6_MAIN_PROGRAM";
          case DvbDashAccessibility::DVBDASH_7_CLEAN_FEED:
            return "DVBDASH_7_CLEAN_FEED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DvbDashAccessibilityMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
