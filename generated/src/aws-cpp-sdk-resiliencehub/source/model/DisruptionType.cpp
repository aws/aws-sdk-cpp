/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/DisruptionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResilienceHub
  {
    namespace Model
    {
      namespace DisruptionTypeMapper
      {

        static constexpr uint32_t Software_HASH = ConstExprHashingUtils::HashString("Software");
        static constexpr uint32_t Hardware_HASH = ConstExprHashingUtils::HashString("Hardware");
        static constexpr uint32_t AZ_HASH = ConstExprHashingUtils::HashString("AZ");
        static constexpr uint32_t Region_HASH = ConstExprHashingUtils::HashString("Region");


        DisruptionType GetDisruptionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Software_HASH)
          {
            return DisruptionType::Software;
          }
          else if (hashCode == Hardware_HASH)
          {
            return DisruptionType::Hardware;
          }
          else if (hashCode == AZ_HASH)
          {
            return DisruptionType::AZ;
          }
          else if (hashCode == Region_HASH)
          {
            return DisruptionType::Region;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DisruptionType>(hashCode);
          }

          return DisruptionType::NOT_SET;
        }

        Aws::String GetNameForDisruptionType(DisruptionType enumValue)
        {
          switch(enumValue)
          {
          case DisruptionType::NOT_SET:
            return {};
          case DisruptionType::Software:
            return "Software";
          case DisruptionType::Hardware:
            return "Hardware";
          case DisruptionType::AZ:
            return "AZ";
          case DisruptionType::Region:
            return "Region";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DisruptionTypeMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
