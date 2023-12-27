/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/repostspace/model/TierLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace repostspace
  {
    namespace Model
    {
      namespace TierLevelMapper
      {

        static const int BASIC_HASH = HashingUtils::HashString("BASIC");
        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");


        TierLevel GetTierLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BASIC_HASH)
          {
            return TierLevel::BASIC;
          }
          else if (hashCode == STANDARD_HASH)
          {
            return TierLevel::STANDARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TierLevel>(hashCode);
          }

          return TierLevel::NOT_SET;
        }

        Aws::String GetNameForTierLevel(TierLevel enumValue)
        {
          switch(enumValue)
          {
          case TierLevel::NOT_SET:
            return {};
          case TierLevel::BASIC:
            return "BASIC";
          case TierLevel::STANDARD:
            return "STANDARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TierLevelMapper
    } // namespace Model
  } // namespace repostspace
} // namespace Aws
