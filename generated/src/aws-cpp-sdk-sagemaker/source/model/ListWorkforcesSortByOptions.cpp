/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListWorkforcesSortByOptions.h>
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
      namespace ListWorkforcesSortByOptionsMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int CreateDate_HASH = HashingUtils::HashString("CreateDate");


        ListWorkforcesSortByOptions GetListWorkforcesSortByOptionsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return ListWorkforcesSortByOptions::Name;
          }
          else if (hashCode == CreateDate_HASH)
          {
            return ListWorkforcesSortByOptions::CreateDate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListWorkforcesSortByOptions>(hashCode);
          }

          return ListWorkforcesSortByOptions::NOT_SET;
        }

        Aws::String GetNameForListWorkforcesSortByOptions(ListWorkforcesSortByOptions enumValue)
        {
          switch(enumValue)
          {
          case ListWorkforcesSortByOptions::Name:
            return "Name";
          case ListWorkforcesSortByOptions::CreateDate:
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

      } // namespace ListWorkforcesSortByOptionsMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
