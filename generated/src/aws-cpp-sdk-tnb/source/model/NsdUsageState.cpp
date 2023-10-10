/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/NsdUsageState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace tnb
  {
    namespace Model
    {
      namespace NsdUsageStateMapper
      {

        static const int IN_USE_HASH = HashingUtils::HashString("IN_USE");
        static const int NOT_IN_USE_HASH = HashingUtils::HashString("NOT_IN_USE");


        NsdUsageState GetNsdUsageStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_USE_HASH)
          {
            return NsdUsageState::IN_USE;
          }
          else if (hashCode == NOT_IN_USE_HASH)
          {
            return NsdUsageState::NOT_IN_USE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NsdUsageState>(hashCode);
          }

          return NsdUsageState::NOT_SET;
        }

        Aws::String GetNameForNsdUsageState(NsdUsageState enumValue)
        {
          switch(enumValue)
          {
          case NsdUsageState::NOT_SET:
            return {};
          case NsdUsageState::IN_USE:
            return "IN_USE";
          case NsdUsageState::NOT_IN_USE:
            return "NOT_IN_USE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NsdUsageStateMapper
    } // namespace Model
  } // namespace tnb
} // namespace Aws
