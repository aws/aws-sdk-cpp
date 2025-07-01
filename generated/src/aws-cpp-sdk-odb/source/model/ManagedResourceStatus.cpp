/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/ManagedResourceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace odb
  {
    namespace Model
    {
      namespace ManagedResourceStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int ENABLING_HASH = HashingUtils::HashString("ENABLING");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int DISABLING_HASH = HashingUtils::HashString("DISABLING");


        ManagedResourceStatus GetManagedResourceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return ManagedResourceStatus::ENABLED;
          }
          else if (hashCode == ENABLING_HASH)
          {
            return ManagedResourceStatus::ENABLING;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ManagedResourceStatus::DISABLED;
          }
          else if (hashCode == DISABLING_HASH)
          {
            return ManagedResourceStatus::DISABLING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ManagedResourceStatus>(hashCode);
          }

          return ManagedResourceStatus::NOT_SET;
        }

        Aws::String GetNameForManagedResourceStatus(ManagedResourceStatus enumValue)
        {
          switch(enumValue)
          {
          case ManagedResourceStatus::NOT_SET:
            return {};
          case ManagedResourceStatus::ENABLED:
            return "ENABLED";
          case ManagedResourceStatus::ENABLING:
            return "ENABLING";
          case ManagedResourceStatus::DISABLED:
            return "DISABLED";
          case ManagedResourceStatus::DISABLING:
            return "DISABLING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ManagedResourceStatusMapper
    } // namespace Model
  } // namespace odb
} // namespace Aws
