/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ClusterType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace ClusterTypeMapper
      {

        static const int ON_PREMISES_HASH = HashingUtils::HashString("ON_PREMISES");


        ClusterType GetClusterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ON_PREMISES_HASH)
          {
            return ClusterType::ON_PREMISES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterType>(hashCode);
          }

          return ClusterType::NOT_SET;
        }

        Aws::String GetNameForClusterType(ClusterType enumValue)
        {
          switch(enumValue)
          {
          case ClusterType::NOT_SET:
            return {};
          case ClusterType::ON_PREMISES:
            return "ON_PREMISES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClusterTypeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
