/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DescribeEndpointsMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace DescribeEndpointsModeMapper
      {

        static constexpr uint32_t DEFAULT_HASH = ConstExprHashingUtils::HashString("DEFAULT");
        static constexpr uint32_t GET_ONLY_HASH = ConstExprHashingUtils::HashString("GET_ONLY");


        DescribeEndpointsMode GetDescribeEndpointsModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return DescribeEndpointsMode::DEFAULT;
          }
          else if (hashCode == GET_ONLY_HASH)
          {
            return DescribeEndpointsMode::GET_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DescribeEndpointsMode>(hashCode);
          }

          return DescribeEndpointsMode::NOT_SET;
        }

        Aws::String GetNameForDescribeEndpointsMode(DescribeEndpointsMode enumValue)
        {
          switch(enumValue)
          {
          case DescribeEndpointsMode::NOT_SET:
            return {};
          case DescribeEndpointsMode::DEFAULT:
            return "DEFAULT";
          case DescribeEndpointsMode::GET_ONLY:
            return "GET_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DescribeEndpointsModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
