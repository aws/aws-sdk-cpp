/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RoutingStrategy.h>
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
      namespace RoutingStrategyMapper
      {

        static const int LEAST_OUTSTANDING_REQUESTS_HASH = HashingUtils::HashString("LEAST_OUTSTANDING_REQUESTS");
        static const int RANDOM_HASH = HashingUtils::HashString("RANDOM");


        RoutingStrategy GetRoutingStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LEAST_OUTSTANDING_REQUESTS_HASH)
          {
            return RoutingStrategy::LEAST_OUTSTANDING_REQUESTS;
          }
          else if (hashCode == RANDOM_HASH)
          {
            return RoutingStrategy::RANDOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RoutingStrategy>(hashCode);
          }

          return RoutingStrategy::NOT_SET;
        }

        Aws::String GetNameForRoutingStrategy(RoutingStrategy enumValue)
        {
          switch(enumValue)
          {
          case RoutingStrategy::NOT_SET:
            return {};
          case RoutingStrategy::LEAST_OUTSTANDING_REQUESTS:
            return "LEAST_OUTSTANDING_REQUESTS";
          case RoutingStrategy::RANDOM:
            return "RANDOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RoutingStrategyMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
