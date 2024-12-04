/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ReservedCapacityStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace ReservedCapacityStatusMapper
      {

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Scheduled_HASH = HashingUtils::HashString("Scheduled");
        static const int Expired_HASH = HashingUtils::HashString("Expired");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        ReservedCapacityStatus GetReservedCapacityStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return ReservedCapacityStatus::Pending;
          }
          else if (hashCode == Active_HASH)
          {
            return ReservedCapacityStatus::Active;
          }
          else if (hashCode == Scheduled_HASH)
          {
            return ReservedCapacityStatus::Scheduled;
          }
          else if (hashCode == Expired_HASH)
          {
            return ReservedCapacityStatus::Expired;
          }
          else if (hashCode == Failed_HASH)
          {
            return ReservedCapacityStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReservedCapacityStatus>(hashCode);
          }

          return ReservedCapacityStatus::NOT_SET;
        }

        Aws::String GetNameForReservedCapacityStatus(ReservedCapacityStatus enumValue)
        {
          switch(enumValue)
          {
          case ReservedCapacityStatus::NOT_SET:
            return {};
          case ReservedCapacityStatus::Pending:
            return "Pending";
          case ReservedCapacityStatus::Active:
            return "Active";
          case ReservedCapacityStatus::Scheduled:
            return "Scheduled";
          case ReservedCapacityStatus::Expired:
            return "Expired";
          case ReservedCapacityStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReservedCapacityStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
