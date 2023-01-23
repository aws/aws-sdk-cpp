/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/NotebookInstanceLifecycleConfigSortKey.h>
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
      namespace NotebookInstanceLifecycleConfigSortKeyMapper
      {

        static const int Name_HASH = HashingUtils::HashString("Name");
        static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");
        static const int LastModifiedTime_HASH = HashingUtils::HashString("LastModifiedTime");


        NotebookInstanceLifecycleConfigSortKey GetNotebookInstanceLifecycleConfigSortKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return NotebookInstanceLifecycleConfigSortKey::Name;
          }
          else if (hashCode == CreationTime_HASH)
          {
            return NotebookInstanceLifecycleConfigSortKey::CreationTime;
          }
          else if (hashCode == LastModifiedTime_HASH)
          {
            return NotebookInstanceLifecycleConfigSortKey::LastModifiedTime;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotebookInstanceLifecycleConfigSortKey>(hashCode);
          }

          return NotebookInstanceLifecycleConfigSortKey::NOT_SET;
        }

        Aws::String GetNameForNotebookInstanceLifecycleConfigSortKey(NotebookInstanceLifecycleConfigSortKey enumValue)
        {
          switch(enumValue)
          {
          case NotebookInstanceLifecycleConfigSortKey::Name:
            return "Name";
          case NotebookInstanceLifecycleConfigSortKey::CreationTime:
            return "CreationTime";
          case NotebookInstanceLifecycleConfigSortKey::LastModifiedTime:
            return "LastModifiedTime";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NotebookInstanceLifecycleConfigSortKeyMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
