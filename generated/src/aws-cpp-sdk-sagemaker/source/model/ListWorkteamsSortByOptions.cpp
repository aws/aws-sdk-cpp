/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListWorkteamsSortByOptions.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace ListWorkteamsSortByOptionsMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int CreateDate_HASH = HashingUtils::HashString("CreateDate");


        ListWorkteamsSortByOptions GetListWorkteamsSortByOptionsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return ListWorkteamsSortByOptions::Name;
          }
          else if (hashCode == CreateDate_HASH)
          {
            return ListWorkteamsSortByOptions::CreateDate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListWorkteamsSortByOptions>(hashCode);
          }

          return ListWorkteamsSortByOptions::NOT_SET;
        }

        Aws::String GetNameForListWorkteamsSortByOptions(ListWorkteamsSortByOptions enumValue)
        {
          switch(enumValue)
          {
          case ListWorkteamsSortByOptions::Name:
            return "Name";
          case ListWorkteamsSortByOptions::CreateDate:
            return "CreateDate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListWorkteamsSortByOptionsMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
