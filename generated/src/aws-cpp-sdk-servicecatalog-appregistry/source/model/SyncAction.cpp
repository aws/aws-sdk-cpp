/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog-appregistry/model/SyncAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppRegistry
  {
    namespace Model
    {
      namespace SyncActionMapper
      {

        static const int START_SYNC_HASH = HashingUtils::HashString("START_SYNC");
        static const int NO_ACTION_HASH = HashingUtils::HashString("NO_ACTION");


        SyncAction GetSyncActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == START_SYNC_HASH)
          {
            return SyncAction::START_SYNC;
          }
          else if (hashCode == NO_ACTION_HASH)
          {
            return SyncAction::NO_ACTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SyncAction>(hashCode);
          }

          return SyncAction::NOT_SET;
        }

        Aws::String GetNameForSyncAction(SyncAction enumValue)
        {
          switch(enumValue)
          {
          case SyncAction::NOT_SET:
            return {};
          case SyncAction::START_SYNC:
            return "START_SYNC";
          case SyncAction::NO_ACTION:
            return "NO_ACTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SyncActionMapper
    } // namespace Model
  } // namespace AppRegistry
} // namespace Aws
