/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/UsageState.h>
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
      namespace UsageStateMapper
      {

        static const int IN_USE_HASH = HashingUtils::HashString("IN_USE");
        static const int NOT_IN_USE_HASH = HashingUtils::HashString("NOT_IN_USE");


        UsageState GetUsageStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_USE_HASH)
          {
            return UsageState::IN_USE;
          }
          else if (hashCode == NOT_IN_USE_HASH)
          {
            return UsageState::NOT_IN_USE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UsageState>(hashCode);
          }

          return UsageState::NOT_SET;
        }

        Aws::String GetNameForUsageState(UsageState enumValue)
        {
          switch(enumValue)
          {
          case UsageState::NOT_SET:
            return {};
          case UsageState::IN_USE:
            return "IN_USE";
          case UsageState::NOT_IN_USE:
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

      } // namespace UsageStateMapper
    } // namespace Model
  } // namespace tnb
} // namespace Aws
