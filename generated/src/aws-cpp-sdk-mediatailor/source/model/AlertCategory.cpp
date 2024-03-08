/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/AlertCategory.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaTailor
  {
    namespace Model
    {
      namespace AlertCategoryMapper
      {

        static const int SCHEDULING_ERROR_HASH = HashingUtils::HashString("SCHEDULING_ERROR");
        static const int PLAYBACK_WARNING_HASH = HashingUtils::HashString("PLAYBACK_WARNING");
        static const int INFO_HASH = HashingUtils::HashString("INFO");


        AlertCategory GetAlertCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SCHEDULING_ERROR_HASH)
          {
            return AlertCategory::SCHEDULING_ERROR;
          }
          else if (hashCode == PLAYBACK_WARNING_HASH)
          {
            return AlertCategory::PLAYBACK_WARNING;
          }
          else if (hashCode == INFO_HASH)
          {
            return AlertCategory::INFO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AlertCategory>(hashCode);
          }

          return AlertCategory::NOT_SET;
        }

        Aws::String GetNameForAlertCategory(AlertCategory enumValue)
        {
          switch(enumValue)
          {
          case AlertCategory::NOT_SET:
            return {};
          case AlertCategory::SCHEDULING_ERROR:
            return "SCHEDULING_ERROR";
          case AlertCategory::PLAYBACK_WARNING:
            return "PLAYBACK_WARNING";
          case AlertCategory::INFO:
            return "INFO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AlertCategoryMapper
    } // namespace Model
  } // namespace MediaTailor
} // namespace Aws
