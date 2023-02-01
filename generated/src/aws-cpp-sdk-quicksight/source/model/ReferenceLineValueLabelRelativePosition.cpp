/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ReferenceLineValueLabelRelativePosition.h>
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
      namespace ReferenceLineValueLabelRelativePositionMapper
      {

        static const int BEFORE_CUSTOM_LABEL_HASH = HashingUtils::HashString("BEFORE_CUSTOM_LABEL");
        static const int AFTER_CUSTOM_LABEL_HASH = HashingUtils::HashString("AFTER_CUSTOM_LABEL");


        ReferenceLineValueLabelRelativePosition GetReferenceLineValueLabelRelativePositionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BEFORE_CUSTOM_LABEL_HASH)
          {
            return ReferenceLineValueLabelRelativePosition::BEFORE_CUSTOM_LABEL;
          }
          else if (hashCode == AFTER_CUSTOM_LABEL_HASH)
          {
            return ReferenceLineValueLabelRelativePosition::AFTER_CUSTOM_LABEL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReferenceLineValueLabelRelativePosition>(hashCode);
          }

          return ReferenceLineValueLabelRelativePosition::NOT_SET;
        }

        Aws::String GetNameForReferenceLineValueLabelRelativePosition(ReferenceLineValueLabelRelativePosition enumValue)
        {
          switch(enumValue)
          {
          case ReferenceLineValueLabelRelativePosition::BEFORE_CUSTOM_LABEL:
            return "BEFORE_CUSTOM_LABEL";
          case ReferenceLineValueLabelRelativePosition::AFTER_CUSTOM_LABEL:
            return "AFTER_CUSTOM_LABEL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReferenceLineValueLabelRelativePositionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
