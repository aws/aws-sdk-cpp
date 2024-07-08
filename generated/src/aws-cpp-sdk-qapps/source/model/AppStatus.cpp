/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/AppStatus.h>
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
      namespace AppStatusMapper
      {

        static const int PUBLISHED_HASH = HashingUtils::HashString("PUBLISHED");
        static const int DRAFT_HASH = HashingUtils::HashString("DRAFT");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        AppStatus GetAppStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLISHED_HASH)
          {
            return AppStatus::PUBLISHED;
          }
          else if (hashCode == DRAFT_HASH)
          {
            return AppStatus::DRAFT;
          }
          else if (hashCode == DELETED_HASH)
          {
            return AppStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppStatus>(hashCode);
          }

          return AppStatus::NOT_SET;
        }

        Aws::String GetNameForAppStatus(AppStatus enumValue)
        {
          switch(enumValue)
          {
          case AppStatus::NOT_SET:
            return {};
          case AppStatus::PUBLISHED:
            return "PUBLISHED";
          case AppStatus::DRAFT:
            return "DRAFT";
          case AppStatus::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppStatusMapper
    } // namespace Model
  } // namespace QApps
} // namespace Aws
