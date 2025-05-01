/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/NodeUnavailabilityType.h>
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
      namespace NodeUnavailabilityTypeMapper
      {

        static const int INSTANCE_COUNT_HASH = HashingUtils::HashString("INSTANCE_COUNT");
        static const int CAPACITY_PERCENTAGE_HASH = HashingUtils::HashString("CAPACITY_PERCENTAGE");


        NodeUnavailabilityType GetNodeUnavailabilityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSTANCE_COUNT_HASH)
          {
            return NodeUnavailabilityType::INSTANCE_COUNT;
          }
          else if (hashCode == CAPACITY_PERCENTAGE_HASH)
          {
            return NodeUnavailabilityType::CAPACITY_PERCENTAGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NodeUnavailabilityType>(hashCode);
          }

          return NodeUnavailabilityType::NOT_SET;
        }

        Aws::String GetNameForNodeUnavailabilityType(NodeUnavailabilityType enumValue)
        {
          switch(enumValue)
          {
          case NodeUnavailabilityType::NOT_SET:
            return {};
          case NodeUnavailabilityType::INSTANCE_COUNT:
            return "INSTANCE_COUNT";
          case NodeUnavailabilityType::CAPACITY_PERCENTAGE:
            return "CAPACITY_PERCENTAGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NodeUnavailabilityTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
