/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/StateMachineType.h>
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
      namespace StateMachineTypeMapper
      {

        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
        static const int EXPRESS_HASH = HashingUtils::HashString("EXPRESS");


        StateMachineType GetStateMachineTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return StateMachineType::STANDARD;
          }
          else if (hashCode == EXPRESS_HASH)
          {
            return StateMachineType::EXPRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StateMachineType>(hashCode);
          }

          return StateMachineType::NOT_SET;
        }

        Aws::String GetNameForStateMachineType(StateMachineType enumValue)
        {
          switch(enumValue)
          {
          case StateMachineType::STANDARD:
            return "STANDARD";
          case StateMachineType::EXPRESS:
            return "EXPRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StateMachineTypeMapper
    } // namespace Model
  } // namespace SFN
} // namespace Aws
