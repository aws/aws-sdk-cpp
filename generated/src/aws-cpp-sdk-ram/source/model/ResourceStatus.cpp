/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/ResourceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RAM
  {
    namespace Model
    {
      namespace ResourceStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int ZONAL_RESOURCE_INACCESSIBLE_HASH = HashingUtils::HashString("ZONAL_RESOURCE_INACCESSIBLE");
        static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LIMIT_EXCEEDED");
        static const int UNAVAILABLE_HASH = HashingUtils::HashString("UNAVAILABLE");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");


        ResourceStatus GetResourceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return ResourceStatus::AVAILABLE;
          }
          else if (hashCode == ZONAL_RESOURCE_INACCESSIBLE_HASH)
          {
            return ResourceStatus::ZONAL_RESOURCE_INACCESSIBLE;
          }
          else if (hashCode == LIMIT_EXCEEDED_HASH)
          {
            return ResourceStatus::LIMIT_EXCEEDED;
          }
          else if (hashCode == UNAVAILABLE_HASH)
          {
            return ResourceStatus::UNAVAILABLE;
          }
          else if (hashCode == PENDING_HASH)
          {
            return ResourceStatus::PENDING;
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
          case ResourceStatus::AVAILABLE:
            return "AVAILABLE";
          case ResourceStatus::ZONAL_RESOURCE_INACCESSIBLE:
            return "ZONAL_RESOURCE_INACCESSIBLE";
          case ResourceStatus::LIMIT_EXCEEDED:
            return "LIMIT_EXCEEDED";
          case ResourceStatus::UNAVAILABLE:
            return "UNAVAILABLE";
          case ResourceStatus::PENDING:
            return "PENDING";
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
  } // namespace RAM
} // namespace Aws
