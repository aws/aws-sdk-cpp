/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ReferenceLineLabelVerticalPosition.h>
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
      namespace ReferenceLineLabelVerticalPositionMapper
      {

        static const int ABOVE_HASH = HashingUtils::HashString("ABOVE");
        static const int BELOW_HASH = HashingUtils::HashString("BELOW");


        ReferenceLineLabelVerticalPosition GetReferenceLineLabelVerticalPositionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ABOVE_HASH)
          {
            return ReferenceLineLabelVerticalPosition::ABOVE;
          }
          else if (hashCode == BELOW_HASH)
          {
            return ReferenceLineLabelVerticalPosition::BELOW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReferenceLineLabelVerticalPosition>(hashCode);
          }

          return ReferenceLineLabelVerticalPosition::NOT_SET;
        }

        Aws::String GetNameForReferenceLineLabelVerticalPosition(ReferenceLineLabelVerticalPosition enumValue)
        {
          switch(enumValue)
          {
          case ReferenceLineLabelVerticalPosition::ABOVE:
            return "ABOVE";
          case ReferenceLineLabelVerticalPosition::BELOW:
            return "BELOW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReferenceLineLabelVerticalPositionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
