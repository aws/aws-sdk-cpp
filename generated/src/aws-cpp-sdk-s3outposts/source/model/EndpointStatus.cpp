/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3outposts/model/EndpointStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Outposts
  {
    namespace Model
    {
      namespace EndpointStatusMapper
      {

        static constexpr uint32_t Pending_HASH = ConstExprHashingUtils::HashString("Pending");
        static constexpr uint32_t Available_HASH = ConstExprHashingUtils::HashString("Available");
        static constexpr uint32_t Deleting_HASH = ConstExprHashingUtils::HashString("Deleting");
        static constexpr uint32_t Create_Failed_HASH = ConstExprHashingUtils::HashString("Create_Failed");
        static constexpr uint32_t Delete_Failed_HASH = ConstExprHashingUtils::HashString("Delete_Failed");


        EndpointStatus GetEndpointStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return EndpointStatus::Pending;
          }
          else if (hashCode == Available_HASH)
          {
            return EndpointStatus::Available;
          }
          else if (hashCode == Deleting_HASH)
          {
            return EndpointStatus::Deleting;
          }
          else if (hashCode == Create_Failed_HASH)
          {
            return EndpointStatus::Create_Failed;
          }
          else if (hashCode == Delete_Failed_HASH)
          {
            return EndpointStatus::Delete_Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EndpointStatus>(hashCode);
          }

          return EndpointStatus::NOT_SET;
        }

        Aws::String GetNameForEndpointStatus(EndpointStatus enumValue)
        {
          switch(enumValue)
          {
          case EndpointStatus::NOT_SET:
            return {};
          case EndpointStatus::Pending:
            return "Pending";
          case EndpointStatus::Available:
            return "Available";
          case EndpointStatus::Deleting:
            return "Deleting";
          case EndpointStatus::Create_Failed:
            return "Create_Failed";
          case EndpointStatus::Delete_Failed:
            return "Delete_Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EndpointStatusMapper
    } // namespace Model
  } // namespace S3Outposts
} // namespace Aws
