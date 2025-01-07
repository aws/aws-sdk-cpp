/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/QSearchStatus.h>
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
      namespace QSearchStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        QSearchStatus GetQSearchStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return QSearchStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return QSearchStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QSearchStatus>(hashCode);
          }

          return QSearchStatus::NOT_SET;
        }

        Aws::String GetNameForQSearchStatus(QSearchStatus enumValue)
        {
          switch(enumValue)
          {
          case QSearchStatus::NOT_SET:
            return {};
          case QSearchStatus::ENABLED:
            return "ENABLED";
          case QSearchStatus::DISABLED:
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

      } // namespace QSearchStatusMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
