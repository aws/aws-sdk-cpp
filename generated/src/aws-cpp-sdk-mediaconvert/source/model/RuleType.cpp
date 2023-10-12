/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/RuleType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace RuleTypeMapper
      {

        static constexpr uint32_t MIN_TOP_RENDITION_SIZE_HASH = ConstExprHashingUtils::HashString("MIN_TOP_RENDITION_SIZE");
        static constexpr uint32_t MIN_BOTTOM_RENDITION_SIZE_HASH = ConstExprHashingUtils::HashString("MIN_BOTTOM_RENDITION_SIZE");
        static constexpr uint32_t FORCE_INCLUDE_RENDITIONS_HASH = ConstExprHashingUtils::HashString("FORCE_INCLUDE_RENDITIONS");
        static constexpr uint32_t ALLOWED_RENDITIONS_HASH = ConstExprHashingUtils::HashString("ALLOWED_RENDITIONS");


        RuleType GetRuleTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MIN_TOP_RENDITION_SIZE_HASH)
          {
            return RuleType::MIN_TOP_RENDITION_SIZE;
          }
          else if (hashCode == MIN_BOTTOM_RENDITION_SIZE_HASH)
          {
            return RuleType::MIN_BOTTOM_RENDITION_SIZE;
          }
          else if (hashCode == FORCE_INCLUDE_RENDITIONS_HASH)
          {
            return RuleType::FORCE_INCLUDE_RENDITIONS;
          }
          else if (hashCode == ALLOWED_RENDITIONS_HASH)
          {
            return RuleType::ALLOWED_RENDITIONS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleType>(hashCode);
          }

          return RuleType::NOT_SET;
        }

        Aws::String GetNameForRuleType(RuleType enumValue)
        {
          switch(enumValue)
          {
          case RuleType::NOT_SET:
            return {};
          case RuleType::MIN_TOP_RENDITION_SIZE:
            return "MIN_TOP_RENDITION_SIZE";
          case RuleType::MIN_BOTTOM_RENDITION_SIZE:
            return "MIN_BOTTOM_RENDITION_SIZE";
          case RuleType::FORCE_INCLUDE_RENDITIONS:
            return "FORCE_INCLUDE_RENDITIONS";
          case RuleType::ALLOWED_RENDITIONS:
            return "ALLOWED_RENDITIONS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
