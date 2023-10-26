/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/ResourceManagedStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkFirewall
  {
    namespace Model
    {
      namespace ResourceManagedStatusMapper
      {

        static const int MANAGED_HASH = HashingUtils::HashString("MANAGED");
        static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");


        ResourceManagedStatus GetResourceManagedStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MANAGED_HASH)
          {
            return ResourceManagedStatus::MANAGED;
          }
          else if (hashCode == ACCOUNT_HASH)
          {
            return ResourceManagedStatus::ACCOUNT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceManagedStatus>(hashCode);
          }

          return ResourceManagedStatus::NOT_SET;
        }

        Aws::String GetNameForResourceManagedStatus(ResourceManagedStatus enumValue)
        {
          switch(enumValue)
          {
          case ResourceManagedStatus::NOT_SET:
            return {};
          case ResourceManagedStatus::MANAGED:
            return "MANAGED";
          case ResourceManagedStatus::ACCOUNT:
            return "ACCOUNT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceManagedStatusMapper
    } // namespace Model
  } // namespace NetworkFirewall
} // namespace Aws
