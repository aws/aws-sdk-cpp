/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/InstanceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpacesWeb
  {
    namespace Model
    {
      namespace InstanceTypeMapper
      {

        static const int standard_regular_HASH = HashingUtils::HashString("standard.regular");
        static const int standard_large_HASH = HashingUtils::HashString("standard.large");
        static const int standard_xlarge_HASH = HashingUtils::HashString("standard.xlarge");


        InstanceType GetInstanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == standard_regular_HASH)
          {
            return InstanceType::standard_regular;
          }
          else if (hashCode == standard_large_HASH)
          {
            return InstanceType::standard_large;
          }
          else if (hashCode == standard_xlarge_HASH)
          {
            return InstanceType::standard_xlarge;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceType>(hashCode);
          }

          return InstanceType::NOT_SET;
        }

        Aws::String GetNameForInstanceType(InstanceType enumValue)
        {
          switch(enumValue)
          {
          case InstanceType::NOT_SET:
            return {};
          case InstanceType::standard_regular:
            return "standard.regular";
          case InstanceType::standard_large:
            return "standard.large";
          case InstanceType::standard_xlarge:
            return "standard.xlarge";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceTypeMapper
    } // namespace Model
  } // namespace WorkSpacesWeb
} // namespace Aws
