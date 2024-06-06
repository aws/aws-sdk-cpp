/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/AutomaticUpdatePolicy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace StorageGateway
  {
    namespace Model
    {
      namespace AutomaticUpdatePolicyMapper
      {

        static const int ALL_VERSIONS_HASH = HashingUtils::HashString("ALL_VERSIONS");
        static const int EMERGENCY_VERSIONS_ONLY_HASH = HashingUtils::HashString("EMERGENCY_VERSIONS_ONLY");


        AutomaticUpdatePolicy GetAutomaticUpdatePolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_VERSIONS_HASH)
          {
            return AutomaticUpdatePolicy::ALL_VERSIONS;
          }
          else if (hashCode == EMERGENCY_VERSIONS_ONLY_HASH)
          {
            return AutomaticUpdatePolicy::EMERGENCY_VERSIONS_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutomaticUpdatePolicy>(hashCode);
          }

          return AutomaticUpdatePolicy::NOT_SET;
        }

        Aws::String GetNameForAutomaticUpdatePolicy(AutomaticUpdatePolicy enumValue)
        {
          switch(enumValue)
          {
          case AutomaticUpdatePolicy::NOT_SET:
            return {};
          case AutomaticUpdatePolicy::ALL_VERSIONS:
            return "ALL_VERSIONS";
          case AutomaticUpdatePolicy::EMERGENCY_VERSIONS_ONLY:
            return "EMERGENCY_VERSIONS_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutomaticUpdatePolicyMapper
    } // namespace Model
  } // namespace StorageGateway
} // namespace Aws
