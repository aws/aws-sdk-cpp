/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/model/DeobfuscationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchRUM
  {
    namespace Model
    {
      namespace DeobfuscationStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        DeobfuscationStatus GetDeobfuscationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return DeobfuscationStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return DeobfuscationStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeobfuscationStatus>(hashCode);
          }

          return DeobfuscationStatus::NOT_SET;
        }

        Aws::String GetNameForDeobfuscationStatus(DeobfuscationStatus enumValue)
        {
          switch(enumValue)
          {
          case DeobfuscationStatus::NOT_SET:
            return {};
          case DeobfuscationStatus::ENABLED:
            return "ENABLED";
          case DeobfuscationStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeobfuscationStatusMapper
    } // namespace Model
  } // namespace CloudWatchRUM
} // namespace Aws
