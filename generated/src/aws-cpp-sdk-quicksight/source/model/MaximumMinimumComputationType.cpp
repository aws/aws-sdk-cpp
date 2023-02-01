/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/MaximumMinimumComputationType.h>
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
      namespace MaximumMinimumComputationTypeMapper
      {

        static const int MAXIMUM_HASH = HashingUtils::HashString("MAXIMUM");
        static const int MINIMUM_HASH = HashingUtils::HashString("MINIMUM");


        MaximumMinimumComputationType GetMaximumMinimumComputationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MAXIMUM_HASH)
          {
            return MaximumMinimumComputationType::MAXIMUM;
          }
          else if (hashCode == MINIMUM_HASH)
          {
            return MaximumMinimumComputationType::MINIMUM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MaximumMinimumComputationType>(hashCode);
          }

          return MaximumMinimumComputationType::NOT_SET;
        }

        Aws::String GetNameForMaximumMinimumComputationType(MaximumMinimumComputationType enumValue)
        {
          switch(enumValue)
          {
          case MaximumMinimumComputationType::MAXIMUM:
            return "MAXIMUM";
          case MaximumMinimumComputationType::MINIMUM:
            return "MINIMUM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MaximumMinimumComputationTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
