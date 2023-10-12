/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/NotebookInstanceLifecycleConfigSortOrder.h>
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
      namespace NotebookInstanceLifecycleConfigSortOrderMapper
      {

        static constexpr uint32_t Ascending_HASH = ConstExprHashingUtils::HashString("Ascending");
        static constexpr uint32_t Descending_HASH = ConstExprHashingUtils::HashString("Descending");


        NotebookInstanceLifecycleConfigSortOrder GetNotebookInstanceLifecycleConfigSortOrderForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Ascending_HASH)
          {
            return NotebookInstanceLifecycleConfigSortOrder::Ascending;
          }
          else if (hashCode == Descending_HASH)
          {
            return NotebookInstanceLifecycleConfigSortOrder::Descending;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotebookInstanceLifecycleConfigSortOrder>(hashCode);
          }

          return NotebookInstanceLifecycleConfigSortOrder::NOT_SET;
        }

        Aws::String GetNameForNotebookInstanceLifecycleConfigSortOrder(NotebookInstanceLifecycleConfigSortOrder enumValue)
        {
          switch(enumValue)
          {
          case NotebookInstanceLifecycleConfigSortOrder::NOT_SET:
            return {};
          case NotebookInstanceLifecycleConfigSortOrder::Ascending:
            return "Ascending";
          case NotebookInstanceLifecycleConfigSortOrder::Descending:
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

      } // namespace NotebookInstanceLifecycleConfigSortOrderMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
