/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/BatchResourceRequirementType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pipes
  {
    namespace Model
    {
      namespace BatchResourceRequirementTypeMapper
      {

        static constexpr uint32_t GPU_HASH = ConstExprHashingUtils::HashString("GPU");
        static constexpr uint32_t MEMORY_HASH = ConstExprHashingUtils::HashString("MEMORY");
        static constexpr uint32_t VCPU_HASH = ConstExprHashingUtils::HashString("VCPU");


        BatchResourceRequirementType GetBatchResourceRequirementTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GPU_HASH)
          {
            return BatchResourceRequirementType::GPU;
          }
          else if (hashCode == MEMORY_HASH)
          {
            return BatchResourceRequirementType::MEMORY;
          }
          else if (hashCode == VCPU_HASH)
          {
            return BatchResourceRequirementType::VCPU;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BatchResourceRequirementType>(hashCode);
          }

          return BatchResourceRequirementType::NOT_SET;
        }

        Aws::String GetNameForBatchResourceRequirementType(BatchResourceRequirementType enumValue)
        {
          switch(enumValue)
          {
          case BatchResourceRequirementType::NOT_SET:
            return {};
          case BatchResourceRequirementType::GPU:
            return "GPU";
          case BatchResourceRequirementType::MEMORY:
            return "MEMORY";
          case BatchResourceRequirementType::VCPU:
            return "VCPU";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BatchResourceRequirementTypeMapper
    } // namespace Model
  } // namespace Pipes
} // namespace Aws
