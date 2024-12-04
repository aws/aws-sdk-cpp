/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ResourceSharingStrategy.h>
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
      namespace ResourceSharingStrategyMapper
      {

        static const int Lend_HASH = HashingUtils::HashString("Lend");
        static const int DontLend_HASH = HashingUtils::HashString("DontLend");
        static const int LendAndBorrow_HASH = HashingUtils::HashString("LendAndBorrow");


        ResourceSharingStrategy GetResourceSharingStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Lend_HASH)
          {
            return ResourceSharingStrategy::Lend;
          }
          else if (hashCode == DontLend_HASH)
          {
            return ResourceSharingStrategy::DontLend;
          }
          else if (hashCode == LendAndBorrow_HASH)
          {
            return ResourceSharingStrategy::LendAndBorrow;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceSharingStrategy>(hashCode);
          }

          return ResourceSharingStrategy::NOT_SET;
        }

        Aws::String GetNameForResourceSharingStrategy(ResourceSharingStrategy enumValue)
        {
          switch(enumValue)
          {
          case ResourceSharingStrategy::NOT_SET:
            return {};
          case ResourceSharingStrategy::Lend:
            return "Lend";
          case ResourceSharingStrategy::DontLend:
            return "DontLend";
          case ResourceSharingStrategy::LendAndBorrow:
            return "LendAndBorrow";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceSharingStrategyMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
