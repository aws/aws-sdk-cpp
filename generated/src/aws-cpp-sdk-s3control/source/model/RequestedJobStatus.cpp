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

        static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");
        static const int Ready_HASH = HashingUtils::HashString("Ready");


        RequestedJobStatus GetRequestedJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
