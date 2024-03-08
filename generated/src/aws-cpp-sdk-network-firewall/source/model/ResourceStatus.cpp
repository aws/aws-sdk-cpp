/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/ResourceStatus.h>
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
      namespace ResourceStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        ResourceStatus GetResourceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ResourceStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ResourceStatus::DELETING;
          }
          else if (hashCode == ERROR__HASH)
          {
            return ResourceStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceStatus>(hashCode);
          }

          return ResourceStatus::NOT_SET;
        }

        Aws::String GetNameForResourceStatus(ResourceStatus enumValue)
        {
          switch(enumValue)
          {
          case ResourceStatus::NOT_SET:
            return {};
          case ResourceStatus::ACTIVE:
            return "ACTIVE";
          case ResourceStatus::DELETING:
            return "DELETING";
          case ResourceStatus::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceStatusMapper
    } // namespace Model
  } // namespace NetworkFirewall
} // namespace Aws
