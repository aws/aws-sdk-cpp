/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/SelectionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Textract
  {
    namespace Model
    {
      namespace SelectionStatusMapper
      {

        static const int SELECTED_HASH = HashingUtils::HashString("SELECTED");
        static const int NOT_SELECTED_HASH = HashingUtils::HashString("NOT_SELECTED");


        SelectionStatus GetSelectionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SELECTED_HASH)
          {
            return SelectionStatus::SELECTED;
          }
          else if (hashCode == NOT_SELECTED_HASH)
          {
            return SelectionStatus::NOT_SELECTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SelectionStatus>(hashCode);
          }

          return SelectionStatus::NOT_SET;
        }

        Aws::String GetNameForSelectionStatus(SelectionStatus enumValue)
        {
          switch(enumValue)
          {
          case SelectionStatus::SELECTED:
            return "SELECTED";
          case SelectionStatus::NOT_SELECTED:
            return "NOT_SELECTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SelectionStatusMapper
    } // namespace Model
  } // namespace Textract
} // namespace Aws
