/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/RequestCancelActivityTaskFailedCause.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SWF
  {
    namespace Model
    {
      namespace RequestCancelActivityTaskFailedCauseMapper
      {

        static const int ACTIVITY_ID_UNKNOWN_HASH = HashingUtils::HashString("ACTIVITY_ID_UNKNOWN");
        static const int OPERATION_NOT_PERMITTED_HASH = HashingUtils::HashString("OPERATION_NOT_PERMITTED");


        RequestCancelActivityTaskFailedCause GetRequestCancelActivityTaskFailedCauseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVITY_ID_UNKNOWN_HASH)
          {
            return RequestCancelActivityTaskFailedCause::ACTIVITY_ID_UNKNOWN;
          }
          else if (hashCode == OPERATION_NOT_PERMITTED_HASH)
          {
            return RequestCancelActivityTaskFailedCause::OPERATION_NOT_PERMITTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RequestCancelActivityTaskFailedCause>(hashCode);
          }

          return RequestCancelActivityTaskFailedCause::NOT_SET;
        }

        Aws::String GetNameForRequestCancelActivityTaskFailedCause(RequestCancelActivityTaskFailedCause enumValue)
        {
          switch(enumValue)
          {
          case RequestCancelActivityTaskFailedCause::ACTIVITY_ID_UNKNOWN:
            return "ACTIVITY_ID_UNKNOWN";
          case RequestCancelActivityTaskFailedCause::OPERATION_NOT_PERMITTED:
            return "OPERATION_NOT_PERMITTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RequestCancelActivityTaskFailedCauseMapper
    } // namespace Model
  } // namespace SWF
} // namespace Aws
