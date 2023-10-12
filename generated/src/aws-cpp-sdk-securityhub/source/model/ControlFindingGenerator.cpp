/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ControlFindingGenerator.h>
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
      namespace ControlFindingGeneratorMapper
      {

        static constexpr uint32_t STANDARD_CONTROL_HASH = ConstExprHashingUtils::HashString("STANDARD_CONTROL");
        static constexpr uint32_t SECURITY_CONTROL_HASH = ConstExprHashingUtils::HashString("SECURITY_CONTROL");


        ControlFindingGenerator GetControlFindingGeneratorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_CONTROL_HASH)
          {
            return ControlFindingGenerator::STANDARD_CONTROL;
          }
          else if (hashCode == SECURITY_CONTROL_HASH)
          {
            return ControlFindingGenerator::SECURITY_CONTROL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ControlFindingGenerator>(hashCode);
          }

          return ControlFindingGenerator::NOT_SET;
        }

        Aws::String GetNameForControlFindingGenerator(ControlFindingGenerator enumValue)
        {
          switch(enumValue)
          {
          case ControlFindingGenerator::NOT_SET:
            return {};
          case ControlFindingGenerator::STANDARD_CONTROL:
            return "STANDARD_CONTROL";
          case ControlFindingGenerator::SECURITY_CONTROL:
            return "SECURITY_CONTROL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ControlFindingGeneratorMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
