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

        static const int TS_HASH = HashingUtils::HashString("TS");
        static const int CMAF_HASH = HashingUtils::HashString("CMAF");
        static const int ISM_HASH = HashingUtils::HashString("ISM");


        ContainerType GetContainerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TS_HASH)
          {
            return ContainerType::TS;
          }
          else if (hashCode == CMAF_HASH)
          {
            return ContainerType::CMAF;
          }
          else if (hashCode == ISM_HASH)
          {
            return ContainerType::ISM;
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
          case ContainerType::ISM:
            return "ISM";
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
