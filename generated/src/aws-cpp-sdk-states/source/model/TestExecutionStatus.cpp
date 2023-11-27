/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/TestExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SFN
  {
    namespace Model
    {
      namespace TestExecutionStatusMapper
      {

        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int RETRIABLE_HASH = HashingUtils::HashString("RETRIABLE");
        static const int CAUGHT_ERROR_HASH = HashingUtils::HashString("CAUGHT_ERROR");


        TestExecutionStatus GetTestExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCEEDED_HASH)
          {
            return TestExecutionStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return TestExecutionStatus::FAILED;
          }
          else if (hashCode == RETRIABLE_HASH)
          {
            return TestExecutionStatus::RETRIABLE;
          }
          else if (hashCode == CAUGHT_ERROR_HASH)
          {
            return TestExecutionStatus::CAUGHT_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TestExecutionStatus>(hashCode);
          }

          return TestExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForTestExecutionStatus(TestExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case TestExecutionStatus::NOT_SET:
            return {};
          case TestExecutionStatus::SUCCEEDED:
            return "SUCCEEDED";
          case TestExecutionStatus::FAILED:
            return "FAILED";
          case TestExecutionStatus::RETRIABLE:
            return "RETRIABLE";
          case TestExecutionStatus::CAUGHT_ERROR:
            return "CAUGHT_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TestExecutionStatusMapper
    } // namespace Model
  } // namespace SFN
} // namespace Aws
