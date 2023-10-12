/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/RebootInputDeviceForce.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace RebootInputDeviceForceMapper
      {

        static constexpr uint32_t NO_HASH = ConstExprHashingUtils::HashString("NO");
        static constexpr uint32_t YES_HASH = ConstExprHashingUtils::HashString("YES");


        RebootInputDeviceForce GetRebootInputDeviceForceForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_HASH)
          {
            return RebootInputDeviceForce::NO;
          }
          else if (hashCode == YES_HASH)
          {
            return RebootInputDeviceForce::YES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RebootInputDeviceForce>(hashCode);
          }

          return RebootInputDeviceForce::NOT_SET;
        }

        Aws::String GetNameForRebootInputDeviceForce(RebootInputDeviceForce enumValue)
        {
          switch(enumValue)
          {
          case RebootInputDeviceForce::NOT_SET:
            return {};
          case RebootInputDeviceForce::NO:
            return "NO";
          case RebootInputDeviceForce::YES:
            return "YES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RebootInputDeviceForceMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
