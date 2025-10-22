/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ClusterAlertState.h>
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
      namespace ClusterAlertStateMapper
      {

        static const int SET_HASH = HashingUtils::HashString("SET");
        static const int CLEARED_HASH = HashingUtils::HashString("CLEARED");


        ClusterAlertState GetClusterAlertStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SET_HASH)
          {
            return ClusterAlertState::SET;
          }
          else if (hashCode == CLEARED_HASH)
          {
            return ClusterAlertState::CLEARED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterAlertState>(hashCode);
          }

          return ClusterAlertState::NOT_SET;
        }

        Aws::String GetNameForClusterAlertState(ClusterAlertState enumValue)
        {
          switch(enumValue)
          {
          case ClusterAlertState::NOT_SET:
            return {};
          case ClusterAlertState::SET:
            return "SET";
          case ClusterAlertState::CLEARED:
            return "CLEARED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClusterAlertStateMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
