/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/DeletionProtection.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace VerifiedPermissions
  {
    namespace Model
    {
      namespace DeletionProtectionMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        DeletionProtection GetDeletionProtectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return DeletionProtection::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return DeletionProtection::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeletionProtection>(hashCode);
          }

          return DeletionProtection::NOT_SET;
        }

        Aws::String GetNameForDeletionProtection(DeletionProtection enumValue)
        {
          switch(enumValue)
          {
          case DeletionProtection::NOT_SET:
            return {};
          case DeletionProtection::ENABLED:
            return "ENABLED";
          case DeletionProtection::DISABLED:
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

      } // namespace DeletionProtectionMapper
    } // namespace Model
  } // namespace VerifiedPermissions
} // namespace Aws
