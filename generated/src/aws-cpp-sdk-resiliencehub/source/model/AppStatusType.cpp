/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/AppStatusType.h>
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
      namespace AppStatusTypeMapper
      {

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");


        AppStatusType GetAppStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return AppStatusType::Active;
          }
          else if (hashCode == Deleting_HASH)
          {
            return AppStatusType::Deleting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppStatusType>(hashCode);
          }

          return AppStatusType::NOT_SET;
        }

        Aws::String GetNameForAppStatusType(AppStatusType enumValue)
        {
          switch(enumValue)
          {
          case AppStatusType::NOT_SET:
            return {};
          case AppStatusType::Active:
            return "Active";
          case AppStatusType::Deleting:
            return "Deleting";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppStatusTypeMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
