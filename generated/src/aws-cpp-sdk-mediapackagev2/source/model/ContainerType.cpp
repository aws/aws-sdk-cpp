/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/ContainerType.h>
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
      namespace ContainerTypeMapper
      {

        static constexpr uint32_t TS_HASH = ConstExprHashingUtils::HashString("TS");
        static constexpr uint32_t CMAF_HASH = ConstExprHashingUtils::HashString("CMAF");


        ContainerType GetContainerTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TS_HASH)
          {
            return ContainerType::TS;
          }
          else if (hashCode == CMAF_HASH)
          {
            return ContainerType::CMAF;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContainerType>(hashCode);
          }

          return ContainerType::NOT_SET;
        }

        Aws::String GetNameForContainerType(ContainerType enumValue)
        {
          switch(enumValue)
          {
          case ContainerType::NOT_SET:
            return {};
          case ContainerType::TS:
            return "TS";
          case ContainerType::CMAF:
            return "CMAF";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContainerTypeMapper
    } // namespace Model
  } // namespace mediapackagev2
} // namespace Aws
