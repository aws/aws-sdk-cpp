/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/StartLambdaFunctionFailedCause.h>
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
      namespace StartLambdaFunctionFailedCauseMapper
      {

        static const int ASSUME_ROLE_FAILED_HASH = HashingUtils::HashString("ASSUME_ROLE_FAILED");


        StartLambdaFunctionFailedCause GetStartLambdaFunctionFailedCauseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASSUME_ROLE_FAILED_HASH)
          {
            return StartLambdaFunctionFailedCause::ASSUME_ROLE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StartLambdaFunctionFailedCause>(hashCode);
          }

          return StartLambdaFunctionFailedCause::NOT_SET;
        }

        Aws::String GetNameForStartLambdaFunctionFailedCause(StartLambdaFunctionFailedCause enumValue)
        {
          switch(enumValue)
          {
          case StartLambdaFunctionFailedCause::ASSUME_ROLE_FAILED:
            return "ASSUME_ROLE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StartLambdaFunctionFailedCauseMapper
    } // namespace Model
  } // namespace SWF
} // namespace Aws
