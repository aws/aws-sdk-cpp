/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/synthetics/model/CanaryRunTestResult.h>
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
      namespace CanaryRunTestResultMapper
      {

        static const int PASSED_HASH = HashingUtils::HashString("PASSED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        CanaryRunTestResult GetCanaryRunTestResultForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASSED_HASH)
          {
            return CanaryRunTestResult::PASSED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CanaryRunTestResult::FAILED;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return CanaryRunTestResult::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CanaryRunTestResult>(hashCode);
          }

          return CanaryRunTestResult::NOT_SET;
        }

        Aws::String GetNameForCanaryRunTestResult(CanaryRunTestResult enumValue)
        {
          switch(enumValue)
          {
          case CanaryRunTestResult::NOT_SET:
            return {};
          case CanaryRunTestResult::PASSED:
            return "PASSED";
          case CanaryRunTestResult::FAILED:
            return "FAILED";
          case CanaryRunTestResult::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CanaryRunTestResultMapper
    } // namespace Model
  } // namespace Synthetics
} // namespace Aws
