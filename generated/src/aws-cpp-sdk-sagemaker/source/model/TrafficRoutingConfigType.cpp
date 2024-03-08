/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrafficRoutingConfigType.h>
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
      namespace TrafficRoutingConfigTypeMapper
      {

        static const int ALL_AT_ONCE_HASH = HashingUtils::HashString("ALL_AT_ONCE");
        static const int CANARY_HASH = HashingUtils::HashString("CANARY");
        static const int LINEAR_HASH = HashingUtils::HashString("LINEAR");


        TrafficRoutingConfigType GetTrafficRoutingConfigTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_AT_ONCE_HASH)
          {
            return TrafficRoutingConfigType::ALL_AT_ONCE;
          }
          else if (hashCode == CANARY_HASH)
          {
            return TrafficRoutingConfigType::CANARY;
          }
          else if (hashCode == LINEAR_HASH)
          {
            return TrafficRoutingConfigType::LINEAR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrafficRoutingConfigType>(hashCode);
          }

          return TrafficRoutingConfigType::NOT_SET;
        }

        Aws::String GetNameForTrafficRoutingConfigType(TrafficRoutingConfigType enumValue)
        {
          switch(enumValue)
          {
          case TrafficRoutingConfigType::NOT_SET:
            return {};
          case TrafficRoutingConfigType::ALL_AT_ONCE:
            return "ALL_AT_ONCE";
          case TrafficRoutingConfigType::CANARY:
            return "CANARY";
          case TrafficRoutingConfigType::LINEAR:
            return "LINEAR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrafficRoutingConfigTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
