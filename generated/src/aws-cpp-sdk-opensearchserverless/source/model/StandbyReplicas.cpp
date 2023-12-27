/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/StandbyReplicas.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchServerless
  {
    namespace Model
    {
      namespace StandbyReplicasMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        StandbyReplicas GetStandbyReplicasForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return StandbyReplicas::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return StandbyReplicas::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StandbyReplicas>(hashCode);
          }

          return StandbyReplicas::NOT_SET;
        }

        Aws::String GetNameForStandbyReplicas(StandbyReplicas enumValue)
        {
          switch(enumValue)
          {
          case StandbyReplicas::NOT_SET:
            return {};
          case StandbyReplicas::ENABLED:
            return "ENABLED";
          case StandbyReplicas::DISABLED:
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

      } // namespace StandbyReplicasMapper
    } // namespace Model
  } // namespace OpenSearchServerless
} // namespace Aws
