/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DashIsoIntervalCadence.h>
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
      namespace DashIsoIntervalCadenceMapper
      {

        static const int FOLLOW_IFRAME_HASH = HashingUtils::HashString("FOLLOW_IFRAME");
        static const int FOLLOW_CUSTOM_HASH = HashingUtils::HashString("FOLLOW_CUSTOM");


        DashIsoIntervalCadence GetDashIsoIntervalCadenceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FOLLOW_IFRAME_HASH)
          {
            return DashIsoIntervalCadence::FOLLOW_IFRAME;
          }
          else if (hashCode == FOLLOW_CUSTOM_HASH)
          {
            return DashIsoIntervalCadence::FOLLOW_CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DashIsoIntervalCadence>(hashCode);
          }

          return DashIsoIntervalCadence::NOT_SET;
        }

        Aws::String GetNameForDashIsoIntervalCadence(DashIsoIntervalCadence enumValue)
        {
          switch(enumValue)
          {
          case DashIsoIntervalCadence::NOT_SET:
            return {};
          case DashIsoIntervalCadence::FOLLOW_IFRAME:
            return "FOLLOW_IFRAME";
          case DashIsoIntervalCadence::FOLLOW_CUSTOM:
            return "FOLLOW_CUSTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DashIsoIntervalCadenceMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
