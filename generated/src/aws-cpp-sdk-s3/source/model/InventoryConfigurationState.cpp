/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3/model/InventoryConfigurationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3
  {
    namespace Model
    {
      namespace InventoryConfigurationStateMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        InventoryConfigurationState GetInventoryConfigurationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return InventoryConfigurationState::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return InventoryConfigurationState::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InventoryConfigurationState>(hashCode);
          }

          return InventoryConfigurationState::NOT_SET;
        }

        Aws::String GetNameForInventoryConfigurationState(InventoryConfigurationState enumValue)
        {
          switch(enumValue)
          {
          case InventoryConfigurationState::NOT_SET:
            return {};
          case InventoryConfigurationState::ENABLED:
            return "ENABLED";
          case InventoryConfigurationState::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InventoryConfigurationStateMapper
    } // namespace Model
  } // namespace S3
} // namespace Aws
