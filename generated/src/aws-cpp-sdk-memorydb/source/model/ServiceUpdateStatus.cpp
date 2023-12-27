/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/ServiceUpdateStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MemoryDB
  {
    namespace Model
    {
      namespace ServiceUpdateStatusMapper
      {

        static const int available_HASH = HashingUtils::HashString("available");
        static const int in_progress_HASH = HashingUtils::HashString("in-progress");
        static const int complete_HASH = HashingUtils::HashString("complete");
        static const int scheduled_HASH = HashingUtils::HashString("scheduled");


        ServiceUpdateStatus GetServiceUpdateStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == available_HASH)
          {
            return ServiceUpdateStatus::available;
          }
          else if (hashCode == in_progress_HASH)
          {
            return ServiceUpdateStatus::in_progress;
          }
          else if (hashCode == complete_HASH)
          {
            return ServiceUpdateStatus::complete;
          }
          else if (hashCode == scheduled_HASH)
          {
            return ServiceUpdateStatus::scheduled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceUpdateStatus>(hashCode);
          }

          return ServiceUpdateStatus::NOT_SET;
        }

        Aws::String GetNameForServiceUpdateStatus(ServiceUpdateStatus enumValue)
        {
          switch(enumValue)
          {
          case ServiceUpdateStatus::NOT_SET:
            return {};
          case ServiceUpdateStatus::available:
            return "available";
          case ServiceUpdateStatus::in_progress:
            return "in-progress";
          case ServiceUpdateStatus::complete:
            return "complete";
          case ServiceUpdateStatus::scheduled:
            return "scheduled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceUpdateStatusMapper
    } // namespace Model
  } // namespace MemoryDB
} // namespace Aws
