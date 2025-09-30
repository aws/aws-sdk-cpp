/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ClusterScalabilityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace ClusterScalabilityTypeMapper
      {

        static const int standard_HASH = HashingUtils::HashString("standard");
        static const int limitless_HASH = HashingUtils::HashString("limitless");
        static const int scaleout_HASH = HashingUtils::HashString("scaleout");


        ClusterScalabilityType GetClusterScalabilityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == standard_HASH)
          {
            return ClusterScalabilityType::standard;
          }
          else if (hashCode == limitless_HASH)
          {
            return ClusterScalabilityType::limitless;
          }
          else if (hashCode == scaleout_HASH)
          {
            return ClusterScalabilityType::scaleout;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterScalabilityType>(hashCode);
          }

          return ClusterScalabilityType::NOT_SET;
        }

        Aws::String GetNameForClusterScalabilityType(ClusterScalabilityType enumValue)
        {
          switch(enumValue)
          {
          case ClusterScalabilityType::NOT_SET:
            return {};
          case ClusterScalabilityType::standard:
            return "standard";
          case ClusterScalabilityType::limitless:
            return "limitless";
          case ClusterScalabilityType::scaleout:
            return "scaleout";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClusterScalabilityTypeMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
