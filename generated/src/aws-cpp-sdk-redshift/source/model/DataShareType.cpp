/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DataShareType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace DataShareTypeMapper
      {

        static const int INTERNAL_HASH = HashingUtils::HashString("INTERNAL");


        DataShareType GetDataShareTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERNAL_HASH)
          {
            return DataShareType::INTERNAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataShareType>(hashCode);
          }

          return DataShareType::NOT_SET;
        }

        Aws::String GetNameForDataShareType(DataShareType enumValue)
        {
          switch(enumValue)
          {
          case DataShareType::NOT_SET:
            return {};
          case DataShareType::INTERNAL:
            return "INTERNAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataShareTypeMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
