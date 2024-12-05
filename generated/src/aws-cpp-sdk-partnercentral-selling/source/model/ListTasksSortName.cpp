/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/ListTasksSortName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PartnerCentralSelling
  {
    namespace Model
    {
      namespace ListTasksSortNameMapper
      {

        static const int StartTime_HASH = HashingUtils::HashString("StartTime");


        ListTasksSortName GetListTasksSortNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == StartTime_HASH)
          {
            return ListTasksSortName::StartTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListTasksSortName>(hashCode);
          }

          return ListTasksSortName::NOT_SET;
        }

        Aws::String GetNameForListTasksSortName(ListTasksSortName enumValue)
        {
          switch(enumValue)
          {
          case ListTasksSortName::NOT_SET:
            return {};
          case ListTasksSortName::StartTime:
            return "StartTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListTasksSortNameMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
