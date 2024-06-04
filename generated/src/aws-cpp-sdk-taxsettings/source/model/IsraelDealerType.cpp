/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/IsraelDealerType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TaxSettings
  {
    namespace Model
    {
      namespace IsraelDealerTypeMapper
      {

        static const int Authorized_HASH = HashingUtils::HashString("Authorized");
        static const int Non_authorized_HASH = HashingUtils::HashString("Non-authorized");


        IsraelDealerType GetIsraelDealerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Authorized_HASH)
          {
            return IsraelDealerType::Authorized;
          }
          else if (hashCode == Non_authorized_HASH)
          {
            return IsraelDealerType::Non_authorized;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IsraelDealerType>(hashCode);
          }

          return IsraelDealerType::NOT_SET;
        }

        Aws::String GetNameForIsraelDealerType(IsraelDealerType enumValue)
        {
          switch(enumValue)
          {
          case IsraelDealerType::NOT_SET:
            return {};
          case IsraelDealerType::Authorized:
            return "Authorized";
          case IsraelDealerType::Non_authorized:
            return "Non-authorized";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IsraelDealerTypeMapper
    } // namespace Model
  } // namespace TaxSettings
} // namespace Aws
