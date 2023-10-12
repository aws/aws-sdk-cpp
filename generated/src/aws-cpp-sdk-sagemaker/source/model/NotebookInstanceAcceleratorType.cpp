/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/NotebookInstanceAcceleratorType.h>
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
      namespace NotebookInstanceAcceleratorTypeMapper
      {

        static constexpr uint32_t ml_eia1_medium_HASH = ConstExprHashingUtils::HashString("ml.eia1.medium");
        static constexpr uint32_t ml_eia1_large_HASH = ConstExprHashingUtils::HashString("ml.eia1.large");
        static constexpr uint32_t ml_eia1_xlarge_HASH = ConstExprHashingUtils::HashString("ml.eia1.xlarge");
        static constexpr uint32_t ml_eia2_medium_HASH = ConstExprHashingUtils::HashString("ml.eia2.medium");
        static constexpr uint32_t ml_eia2_large_HASH = ConstExprHashingUtils::HashString("ml.eia2.large");
        static constexpr uint32_t ml_eia2_xlarge_HASH = ConstExprHashingUtils::HashString("ml.eia2.xlarge");


        NotebookInstanceAcceleratorType GetNotebookInstanceAcceleratorTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ml_eia1_medium_HASH)
          {
            return NotebookInstanceAcceleratorType::ml_eia1_medium;
          }
          else if (hashCode == ml_eia1_large_HASH)
          {
            return NotebookInstanceAcceleratorType::ml_eia1_large;
          }
          else if (hashCode == ml_eia1_xlarge_HASH)
          {
            return NotebookInstanceAcceleratorType::ml_eia1_xlarge;
          }
          else if (hashCode == ml_eia2_medium_HASH)
          {
            return NotebookInstanceAcceleratorType::ml_eia2_medium;
          }
          else if (hashCode == ml_eia2_large_HASH)
          {
            return NotebookInstanceAcceleratorType::ml_eia2_large;
          }
          else if (hashCode == ml_eia2_xlarge_HASH)
          {
            return NotebookInstanceAcceleratorType::ml_eia2_xlarge;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotebookInstanceAcceleratorType>(hashCode);
          }

          return NotebookInstanceAcceleratorType::NOT_SET;
        }

        Aws::String GetNameForNotebookInstanceAcceleratorType(NotebookInstanceAcceleratorType enumValue)
        {
          switch(enumValue)
          {
          case NotebookInstanceAcceleratorType::NOT_SET:
            return {};
          case NotebookInstanceAcceleratorType::ml_eia1_medium:
            return "ml.eia1.medium";
          case NotebookInstanceAcceleratorType::ml_eia1_large:
            return "ml.eia1.large";
          case NotebookInstanceAcceleratorType::ml_eia1_xlarge:
            return "ml.eia1.xlarge";
          case NotebookInstanceAcceleratorType::ml_eia2_medium:
            return "ml.eia2.medium";
          case NotebookInstanceAcceleratorType::ml_eia2_large:
            return "ml.eia2.large";
          case NotebookInstanceAcceleratorType::ml_eia2_xlarge:
            return "ml.eia2.xlarge";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NotebookInstanceAcceleratorTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
