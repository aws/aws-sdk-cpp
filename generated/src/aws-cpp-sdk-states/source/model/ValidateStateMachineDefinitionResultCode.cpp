/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/ValidateStateMachineDefinitionResultCode.h>
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
      namespace ValidateStateMachineDefinitionResultCodeMapper
      {

        static const int OK_HASH = HashingUtils::HashString("OK");
        static const int FAIL_HASH = HashingUtils::HashString("FAIL");


        ValidateStateMachineDefinitionResultCode GetValidateStateMachineDefinitionResultCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OK_HASH)
          {
            return ValidateStateMachineDefinitionResultCode::OK;
          }
          else if (hashCode == FAIL_HASH)
          {
            return ValidateStateMachineDefinitionResultCode::FAIL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ValidateStateMachineDefinitionResultCode>(hashCode);
          }

          return ValidateStateMachineDefinitionResultCode::NOT_SET;
        }

        Aws::String GetNameForValidateStateMachineDefinitionResultCode(ValidateStateMachineDefinitionResultCode enumValue)
        {
          switch(enumValue)
          {
          case ValidateStateMachineDefinitionResultCode::NOT_SET:
            return {};
          case ValidateStateMachineDefinitionResultCode::OK:
            return "OK";
          case ValidateStateMachineDefinitionResultCode::FAIL:
            return "FAIL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ValidateStateMachineDefinitionResultCodeMapper
    } // namespace Model
  } // namespace SFN
} // namespace Aws
