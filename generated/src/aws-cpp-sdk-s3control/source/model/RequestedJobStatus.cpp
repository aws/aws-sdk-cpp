/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/RequestedJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Control
  {
    namespace Model
    {
      namespace RequestedJobStatusMapper
      {

        static constexpr uint32_t Cancelled_HASH = ConstExprHashingUtils::HashString("Cancelled");
        static constexpr uint32_t Ready_HASH = ConstExprHashingUtils::HashString("Ready");


        RequestedJobStatus GetRequestedJobStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Cancelled_HASH)
          {
            return RequestedJobStatus::Cancelled;
          }
          else if (hashCode == Ready_HASH)
          {
            return RequestedJobStatus::Ready;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RequestedJobStatus>(hashCode);
          }

          return RequestedJobStatus::NOT_SET;
        }

        Aws::String GetNameForRequestedJobStatus(RequestedJobStatus enumValue)
        {
          switch(enumValue)
          {
          case RequestedJobStatus::NOT_SET:
            return {};
          case RequestedJobStatus::Cancelled:
            return "Cancelled";
          case RequestedJobStatus::Ready:
            return "Ready";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RequestedJobStatusMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
