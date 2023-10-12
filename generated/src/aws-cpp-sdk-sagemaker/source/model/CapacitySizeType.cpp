/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CapacitySizeType.h>
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
      namespace CapacitySizeTypeMapper
      {

        static constexpr uint32_t INSTANCE_COUNT_HASH = ConstExprHashingUtils::HashString("INSTANCE_COUNT");
        static constexpr uint32_t CAPACITY_PERCENT_HASH = ConstExprHashingUtils::HashString("CAPACITY_PERCENT");


        CapacitySizeType GetCapacitySizeTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSTANCE_COUNT_HASH)
          {
            return CapacitySizeType::INSTANCE_COUNT;
          }
          else if (hashCode == CAPACITY_PERCENT_HASH)
          {
            return CapacitySizeType::CAPACITY_PERCENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapacitySizeType>(hashCode);
          }

          return CapacitySizeType::NOT_SET;
        }

        Aws::String GetNameForCapacitySizeType(CapacitySizeType enumValue)
        {
          switch(enumValue)
          {
          case CapacitySizeType::NOT_SET:
            return {};
          case CapacitySizeType::INSTANCE_COUNT:
            return "INSTANCE_COUNT";
          case CapacitySizeType::CAPACITY_PERCENT:
            return "CAPACITY_PERCENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapacitySizeTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
