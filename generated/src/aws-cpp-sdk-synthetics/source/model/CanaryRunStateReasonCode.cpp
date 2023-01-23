/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/CanaryRunStateReasonCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Synthetics
  {
    namespace Model
    {
      namespace CanaryRunStateReasonCodeMapper
      {

        static const int CANARY_FAILURE_HASH = HashingUtils::HashString("CANARY_FAILURE");
        static const int EXECUTION_FAILURE_HASH = HashingUtils::HashString("EXECUTION_FAILURE");


        CanaryRunStateReasonCode GetCanaryRunStateReasonCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CANARY_FAILURE_HASH)
          {
            return CanaryRunStateReasonCode::CANARY_FAILURE;
          }
          else if (hashCode == EXECUTION_FAILURE_HASH)
          {
            return CanaryRunStateReasonCode::EXECUTION_FAILURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CanaryRunStateReasonCode>(hashCode);
          }

          return CanaryRunStateReasonCode::NOT_SET;
        }

        Aws::String GetNameForCanaryRunStateReasonCode(CanaryRunStateReasonCode enumValue)
        {
          switch(enumValue)
          {
          case CanaryRunStateReasonCode::CANARY_FAILURE:
            return "CANARY_FAILURE";
          case CanaryRunStateReasonCode::EXECUTION_FAILURE:
            return "EXECUTION_FAILURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CanaryRunStateReasonCodeMapper
    } // namespace Model
  } // namespace Synthetics
} // namespace Aws
