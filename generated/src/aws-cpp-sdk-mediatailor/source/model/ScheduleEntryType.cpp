/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/ScheduleEntryType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaTailor
  {
    namespace Model
    {
      namespace ScheduleEntryTypeMapper
      {

        static const int PROGRAM_HASH = HashingUtils::HashString("PROGRAM");
        static const int FILLER_SLATE_HASH = HashingUtils::HashString("FILLER_SLATE");
        static const int ALTERNATE_MEDIA_HASH = HashingUtils::HashString("ALTERNATE_MEDIA");


        ScheduleEntryType GetScheduleEntryTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROGRAM_HASH)
          {
            return ScheduleEntryType::PROGRAM;
          }
          else if (hashCode == FILLER_SLATE_HASH)
          {
            return ScheduleEntryType::FILLER_SLATE;
          }
          else if (hashCode == ALTERNATE_MEDIA_HASH)
          {
            return ScheduleEntryType::ALTERNATE_MEDIA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScheduleEntryType>(hashCode);
          }

          return ScheduleEntryType::NOT_SET;
        }

        Aws::String GetNameForScheduleEntryType(ScheduleEntryType enumValue)
        {
          switch(enumValue)
          {
          case ScheduleEntryType::NOT_SET:
            return {};
          case ScheduleEntryType::PROGRAM:
            return "PROGRAM";
          case ScheduleEntryType::FILLER_SLATE:
            return "FILLER_SLATE";
          case ScheduleEntryType::ALTERNATE_MEDIA:
            return "ALTERNATE_MEDIA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScheduleEntryTypeMapper
    } // namespace Model
  } // namespace MediaTailor
} // namespace Aws
