/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/SupportedHardwareType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Outposts
  {
    namespace Model
    {
      namespace SupportedHardwareTypeMapper
      {

        static const int RACK_HASH = HashingUtils::HashString("RACK");
        static const int SERVER_HASH = HashingUtils::HashString("SERVER");


        SupportedHardwareType GetSupportedHardwareTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RACK_HASH)
          {
            return SupportedHardwareType::RACK;
          }
          else if (hashCode == SERVER_HASH)
          {
            return SupportedHardwareType::SERVER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SupportedHardwareType>(hashCode);
          }

          return SupportedHardwareType::NOT_SET;
        }

        Aws::String GetNameForSupportedHardwareType(SupportedHardwareType enumValue)
        {
          switch(enumValue)
          {
          case SupportedHardwareType::NOT_SET:
            return {};
          case SupportedHardwareType::RACK:
            return "RACK";
          case SupportedHardwareType::SERVER:
            return "SERVER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SupportedHardwareTypeMapper
    } // namespace Model
  } // namespace Outposts
} // namespace Aws
