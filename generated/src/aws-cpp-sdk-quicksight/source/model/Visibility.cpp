/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/Visibility.h>
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
      namespace VisibilityMapper
      {

        static const int HIDDEN_HASH = HashingUtils::HashString("HIDDEN");
        static const int VISIBLE_HASH = HashingUtils::HashString("VISIBLE");


        Visibility GetVisibilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HIDDEN_HASH)
          {
            return Visibility::HIDDEN;
          }
          else if (hashCode == VISIBLE_HASH)
          {
            return Visibility::VISIBLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Visibility>(hashCode);
          }

          return Visibility::NOT_SET;
        }

        Aws::String GetNameForVisibility(Visibility enumValue)
        {
          switch(enumValue)
          {
          case Visibility::HIDDEN:
            return "HIDDEN";
          case Visibility::VISIBLE:
            return "VISIBLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VisibilityMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
