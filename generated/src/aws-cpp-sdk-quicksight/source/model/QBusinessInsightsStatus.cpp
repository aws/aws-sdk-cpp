/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/QBusinessInsightsStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace QBusinessInsightsStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        QBusinessInsightsStatus GetQBusinessInsightsStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return QBusinessInsightsStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return QBusinessInsightsStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QBusinessInsightsStatus>(hashCode);
          }

          return QBusinessInsightsStatus::NOT_SET;
        }

        Aws::String GetNameForQBusinessInsightsStatus(QBusinessInsightsStatus enumValue)
        {
          switch(enumValue)
          {
          case QBusinessInsightsStatus::NOT_SET:
            return {};
          case QBusinessInsightsStatus::ENABLED:
            return "ENABLED";
          case QBusinessInsightsStatus::DISABLED:
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

      } // namespace QBusinessInsightsStatusMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
