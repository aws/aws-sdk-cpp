﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLSortOrder.h>
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
      namespace AutoMLSortOrderMapper
      {

        static const int Ascending_HASH = HashingUtils::HashString("Ascending");
        static const int Descending_HASH = HashingUtils::HashString("Descending");


        AutoMLSortOrder GetAutoMLSortOrderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Ascending_HASH)
          {
            return AutoMLSortOrder::Ascending;
          }
          else if (hashCode == Descending_HASH)
          {
            return AutoMLSortOrder::Descending;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoMLSortOrder>(hashCode);
          }

          return AutoMLSortOrder::NOT_SET;
        }

        Aws::String GetNameForAutoMLSortOrder(AutoMLSortOrder enumValue)
        {
          switch(enumValue)
          {
          case AutoMLSortOrder::NOT_SET:
            return {};
          case AutoMLSortOrder::Ascending:
            return "Ascending";
          case AutoMLSortOrder::Descending:
            return "Descending";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoMLSortOrderMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
