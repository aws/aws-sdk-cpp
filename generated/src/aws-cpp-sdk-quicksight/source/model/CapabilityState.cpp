/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CapabilityState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace CapabilityStateMapper
      {

        static const int DENY_HASH = HashingUtils::HashString("DENY");


        CapabilityState GetCapabilityStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DENY_HASH)
          {
            return CapabilityState::DENY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapabilityState>(hashCode);
          }

          return CapabilityState::NOT_SET;
        }

        Aws::String GetNameForCapabilityState(CapabilityState enumValue)
        {
          switch(enumValue)
          {
          case CapabilityState::NOT_SET:
            return {};
          case CapabilityState::DENY:
            return "DENY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapabilityStateMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
