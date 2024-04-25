/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/ValidateStateMachineDefinitionSeverity.h>
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
      namespace ValidateStateMachineDefinitionSeverityMapper
      {

        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        ValidateStateMachineDefinitionSeverity GetValidateStateMachineDefinitionSeverityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ERROR__HASH)
          {
            return ValidateStateMachineDefinitionSeverity::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ValidateStateMachineDefinitionSeverity>(hashCode);
          }

          return ValidateStateMachineDefinitionSeverity::NOT_SET;
        }

        Aws::String GetNameForValidateStateMachineDefinitionSeverity(ValidateStateMachineDefinitionSeverity enumValue)
        {
          switch(enumValue)
          {
          case ValidateStateMachineDefinitionSeverity::NOT_SET:
            return {};
          case ValidateStateMachineDefinitionSeverity::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ValidateStateMachineDefinitionSeverityMapper
    } // namespace Model
  } // namespace SFN
} // namespace Aws
