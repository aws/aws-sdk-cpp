/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/AppDriftStatusType.h>
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
      namespace AppDriftStatusTypeMapper
      {

        static constexpr uint32_t NotChecked_HASH = ConstExprHashingUtils::HashString("NotChecked");
        static constexpr uint32_t NotDetected_HASH = ConstExprHashingUtils::HashString("NotDetected");
        static constexpr uint32_t Detected_HASH = ConstExprHashingUtils::HashString("Detected");


        AppDriftStatusType GetAppDriftStatusTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NotChecked_HASH)
          {
            return AppDriftStatusType::NotChecked;
          }
          else if (hashCode == NotDetected_HASH)
          {
            return AppDriftStatusType::NotDetected;
          }
          else if (hashCode == Detected_HASH)
          {
            return AppDriftStatusType::Detected;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppDriftStatusType>(hashCode);
          }

          return AppDriftStatusType::NOT_SET;
        }

        Aws::String GetNameForAppDriftStatusType(AppDriftStatusType enumValue)
        {
          switch(enumValue)
          {
          case AppDriftStatusType::NOT_SET:
            return {};
          case AppDriftStatusType::NotChecked:
            return "NotChecked";
          case AppDriftStatusType::NotDetected:
            return "NotDetected";
          case AppDriftStatusType::Detected:
            return "Detected";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppDriftStatusTypeMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
