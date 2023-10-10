/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/Direction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace DirectionMapper
      {

        static const int Both_HASH = HashingUtils::HashString("Both");
        static const int Ascendants_HASH = HashingUtils::HashString("Ascendants");
        static const int Descendants_HASH = HashingUtils::HashString("Descendants");


        Direction GetDirectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Both_HASH)
          {
            return Direction::Both;
          }
          else if (hashCode == Ascendants_HASH)
          {
            return Direction::Ascendants;
          }
          else if (hashCode == Descendants_HASH)
          {
            return Direction::Descendants;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Direction>(hashCode);
          }

          return Direction::NOT_SET;
        }

        Aws::String GetNameForDirection(Direction enumValue)
        {
          switch(enumValue)
          {
          case Direction::NOT_SET:
            return {};
          case Direction::Both:
            return "Both";
          case Direction::Ascendants:
            return "Ascendants";
          case Direction::Descendants:
            return "Descendants";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DirectionMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
