/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrafficType.h>
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
      namespace TrafficTypeMapper
      {

        static constexpr uint32_t PHASES_HASH = ConstExprHashingUtils::HashString("PHASES");
        static constexpr uint32_t STAIRS_HASH = ConstExprHashingUtils::HashString("STAIRS");


        TrafficType GetTrafficTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PHASES_HASH)
          {
            return TrafficType::PHASES;
          }
          else if (hashCode == STAIRS_HASH)
          {
            return TrafficType::STAIRS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrafficType>(hashCode);
          }

          return TrafficType::NOT_SET;
        }

        Aws::String GetNameForTrafficType(TrafficType enumValue)
        {
          switch(enumValue)
          {
          case TrafficType::NOT_SET:
            return {};
          case TrafficType::PHASES:
            return "PHASES";
          case TrafficType::STAIRS:
            return "STAIRS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrafficTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
