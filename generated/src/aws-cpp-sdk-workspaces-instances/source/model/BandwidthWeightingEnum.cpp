/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/BandwidthWeightingEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkspacesInstances
  {
    namespace Model
    {
      namespace BandwidthWeightingEnumMapper
      {

        static const int default__HASH = HashingUtils::HashString("default");
        static const int vpc_1_HASH = HashingUtils::HashString("vpc-1");
        static const int ebs_1_HASH = HashingUtils::HashString("ebs-1");


        BandwidthWeightingEnum GetBandwidthWeightingEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == default__HASH)
          {
            return BandwidthWeightingEnum::default_;
          }
          else if (hashCode == vpc_1_HASH)
          {
            return BandwidthWeightingEnum::vpc_1;
          }
          else if (hashCode == ebs_1_HASH)
          {
            return BandwidthWeightingEnum::ebs_1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BandwidthWeightingEnum>(hashCode);
          }

          return BandwidthWeightingEnum::NOT_SET;
        }

        Aws::String GetNameForBandwidthWeightingEnum(BandwidthWeightingEnum enumValue)
        {
          switch(enumValue)
          {
          case BandwidthWeightingEnum::NOT_SET:
            return {};
          case BandwidthWeightingEnum::default_:
            return "default";
          case BandwidthWeightingEnum::vpc_1:
            return "vpc-1";
          case BandwidthWeightingEnum::ebs_1:
            return "ebs-1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BandwidthWeightingEnumMapper
    } // namespace Model
  } // namespace WorkspacesInstances
} // namespace Aws
