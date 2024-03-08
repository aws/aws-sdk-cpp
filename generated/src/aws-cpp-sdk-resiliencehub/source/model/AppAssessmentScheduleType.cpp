/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/AppAssessmentScheduleType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResilienceHub
  {
    namespace Model
    {
      namespace AppAssessmentScheduleTypeMapper
      {

        static const int Disabled_HASH = HashingUtils::HashString("Disabled");
        static const int Daily_HASH = HashingUtils::HashString("Daily");


        AppAssessmentScheduleType GetAppAssessmentScheduleTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Disabled_HASH)
          {
            return AppAssessmentScheduleType::Disabled;
          }
          else if (hashCode == Daily_HASH)
          {
            return AppAssessmentScheduleType::Daily;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppAssessmentScheduleType>(hashCode);
          }

          return AppAssessmentScheduleType::NOT_SET;
        }

        Aws::String GetNameForAppAssessmentScheduleType(AppAssessmentScheduleType enumValue)
        {
          switch(enumValue)
          {
          case AppAssessmentScheduleType::NOT_SET:
            return {};
          case AppAssessmentScheduleType::Disabled:
            return "Disabled";
          case AppAssessmentScheduleType::Daily:
            return "Daily";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppAssessmentScheduleTypeMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
