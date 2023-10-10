/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/StatusReasonCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace StatusReasonCodeMapper
      {

        static const int NO_AVAILABLE_CONFIGURATION_RECORDER_HASH = HashingUtils::HashString("NO_AVAILABLE_CONFIGURATION_RECORDER");
        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");


        StatusReasonCode GetStatusReasonCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_AVAILABLE_CONFIGURATION_RECORDER_HASH)
          {
            return StatusReasonCode::NO_AVAILABLE_CONFIGURATION_RECORDER;
          }
          else if (hashCode == INTERNAL_ERROR_HASH)
          {
            return StatusReasonCode::INTERNAL_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StatusReasonCode>(hashCode);
          }

          return StatusReasonCode::NOT_SET;
        }

        Aws::String GetNameForStatusReasonCode(StatusReasonCode enumValue)
        {
          switch(enumValue)
          {
          case StatusReasonCode::NOT_SET:
            return {};
          case StatusReasonCode::NO_AVAILABLE_CONFIGURATION_RECORDER:
            return "NO_AVAILABLE_CONFIGURATION_RECORDER";
          case StatusReasonCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatusReasonCodeMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
