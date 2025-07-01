/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/IormLifecycleState.h>
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
      namespace IormLifecycleStateMapper
      {

        static const int BOOTSTRAPPING_HASH = HashingUtils::HashString("BOOTSTRAPPING");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");


        IormLifecycleState GetIormLifecycleStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BOOTSTRAPPING_HASH)
          {
            return IormLifecycleState::BOOTSTRAPPING;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return IormLifecycleState::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return IormLifecycleState::ENABLED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return IormLifecycleState::FAILED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return IormLifecycleState::UPDATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IormLifecycleState>(hashCode);
          }

          return IormLifecycleState::NOT_SET;
        }

        Aws::String GetNameForIormLifecycleState(IormLifecycleState enumValue)
        {
          switch(enumValue)
          {
          case IormLifecycleState::NOT_SET:
            return {};
          case IormLifecycleState::BOOTSTRAPPING:
            return "BOOTSTRAPPING";
          case IormLifecycleState::DISABLED:
            return "DISABLED";
          case IormLifecycleState::ENABLED:
            return "ENABLED";
          case IormLifecycleState::FAILED:
            return "FAILED";
          case IormLifecycleState::UPDATING:
            return "UPDATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IormLifecycleStateMapper
    } // namespace Model
  } // namespace odb
} // namespace Aws
