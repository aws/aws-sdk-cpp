/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DvbSubtitleAlignment.h>
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
      namespace DvbSubtitleAlignmentMapper
      {

        static const int CENTERED_HASH = HashingUtils::HashString("CENTERED");
        static const int LEFT_HASH = HashingUtils::HashString("LEFT");
        static const int AUTO_HASH = HashingUtils::HashString("AUTO");


        DvbSubtitleAlignment GetDvbSubtitleAlignmentForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CENTERED_HASH)
          {
            return DvbSubtitleAlignment::CENTERED;
          }
          else if (hashCode == LEFT_HASH)
          {
            return DvbSubtitleAlignment::LEFT;
          }
          else if (hashCode == AUTO_HASH)
          {
            return DvbSubtitleAlignment::AUTO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DvbSubtitleAlignment>(hashCode);
          }

          return DvbSubtitleAlignment::NOT_SET;
        }

        Aws::String GetNameForDvbSubtitleAlignment(DvbSubtitleAlignment enumValue)
        {
          switch(enumValue)
          {
          case DvbSubtitleAlignment::NOT_SET:
            return {};
          case DvbSubtitleAlignment::CENTERED:
            return "CENTERED";
          case DvbSubtitleAlignment::LEFT:
            return "LEFT";
          case DvbSubtitleAlignment::AUTO:
            return "AUTO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DvbSubtitleAlignmentMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
