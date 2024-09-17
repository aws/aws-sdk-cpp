/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/InsertionMode.h>
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
      namespace InsertionModeMapper
      {

        static const int STITCHED_ONLY_HASH = HashingUtils::HashString("STITCHED_ONLY");
        static const int PLAYER_SELECT_HASH = HashingUtils::HashString("PLAYER_SELECT");


        InsertionMode GetInsertionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STITCHED_ONLY_HASH)
          {
            return InsertionMode::STITCHED_ONLY;
          }
          else if (hashCode == PLAYER_SELECT_HASH)
          {
            return InsertionMode::PLAYER_SELECT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InsertionMode>(hashCode);
          }

          return InsertionMode::NOT_SET;
        }

        Aws::String GetNameForInsertionMode(InsertionMode enumValue)
        {
          switch(enumValue)
          {
          case InsertionMode::NOT_SET:
            return {};
          case InsertionMode::STITCHED_ONLY:
            return "STITCHED_ONLY";
          case InsertionMode::PLAYER_SELECT:
            return "PLAYER_SELECT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InsertionModeMapper
    } // namespace Model
  } // namespace MediaTailor
} // namespace Aws
