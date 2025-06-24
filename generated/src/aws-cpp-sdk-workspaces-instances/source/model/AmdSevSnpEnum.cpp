/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/AmdSevSnpEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkspacesInstances
  {
    namespace Model
    {
      namespace AmdSevSnpEnumMapper
      {

        static const int enabled_HASH = HashingUtils::HashString("enabled");
        static const int disabled_HASH = HashingUtils::HashString("disabled");


        AmdSevSnpEnum GetAmdSevSnpEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enabled_HASH)
          {
            return AmdSevSnpEnum::enabled;
          }
          else if (hashCode == disabled_HASH)
          {
            return AmdSevSnpEnum::disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AmdSevSnpEnum>(hashCode);
          }

          return AmdSevSnpEnum::NOT_SET;
        }

        Aws::String GetNameForAmdSevSnpEnum(AmdSevSnpEnum enumValue)
        {
          switch(enumValue)
          {
          case AmdSevSnpEnum::NOT_SET:
            return {};
          case AmdSevSnpEnum::enabled:
            return "enabled";
          case AmdSevSnpEnum::disabled:
            return "disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AmdSevSnpEnumMapper
    } // namespace Model
  } // namespace WorkspacesInstances
} // namespace Aws
