/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/RemoteManagement.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Snowball
  {
    namespace Model
    {
      namespace RemoteManagementMapper
      {

        static constexpr uint32_t INSTALLED_ONLY_HASH = ConstExprHashingUtils::HashString("INSTALLED_ONLY");
        static constexpr uint32_t INSTALLED_AUTOSTART_HASH = ConstExprHashingUtils::HashString("INSTALLED_AUTOSTART");
        static constexpr uint32_t NOT_INSTALLED_HASH = ConstExprHashingUtils::HashString("NOT_INSTALLED");


        RemoteManagement GetRemoteManagementForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSTALLED_ONLY_HASH)
          {
            return RemoteManagement::INSTALLED_ONLY;
          }
          else if (hashCode == INSTALLED_AUTOSTART_HASH)
          {
            return RemoteManagement::INSTALLED_AUTOSTART;
          }
          else if (hashCode == NOT_INSTALLED_HASH)
          {
            return RemoteManagement::NOT_INSTALLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RemoteManagement>(hashCode);
          }

          return RemoteManagement::NOT_SET;
        }

        Aws::String GetNameForRemoteManagement(RemoteManagement enumValue)
        {
          switch(enumValue)
          {
          case RemoteManagement::NOT_SET:
            return {};
          case RemoteManagement::INSTALLED_ONLY:
            return "INSTALLED_ONLY";
          case RemoteManagement::INSTALLED_AUTOSTART:
            return "INSTALLED_AUTOSTART";
          case RemoteManagement::NOT_INSTALLED:
            return "NOT_INSTALLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RemoteManagementMapper
    } // namespace Model
  } // namespace Snowball
} // namespace Aws
