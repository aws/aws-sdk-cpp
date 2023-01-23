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

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int PREFERRED_HASH = HashingUtils::HashString("PREFERRED");


        AccelerationMode GetAccelerationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
