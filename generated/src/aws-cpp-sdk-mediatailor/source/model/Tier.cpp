/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/Tier.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaTailor
  {
    namespace Model
    {
      namespace TierMapper
      {

        static const int BASIC_HASH = HashingUtils::HashString("BASIC");
        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");


        Tier GetTierForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BASIC_HASH)
          {
            return Tier::BASIC;
          }
          else if (hashCode == STANDARD_HASH)
          {
            return Tier::STANDARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Tier>(hashCode);
          }

          return Tier::NOT_SET;
        }

        Aws::String GetNameForTier(Tier enumValue)
        {
          switch(enumValue)
          {
          case Tier::NOT_SET:
            return {};
          case Tier::BASIC:
            return "BASIC";
          case Tier::STANDARD:
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

      } // namespace TierMapper
    } // namespace Model
  } // namespace MediaTailor
} // namespace Aws
