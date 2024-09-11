/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/UpdateNodeState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace UpdateNodeStateMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DRAINING_HASH = HashingUtils::HashString("DRAINING");


        UpdateNodeState GetUpdateNodeStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return UpdateNodeState::ACTIVE;
          }
          else if (hashCode == DRAINING_HASH)
          {
            return UpdateNodeState::DRAINING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateNodeState>(hashCode);
          }

          return UpdateNodeState::NOT_SET;
        }

        Aws::String GetNameForUpdateNodeState(UpdateNodeState enumValue)
        {
          switch(enumValue)
          {
          case UpdateNodeState::NOT_SET:
            return {};
          case UpdateNodeState::ACTIVE:
            return "ACTIVE";
          case UpdateNodeState::DRAINING:
            return "DRAINING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateNodeStateMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
