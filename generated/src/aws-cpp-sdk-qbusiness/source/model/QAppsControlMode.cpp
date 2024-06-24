/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/QAppsControlMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace QAppsControlModeMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        QAppsControlMode GetQAppsControlModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return QAppsControlMode::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return QAppsControlMode::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QAppsControlMode>(hashCode);
          }

          return QAppsControlMode::NOT_SET;
        }

        Aws::String GetNameForQAppsControlMode(QAppsControlMode enumValue)
        {
          switch(enumValue)
          {
          case QAppsControlMode::NOT_SET:
            return {};
          case QAppsControlMode::ENABLED:
            return "ENABLED";
          case QAppsControlMode::DISABLED:
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

      } // namespace QAppsControlModeMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
