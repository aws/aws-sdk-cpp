/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/Alignment.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pinpoint
  {
    namespace Model
    {
      namespace AlignmentMapper
      {

        static const int LEFT_HASH = HashingUtils::HashString("LEFT");
        static const int CENTER_HASH = HashingUtils::HashString("CENTER");
        static const int RIGHT_HASH = HashingUtils::HashString("RIGHT");


        Alignment GetAlignmentForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LEFT_HASH)
          {
            return Alignment::LEFT;
          }
          else if (hashCode == CENTER_HASH)
          {
            return Alignment::CENTER;
          }
          else if (hashCode == RIGHT_HASH)
          {
            return Alignment::RIGHT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Alignment>(hashCode);
          }

          return Alignment::NOT_SET;
        }

        Aws::String GetNameForAlignment(Alignment enumValue)
        {
          switch(enumValue)
          {
          case Alignment::NOT_SET:
            return {};
          case Alignment::LEFT:
            return "LEFT";
          case Alignment::CENTER:
            return "CENTER";
          case Alignment::RIGHT:
            return "RIGHT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AlignmentMapper
    } // namespace Model
  } // namespace Pinpoint
} // namespace Aws
