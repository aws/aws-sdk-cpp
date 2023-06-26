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

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int REMOVED_HASH = HashingUtils::HashString("REMOVED");


        DesiredState GetDesiredStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
