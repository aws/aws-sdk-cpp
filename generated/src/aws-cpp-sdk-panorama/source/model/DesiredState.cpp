/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/DesiredState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Panorama
  {
    namespace Model
    {
      namespace DesiredStateMapper
      {

        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");
        static constexpr uint32_t REMOVED_HASH = ConstExprHashingUtils::HashString("REMOVED");


        DesiredState GetDesiredStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return DesiredState::RUNNING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return DesiredState::STOPPED;
          }
          else if (hashCode == REMOVED_HASH)
          {
            return DesiredState::REMOVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DesiredState>(hashCode);
          }

          return DesiredState::NOT_SET;
        }

        Aws::String GetNameForDesiredState(DesiredState enumValue)
        {
          switch(enumValue)
          {
          case DesiredState::NOT_SET:
            return {};
          case DesiredState::RUNNING:
            return "RUNNING";
          case DesiredState::STOPPED:
            return "STOPPED";
          case DesiredState::REMOVED:
            return "REMOVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DesiredStateMapper
    } // namespace Model
  } // namespace Panorama
} // namespace Aws
