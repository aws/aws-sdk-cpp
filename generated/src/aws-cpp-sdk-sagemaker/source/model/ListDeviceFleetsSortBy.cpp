/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListDeviceFleetsSortBy.h>
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
      namespace ListDeviceFleetsSortByMapper
      {

        static constexpr uint32_t NAME_HASH = ConstExprHashingUtils::HashString("NAME");
        static constexpr uint32_t CREATION_TIME_HASH = ConstExprHashingUtils::HashString("CREATION_TIME");
        static constexpr uint32_t LAST_MODIFIED_TIME_HASH = ConstExprHashingUtils::HashString("LAST_MODIFIED_TIME");


        ListDeviceFleetsSortBy GetListDeviceFleetsSortByForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAME_HASH)
          {
            return ListDeviceFleetsSortBy::NAME;
          }
          else if (hashCode == CREATION_TIME_HASH)
          {
            return ListDeviceFleetsSortBy::CREATION_TIME;
          }
          else if (hashCode == LAST_MODIFIED_TIME_HASH)
          {
            return ListDeviceFleetsSortBy::LAST_MODIFIED_TIME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListDeviceFleetsSortBy>(hashCode);
          }

          return ListDeviceFleetsSortBy::NOT_SET;
        }

        Aws::String GetNameForListDeviceFleetsSortBy(ListDeviceFleetsSortBy enumValue)
        {
          switch(enumValue)
          {
          case ListDeviceFleetsSortBy::NOT_SET:
            return {};
          case ListDeviceFleetsSortBy::NAME:
            return "NAME";
          case ListDeviceFleetsSortBy::CREATION_TIME:
            return "CREATION_TIME";
          case ListDeviceFleetsSortBy::LAST_MODIFIED_TIME:
            return "LAST_MODIFIED_TIME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListDeviceFleetsSortByMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
