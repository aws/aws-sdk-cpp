/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/repostspace/model/FeatureEnableStatus.h>
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
      namespace FeatureEnableStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int NOT_ALLOWED_HASH = HashingUtils::HashString("NOT_ALLOWED");


        FeatureEnableStatus GetFeatureEnableStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return FeatureEnableStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return FeatureEnableStatus::DISABLED;
          }
          else if (hashCode == NOT_ALLOWED_HASH)
          {
            return FeatureEnableStatus::NOT_ALLOWED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FeatureEnableStatus>(hashCode);
          }

          return FeatureEnableStatus::NOT_SET;
        }

        Aws::String GetNameForFeatureEnableStatus(FeatureEnableStatus enumValue)
        {
          switch(enumValue)
          {
          case FeatureEnableStatus::NOT_SET:
            return {};
          case FeatureEnableStatus::ENABLED:
            return "ENABLED";
          case FeatureEnableStatus::DISABLED:
            return "DISABLED";
          case FeatureEnableStatus::NOT_ALLOWED:
            return "NOT_ALLOWED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FeatureEnableStatusMapper
    } // namespace Model
  } // namespace repostspace
} // namespace Aws
