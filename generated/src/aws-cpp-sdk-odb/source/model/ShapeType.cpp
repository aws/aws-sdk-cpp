/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/ShapeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace odb
  {
    namespace Model
    {
      namespace ShapeTypeMapper
      {

        static const int AMD_HASH = HashingUtils::HashString("AMD");
        static const int INTEL_HASH = HashingUtils::HashString("INTEL");
        static const int INTEL_FLEX_X9_HASH = HashingUtils::HashString("INTEL_FLEX_X9");
        static const int AMPERE_FLEX_A1_HASH = HashingUtils::HashString("AMPERE_FLEX_A1");


        ShapeType GetShapeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AMD_HASH)
          {
            return ShapeType::AMD;
          }
          else if (hashCode == INTEL_HASH)
          {
            return ShapeType::INTEL;
          }
          else if (hashCode == INTEL_FLEX_X9_HASH)
          {
            return ShapeType::INTEL_FLEX_X9;
          }
          else if (hashCode == AMPERE_FLEX_A1_HASH)
          {
            return ShapeType::AMPERE_FLEX_A1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ShapeType>(hashCode);
          }

          return ShapeType::NOT_SET;
        }

        Aws::String GetNameForShapeType(ShapeType enumValue)
        {
          switch(enumValue)
          {
          case ShapeType::NOT_SET:
            return {};
          case ShapeType::AMD:
            return "AMD";
          case ShapeType::INTEL:
            return "INTEL";
          case ShapeType::INTEL_FLEX_X9:
            return "INTEL_FLEX_X9";
          case ShapeType::AMPERE_FLEX_A1:
            return "AMPERE_FLEX_A1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ShapeTypeMapper
    } // namespace Model
  } // namespace odb
} // namespace Aws
