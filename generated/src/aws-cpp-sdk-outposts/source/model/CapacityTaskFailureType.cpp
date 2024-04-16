/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/CapacityTaskFailureType.h>
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
      namespace CapacityTaskFailureTypeMapper
      {

        static const int UNSUPPORTED_CAPACITY_CONFIGURATION_HASH = HashingUtils::HashString("UNSUPPORTED_CAPACITY_CONFIGURATION");


        CapacityTaskFailureType GetCapacityTaskFailureTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNSUPPORTED_CAPACITY_CONFIGURATION_HASH)
          {
            return CapacityTaskFailureType::UNSUPPORTED_CAPACITY_CONFIGURATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapacityTaskFailureType>(hashCode);
          }

          return CapacityTaskFailureType::NOT_SET;
        }

        Aws::String GetNameForCapacityTaskFailureType(CapacityTaskFailureType enumValue)
        {
          switch(enumValue)
          {
          case CapacityTaskFailureType::NOT_SET:
            return {};
          case CapacityTaskFailureType::UNSUPPORTED_CAPACITY_CONFIGURATION:
            return "UNSUPPORTED_CAPACITY_CONFIGURATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapacityTaskFailureTypeMapper
    } // namespace Model
  } // namespace Outposts
} // namespace Aws
