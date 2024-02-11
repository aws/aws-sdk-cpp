/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InferenceExecutionMode.h>
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
      namespace InferenceExecutionModeMapper
      {

        static const int Serial_HASH = HashingUtils::HashString("Serial");
        static const int Direct_HASH = HashingUtils::HashString("Direct");


        InferenceExecutionMode GetInferenceExecutionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Serial_HASH)
          {
            return InferenceExecutionMode::Serial;
          }
          else if (hashCode == Direct_HASH)
          {
            return InferenceExecutionMode::Direct;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InferenceExecutionMode>(hashCode);
          }

          return InferenceExecutionMode::NOT_SET;
        }

        Aws::String GetNameForInferenceExecutionMode(InferenceExecutionMode enumValue)
        {
          switch(enumValue)
          {
          case InferenceExecutionMode::NOT_SET:
            return {};
          case InferenceExecutionMode::Serial:
            return "Serial";
          case InferenceExecutionMode::Direct:
            return "Direct";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InferenceExecutionModeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
