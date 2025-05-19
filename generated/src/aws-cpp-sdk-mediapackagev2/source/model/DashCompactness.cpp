/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/DashCompactness.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mediapackagev2
  {
    namespace Model
    {
      namespace DashCompactnessMapper
      {

        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        DashCompactness GetDashCompactnessForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return DashCompactness::STANDARD;
          }
          else if (hashCode == NONE_HASH)
          {
            return DashCompactness::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DashCompactness>(hashCode);
          }

          return DashCompactness::NOT_SET;
        }

        Aws::String GetNameForDashCompactness(DashCompactness enumValue)
        {
          switch(enumValue)
          {
          case DashCompactness::NOT_SET:
            return {};
          case DashCompactness::STANDARD:
            return "STANDARD";
          case DashCompactness::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DashCompactnessMapper
    } // namespace Model
  } // namespace mediapackagev2
} // namespace Aws
