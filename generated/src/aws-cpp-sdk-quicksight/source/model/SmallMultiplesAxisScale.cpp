/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SmallMultiplesAxisScale.h>
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
      namespace SmallMultiplesAxisScaleMapper
      {

        static constexpr uint32_t SHARED_HASH = ConstExprHashingUtils::HashString("SHARED");
        static constexpr uint32_t INDEPENDENT_HASH = ConstExprHashingUtils::HashString("INDEPENDENT");


        SmallMultiplesAxisScale GetSmallMultiplesAxisScaleForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SHARED_HASH)
          {
            return SmallMultiplesAxisScale::SHARED;
          }
          else if (hashCode == INDEPENDENT_HASH)
          {
            return SmallMultiplesAxisScale::INDEPENDENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SmallMultiplesAxisScale>(hashCode);
          }

          return SmallMultiplesAxisScale::NOT_SET;
        }

        Aws::String GetNameForSmallMultiplesAxisScale(SmallMultiplesAxisScale enumValue)
        {
          switch(enumValue)
          {
          case SmallMultiplesAxisScale::NOT_SET:
            return {};
          case SmallMultiplesAxisScale::SHARED:
            return "SHARED";
          case SmallMultiplesAxisScale::INDEPENDENT:
            return "INDEPENDENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SmallMultiplesAxisScaleMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
