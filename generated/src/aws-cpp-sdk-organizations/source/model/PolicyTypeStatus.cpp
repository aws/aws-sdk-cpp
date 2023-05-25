/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/PolicyTypeStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Organizations
  {
    namespace Model
    {
      namespace PolicyTypeStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int PENDING_ENABLE_HASH = HashingUtils::HashString("PENDING_ENABLE");
        static const int PENDING_DISABLE_HASH = HashingUtils::HashString("PENDING_DISABLE");


        PolicyTypeStatus GetPolicyTypeStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return PolicyTypeStatus::ENABLED;
          }
          else if (hashCode == PENDING_ENABLE_HASH)
          {
            return PolicyTypeStatus::PENDING_ENABLE;
          }
          else if (hashCode == PENDING_DISABLE_HASH)
          {
            return PolicyTypeStatus::PENDING_DISABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PolicyTypeStatus>(hashCode);
          }

          return PolicyTypeStatus::NOT_SET;
        }

        Aws::String GetNameForPolicyTypeStatus(PolicyTypeStatus enumValue)
        {
          switch(enumValue)
          {
          case PolicyTypeStatus::ENABLED:
            return "ENABLED";
          case PolicyTypeStatus::PENDING_ENABLE:
            return "PENDING_ENABLE";
          case PolicyTypeStatus::PENDING_DISABLE:
            return "PENDING_DISABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PolicyTypeStatusMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws
