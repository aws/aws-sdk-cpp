/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/MutationProtectionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53Resolver
  {
    namespace Model
    {
      namespace MutationProtectionStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        MutationProtectionStatus GetMutationProtectionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return MutationProtectionStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return MutationProtectionStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MutationProtectionStatus>(hashCode);
          }

          return MutationProtectionStatus::NOT_SET;
        }

        Aws::String GetNameForMutationProtectionStatus(MutationProtectionStatus enumValue)
        {
          switch(enumValue)
          {
          case MutationProtectionStatus::NOT_SET:
            return {};
          case MutationProtectionStatus::ENABLED:
            return "ENABLED";
          case MutationProtectionStatus::DISABLED:
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

      } // namespace MutationProtectionStatusMapper
    } // namespace Model
  } // namespace Route53Resolver
} // namespace Aws
