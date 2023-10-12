/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/ProtectionGroupPattern.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Shield
  {
    namespace Model
    {
      namespace ProtectionGroupPatternMapper
      {

        static constexpr uint32_t ALL_HASH = ConstExprHashingUtils::HashString("ALL");
        static constexpr uint32_t ARBITRARY_HASH = ConstExprHashingUtils::HashString("ARBITRARY");
        static constexpr uint32_t BY_RESOURCE_TYPE_HASH = ConstExprHashingUtils::HashString("BY_RESOURCE_TYPE");


        ProtectionGroupPattern GetProtectionGroupPatternForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return ProtectionGroupPattern::ALL;
          }
          else if (hashCode == ARBITRARY_HASH)
          {
            return ProtectionGroupPattern::ARBITRARY;
          }
          else if (hashCode == BY_RESOURCE_TYPE_HASH)
          {
            return ProtectionGroupPattern::BY_RESOURCE_TYPE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProtectionGroupPattern>(hashCode);
          }

          return ProtectionGroupPattern::NOT_SET;
        }

        Aws::String GetNameForProtectionGroupPattern(ProtectionGroupPattern enumValue)
        {
          switch(enumValue)
          {
          case ProtectionGroupPattern::NOT_SET:
            return {};
          case ProtectionGroupPattern::ALL:
            return "ALL";
          case ProtectionGroupPattern::ARBITRARY:
            return "ARBITRARY";
          case ProtectionGroupPattern::BY_RESOURCE_TYPE:
            return "BY_RESOURCE_TYPE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProtectionGroupPatternMapper
    } // namespace Model
  } // namespace Shield
} // namespace Aws
