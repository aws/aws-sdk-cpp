/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/BatchStrategy.h>
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
      namespace BatchStrategyMapper
      {

        static constexpr uint32_t MultiRecord_HASH = ConstExprHashingUtils::HashString("MultiRecord");
        static constexpr uint32_t SingleRecord_HASH = ConstExprHashingUtils::HashString("SingleRecord");


        BatchStrategy GetBatchStrategyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MultiRecord_HASH)
          {
            return BatchStrategy::MultiRecord;
          }
          else if (hashCode == SingleRecord_HASH)
          {
            return BatchStrategy::SingleRecord;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchStrategy>(hashCode);
          }

          return BatchStrategy::NOT_SET;
        }

        Aws::String GetNameForBatchStrategy(BatchStrategy enumValue)
        {
          switch(enumValue)
          {
          case BatchStrategy::NOT_SET:
            return {};
          case BatchStrategy::MultiRecord:
            return "MultiRecord";
          case BatchStrategy::SingleRecord:
            return "SingleRecord";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BatchStrategyMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
