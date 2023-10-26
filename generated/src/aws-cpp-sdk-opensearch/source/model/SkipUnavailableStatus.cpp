/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/SkipUnavailableStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchService
  {
    namespace Model
    {
      namespace SkipUnavailableStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        SkipUnavailableStatus GetSkipUnavailableStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return SkipUnavailableStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return SkipUnavailableStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SkipUnavailableStatus>(hashCode);
          }

          return SkipUnavailableStatus::NOT_SET;
        }

        Aws::String GetNameForSkipUnavailableStatus(SkipUnavailableStatus enumValue)
        {
          switch(enumValue)
          {
          case SkipUnavailableStatus::NOT_SET:
            return {};
          case SkipUnavailableStatus::ENABLED:
            return "ENABLED";
          case SkipUnavailableStatus::DISABLED:
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

      } // namespace SkipUnavailableStatusMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
