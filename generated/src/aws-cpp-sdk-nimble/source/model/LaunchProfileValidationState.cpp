/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/LaunchProfileValidationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NimbleStudio
  {
    namespace Model
    {
      namespace LaunchProfileValidationStateMapper
      {

        static const int VALIDATION_NOT_STARTED_HASH = HashingUtils::HashString("VALIDATION_NOT_STARTED");
        static const int VALIDATION_IN_PROGRESS_HASH = HashingUtils::HashString("VALIDATION_IN_PROGRESS");
        static const int VALIDATION_SUCCESS_HASH = HashingUtils::HashString("VALIDATION_SUCCESS");
        static const int VALIDATION_FAILED_HASH = HashingUtils::HashString("VALIDATION_FAILED");
        static const int VALIDATION_FAILED_INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("VALIDATION_FAILED_INTERNAL_SERVER_ERROR");


        LaunchProfileValidationState GetLaunchProfileValidationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VALIDATION_NOT_STARTED_HASH)
          {
            return LaunchProfileValidationState::VALIDATION_NOT_STARTED;
          }
          else if (hashCode == VALIDATION_IN_PROGRESS_HASH)
          {
            return LaunchProfileValidationState::VALIDATION_IN_PROGRESS;
          }
          else if (hashCode == VALIDATION_SUCCESS_HASH)
          {
            return LaunchProfileValidationState::VALIDATION_SUCCESS;
          }
          else if (hashCode == VALIDATION_FAILED_HASH)
          {
            return LaunchProfileValidationState::VALIDATION_FAILED;
          }
          else if (hashCode == VALIDATION_FAILED_INTERNAL_SERVER_ERROR_HASH)
          {
            return LaunchProfileValidationState::VALIDATION_FAILED_INTERNAL_SERVER_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LaunchProfileValidationState>(hashCode);
          }

          return LaunchProfileValidationState::NOT_SET;
        }

        Aws::String GetNameForLaunchProfileValidationState(LaunchProfileValidationState enumValue)
        {
          switch(enumValue)
          {
          case LaunchProfileValidationState::NOT_SET:
            return {};
          case LaunchProfileValidationState::VALIDATION_NOT_STARTED:
            return "VALIDATION_NOT_STARTED";
          case LaunchProfileValidationState::VALIDATION_IN_PROGRESS:
            return "VALIDATION_IN_PROGRESS";
          case LaunchProfileValidationState::VALIDATION_SUCCESS:
            return "VALIDATION_SUCCESS";
          case LaunchProfileValidationState::VALIDATION_FAILED:
            return "VALIDATION_FAILED";
          case LaunchProfileValidationState::VALIDATION_FAILED_INTERNAL_SERVER_ERROR:
            return "VALIDATION_FAILED_INTERNAL_SERVER_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LaunchProfileValidationStateMapper
    } // namespace Model
  } // namespace NimbleStudio
} // namespace Aws
