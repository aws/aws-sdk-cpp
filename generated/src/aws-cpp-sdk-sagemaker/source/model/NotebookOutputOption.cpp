/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/NotebookOutputOption.h>
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
      namespace NotebookOutputOptionMapper
      {

        static constexpr uint32_t Allowed_HASH = ConstExprHashingUtils::HashString("Allowed");
        static constexpr uint32_t Disabled_HASH = ConstExprHashingUtils::HashString("Disabled");


        NotebookOutputOption GetNotebookOutputOptionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Allowed_HASH)
          {
            return NotebookOutputOption::Allowed;
          }
          else if (hashCode == Disabled_HASH)
          {
            return NotebookOutputOption::Disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotebookOutputOption>(hashCode);
          }

          return NotebookOutputOption::NOT_SET;
        }

        Aws::String GetNameForNotebookOutputOption(NotebookOutputOption enumValue)
        {
          switch(enumValue)
          {
          case NotebookOutputOption::NOT_SET:
            return {};
          case NotebookOutputOption::Allowed:
            return "Allowed";
          case NotebookOutputOption::Disabled:
            return "Disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NotebookOutputOptionMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
