/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ReferenceLinePatternType.h>
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
      namespace ReferenceLinePatternTypeMapper
      {

        static constexpr uint32_t SOLID_HASH = ConstExprHashingUtils::HashString("SOLID");
        static constexpr uint32_t DASHED_HASH = ConstExprHashingUtils::HashString("DASHED");
        static constexpr uint32_t DOTTED_HASH = ConstExprHashingUtils::HashString("DOTTED");


        ReferenceLinePatternType GetReferenceLinePatternTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SOLID_HASH)
          {
            return ReferenceLinePatternType::SOLID;
          }
          else if (hashCode == DASHED_HASH)
          {
            return ReferenceLinePatternType::DASHED;
          }
          else if (hashCode == DOTTED_HASH)
          {
            return ReferenceLinePatternType::DOTTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReferenceLinePatternType>(hashCode);
          }

          return ReferenceLinePatternType::NOT_SET;
        }

        Aws::String GetNameForReferenceLinePatternType(ReferenceLinePatternType enumValue)
        {
          switch(enumValue)
          {
          case ReferenceLinePatternType::NOT_SET:
            return {};
          case ReferenceLinePatternType::SOLID:
            return "SOLID";
          case ReferenceLinePatternType::DASHED:
            return "DASHED";
          case ReferenceLinePatternType::DOTTED:
            return "DOTTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReferenceLinePatternTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
