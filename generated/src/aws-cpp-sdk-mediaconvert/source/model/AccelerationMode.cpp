/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AccelerationMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace AccelerationModeMapper
      {

        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t ENABLED_HASH = ConstExprHashingUtils::HashString("ENABLED");
        static constexpr uint32_t PREFERRED_HASH = ConstExprHashingUtils::HashString("PREFERRED");


        AccelerationMode GetAccelerationModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return AccelerationMode::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return AccelerationMode::ENABLED;
          }
          else if (hashCode == PREFERRED_HASH)
          {
            return AccelerationMode::PREFERRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccelerationMode>(hashCode);
          }

          return AccelerationMode::NOT_SET;
        }

        Aws::String GetNameForAccelerationMode(AccelerationMode enumValue)
        {
          switch(enumValue)
          {
          case AccelerationMode::NOT_SET:
            return {};
          case AccelerationMode::DISABLED:
            return "DISABLED";
          case AccelerationMode::ENABLED:
            return "ENABLED";
          case AccelerationMode::PREFERRED:
            return "PREFERRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccelerationModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
