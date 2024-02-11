/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ConstantType.h>
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
      namespace ConstantTypeMapper
      {

        static const int SINGULAR_HASH = HashingUtils::HashString("SINGULAR");
        static const int RANGE_HASH = HashingUtils::HashString("RANGE");
        static const int COLLECTIVE_HASH = HashingUtils::HashString("COLLECTIVE");


        ConstantType GetConstantTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SINGULAR_HASH)
          {
            return ConstantType::SINGULAR;
          }
          else if (hashCode == RANGE_HASH)
          {
            return ConstantType::RANGE;
          }
          else if (hashCode == COLLECTIVE_HASH)
          {
            return ConstantType::COLLECTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConstantType>(hashCode);
          }

          return ConstantType::NOT_SET;
        }

        Aws::String GetNameForConstantType(ConstantType enumValue)
        {
          switch(enumValue)
          {
          case ConstantType::NOT_SET:
            return {};
          case ConstantType::SINGULAR:
            return "SINGULAR";
          case ConstantType::RANGE:
            return "RANGE";
          case ConstantType::COLLECTIVE:
            return "COLLECTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConstantTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
