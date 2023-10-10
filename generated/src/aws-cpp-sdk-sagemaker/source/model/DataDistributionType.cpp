/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DataDistributionType.h>
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
      namespace DataDistributionTypeMapper
      {

        static const int FullyReplicated_HASH = HashingUtils::HashString("FullyReplicated");
        static const int ShardedByS3Key_HASH = HashingUtils::HashString("ShardedByS3Key");


        DataDistributionType GetDataDistributionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FullyReplicated_HASH)
          {
            return DataDistributionType::FullyReplicated;
          }
          else if (hashCode == ShardedByS3Key_HASH)
          {
            return DataDistributionType::ShardedByS3Key;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataDistributionType>(hashCode);
          }

          return DataDistributionType::NOT_SET;
        }

        Aws::String GetNameForDataDistributionType(DataDistributionType enumValue)
        {
          switch(enumValue)
          {
          case DataDistributionType::NOT_SET:
            return {};
          case DataDistributionType::FullyReplicated:
            return "FullyReplicated";
          case DataDistributionType::ShardedByS3Key:
            return "ShardedByS3Key";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataDistributionTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
