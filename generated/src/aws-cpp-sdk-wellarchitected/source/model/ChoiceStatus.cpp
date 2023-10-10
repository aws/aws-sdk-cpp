/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ChoiceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WellArchitected
  {
    namespace Model
    {
      namespace ChoiceStatusMapper
      {

        static const int SELECTED_HASH = HashingUtils::HashString("SELECTED");
        static const int NOT_APPLICABLE_HASH = HashingUtils::HashString("NOT_APPLICABLE");
        static const int UNSELECTED_HASH = HashingUtils::HashString("UNSELECTED");


        ChoiceStatus GetChoiceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SELECTED_HASH)
          {
            return ChoiceStatus::SELECTED;
          }
          else if (hashCode == NOT_APPLICABLE_HASH)
          {
            return ChoiceStatus::NOT_APPLICABLE;
          }
          else if (hashCode == UNSELECTED_HASH)
          {
            return ChoiceStatus::UNSELECTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChoiceStatus>(hashCode);
          }

          return ChoiceStatus::NOT_SET;
        }

        Aws::String GetNameForChoiceStatus(ChoiceStatus enumValue)
        {
          switch(enumValue)
          {
          case ChoiceStatus::NOT_SET:
            return {};
          case ChoiceStatus::SELECTED:
            return "SELECTED";
          case ChoiceStatus::NOT_APPLICABLE:
            return "NOT_APPLICABLE";
          case ChoiceStatus::UNSELECTED:
            return "UNSELECTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChoiceStatusMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
