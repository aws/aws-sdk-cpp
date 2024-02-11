/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PropertyUsage.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace PropertyUsageMapper
      {

        static const int INHERIT_HASH = HashingUtils::HashString("INHERIT");
        static const int DIMENSION_HASH = HashingUtils::HashString("DIMENSION");
        static const int MEASURE_HASH = HashingUtils::HashString("MEASURE");


        PropertyUsage GetPropertyUsageForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INHERIT_HASH)
          {
            return PropertyUsage::INHERIT;
          }
          else if (hashCode == DIMENSION_HASH)
          {
            return PropertyUsage::DIMENSION;
          }
          else if (hashCode == MEASURE_HASH)
          {
            return PropertyUsage::MEASURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PropertyUsage>(hashCode);
          }

          return PropertyUsage::NOT_SET;
        }

        Aws::String GetNameForPropertyUsage(PropertyUsage enumValue)
        {
          switch(enumValue)
          {
          case PropertyUsage::NOT_SET:
            return {};
          case PropertyUsage::INHERIT:
            return "INHERIT";
          case PropertyUsage::DIMENSION:
            return "DIMENSION";
          case PropertyUsage::MEASURE:
            return "MEASURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PropertyUsageMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
