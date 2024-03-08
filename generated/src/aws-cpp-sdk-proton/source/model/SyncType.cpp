/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/SyncType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Proton
  {
    namespace Model
    {
      namespace SyncTypeMapper
      {

        static const int TEMPLATE_SYNC_HASH = HashingUtils::HashString("TEMPLATE_SYNC");
        static const int SERVICE_SYNC_HASH = HashingUtils::HashString("SERVICE_SYNC");


        SyncType GetSyncTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TEMPLATE_SYNC_HASH)
          {
            return SyncType::TEMPLATE_SYNC;
          }
          else if (hashCode == SERVICE_SYNC_HASH)
          {
            return SyncType::SERVICE_SYNC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SyncType>(hashCode);
          }

          return SyncType::NOT_SET;
        }

        Aws::String GetNameForSyncType(SyncType enumValue)
        {
          switch(enumValue)
          {
          case SyncType::NOT_SET:
            return {};
          case SyncType::TEMPLATE_SYNC:
            return "TEMPLATE_SYNC";
          case SyncType::SERVICE_SYNC:
            return "SERVICE_SYNC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SyncTypeMapper
    } // namespace Model
  } // namespace Proton
} // namespace Aws
