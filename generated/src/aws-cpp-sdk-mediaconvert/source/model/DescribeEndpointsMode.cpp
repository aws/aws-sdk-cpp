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

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int GET_ONLY_HASH = HashingUtils::HashString("GET_ONLY");


        DescribeEndpointsMode GetDescribeEndpointsModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
