/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PaperOrientation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace PaperOrientationMapper
      {

        static const int PORTRAIT_HASH = HashingUtils::HashString("PORTRAIT");
        static const int LANDSCAPE_HASH = HashingUtils::HashString("LANDSCAPE");


        PaperOrientation GetPaperOrientationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PORTRAIT_HASH)
          {
            return PaperOrientation::PORTRAIT;
          }
          else if (hashCode == LANDSCAPE_HASH)
          {
            return PaperOrientation::LANDSCAPE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PaperOrientation>(hashCode);
          }

          return PaperOrientation::NOT_SET;
        }

        Aws::String GetNameForPaperOrientation(PaperOrientation enumValue)
        {
          switch(enumValue)
          {
          case PaperOrientation::PORTRAIT:
            return "PORTRAIT";
          case PaperOrientation::LANDSCAPE:
            return "LANDSCAPE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PaperOrientationMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
