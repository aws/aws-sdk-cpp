/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/AppComplianceStatusType.h>
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
      namespace AppComplianceStatusTypeMapper
      {

        static const int PolicyBreached_HASH = HashingUtils::HashString("PolicyBreached");
        static const int PolicyMet_HASH = HashingUtils::HashString("PolicyMet");
        static const int NotAssessed_HASH = HashingUtils::HashString("NotAssessed");
        static const int ChangesDetected_HASH = HashingUtils::HashString("ChangesDetected");


        AppComplianceStatusType GetAppComplianceStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PolicyBreached_HASH)
          {
            return AppComplianceStatusType::PolicyBreached;
          }
          else if (hashCode == PolicyMet_HASH)
          {
            return AppComplianceStatusType::PolicyMet;
          }
          else if (hashCode == NotAssessed_HASH)
          {
            return AppComplianceStatusType::NotAssessed;
          }
          else if (hashCode == ChangesDetected_HASH)
          {
            return AppComplianceStatusType::ChangesDetected;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppComplianceStatusType>(hashCode);
          }

          return AppComplianceStatusType::NOT_SET;
        }

        Aws::String GetNameForAppComplianceStatusType(AppComplianceStatusType enumValue)
        {
          switch(enumValue)
          {
          case AppComplianceStatusType::NOT_SET:
            return {};
          case AppComplianceStatusType::PolicyBreached:
            return "PolicyBreached";
          case AppComplianceStatusType::PolicyMet:
            return "PolicyMet";
          case AppComplianceStatusType::NotAssessed:
            return "NotAssessed";
          case AppComplianceStatusType::ChangesDetected:
            return "ChangesDetected";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppComplianceStatusTypeMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
