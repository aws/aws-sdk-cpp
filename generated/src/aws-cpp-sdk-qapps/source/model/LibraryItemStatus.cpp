/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/LibraryItemStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QApps
  {
    namespace Model
    {
      namespace LibraryItemStatusMapper
      {

        static const int PUBLISHED_HASH = HashingUtils::HashString("PUBLISHED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        LibraryItemStatus GetLibraryItemStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLISHED_HASH)
          {
            return LibraryItemStatus::PUBLISHED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return LibraryItemStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LibraryItemStatus>(hashCode);
          }

          return LibraryItemStatus::NOT_SET;
        }

        Aws::String GetNameForLibraryItemStatus(LibraryItemStatus enumValue)
        {
          switch(enumValue)
          {
          case LibraryItemStatus::NOT_SET:
            return {};
          case LibraryItemStatus::PUBLISHED:
            return "PUBLISHED";
          case LibraryItemStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LibraryItemStatusMapper
    } // namespace Model
  } // namespace QApps
} // namespace Aws
