/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/service-quotas/model/OptInType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceQuotas
  {
    namespace Model
    {
      namespace OptInTypeMapper
      {

        static const int NotifyOnly_HASH = HashingUtils::HashString("NotifyOnly");
        static const int NotifyAndAdjust_HASH = HashingUtils::HashString("NotifyAndAdjust");


        OptInType GetOptInTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NotifyOnly_HASH)
          {
            return OptInType::NotifyOnly;
          }
          else if (hashCode == NotifyAndAdjust_HASH)
          {
            return OptInType::NotifyAndAdjust;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OptInType>(hashCode);
          }

          return OptInType::NOT_SET;
        }

        Aws::String GetNameForOptInType(OptInType enumValue)
        {
          switch(enumValue)
          {
          case OptInType::NOT_SET:
            return {};
          case OptInType::NotifyOnly:
            return "NotifyOnly";
          case OptInType::NotifyAndAdjust:
            return "NotifyAndAdjust";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OptInTypeMapper
    } // namespace Model
  } // namespace ServiceQuotas
} // namespace Aws
