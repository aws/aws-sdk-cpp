/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/RequestedPipeStateDescribeResponse.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pipes
  {
    namespace Model
    {
      namespace RequestedPipeStateDescribeResponseMapper
      {

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        RequestedPipeStateDescribeResponse GetRequestedPipeStateDescribeResponseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return RequestedPipeStateDescribeResponse::RUNNING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return RequestedPipeStateDescribeResponse::STOPPED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return RequestedPipeStateDescribeResponse::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RequestedPipeStateDescribeResponse>(hashCode);
          }

          return RequestedPipeStateDescribeResponse::NOT_SET;
        }

        Aws::String GetNameForRequestedPipeStateDescribeResponse(RequestedPipeStateDescribeResponse enumValue)
        {
          switch(enumValue)
          {
          case RequestedPipeStateDescribeResponse::RUNNING:
            return "RUNNING";
          case RequestedPipeStateDescribeResponse::STOPPED:
            return "STOPPED";
          case RequestedPipeStateDescribeResponse::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RequestedPipeStateDescribeResponseMapper
    } // namespace Model
  } // namespace Pipes
} // namespace Aws
