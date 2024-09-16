/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputNetworkLocation.h>
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
      namespace InputNetworkLocationMapper
      {

        static const int AWS_HASH = HashingUtils::HashString("AWS");
        static const int ON_PREMISES_HASH = HashingUtils::HashString("ON_PREMISES");


        InputNetworkLocation GetInputNetworkLocationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_HASH)
          {
            return InputNetworkLocation::AWS;
          }
          else if (hashCode == ON_PREMISES_HASH)
          {
            return InputNetworkLocation::ON_PREMISES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputNetworkLocation>(hashCode);
          }

          return InputNetworkLocation::NOT_SET;
        }

        Aws::String GetNameForInputNetworkLocation(InputNetworkLocation enumValue)
        {
          switch(enumValue)
          {
          case InputNetworkLocation::NOT_SET:
            return {};
          case InputNetworkLocation::AWS:
            return "AWS";
          case InputNetworkLocation::ON_PREMISES:
            return "ON_PREMISES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputNetworkLocationMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
