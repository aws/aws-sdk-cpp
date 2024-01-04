/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ThroughputMode.h>
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
      namespace ThroughputModeMapper
      {

        static const int OnDemand_HASH = HashingUtils::HashString("OnDemand");
        static const int Provisioned_HASH = HashingUtils::HashString("Provisioned");


        ThroughputMode GetThroughputModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OnDemand_HASH)
          {
            return ThroughputMode::OnDemand;
          }
          else if (hashCode == Provisioned_HASH)
          {
            return ThroughputMode::Provisioned;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThroughputMode>(hashCode);
          }

          return ThroughputMode::NOT_SET;
        }

        Aws::String GetNameForThroughputMode(ThroughputMode enumValue)
        {
          switch(enumValue)
          {
          case ThroughputMode::NOT_SET:
            return {};
          case ThroughputMode::OnDemand:
            return "OnDemand";
          case ThroughputMode::Provisioned:
            return "Provisioned";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ThroughputModeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
