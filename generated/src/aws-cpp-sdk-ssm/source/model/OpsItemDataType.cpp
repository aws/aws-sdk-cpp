/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/OpsItemDataType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace OpsItemDataTypeMapper
      {

        static const int SearchableString_HASH = HashingUtils::HashString("SearchableString");
        static const int String_HASH = HashingUtils::HashString("String");


        OpsItemDataType GetOpsItemDataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SearchableString_HASH)
          {
            return OpsItemDataType::SearchableString;
          }
          else if (hashCode == String_HASH)
          {
            return OpsItemDataType::String;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OpsItemDataType>(hashCode);
          }

          return OpsItemDataType::NOT_SET;
        }

        Aws::String GetNameForOpsItemDataType(OpsItemDataType enumValue)
        {
          switch(enumValue)
          {
          case OpsItemDataType::SearchableString:
            return "SearchableString";
          case OpsItemDataType::String:
            return "String";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OpsItemDataTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
