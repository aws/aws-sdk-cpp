/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/AdditionalResponseFieldType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkDocs
  {
    namespace Model
    {
      namespace AdditionalResponseFieldTypeMapper
      {

        static const int WEBURL_HASH = HashingUtils::HashString("WEBURL");


        AdditionalResponseFieldType GetAdditionalResponseFieldTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WEBURL_HASH)
          {
            return AdditionalResponseFieldType::WEBURL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AdditionalResponseFieldType>(hashCode);
          }

          return AdditionalResponseFieldType::NOT_SET;
        }

        Aws::String GetNameForAdditionalResponseFieldType(AdditionalResponseFieldType enumValue)
        {
          switch(enumValue)
          {
          case AdditionalResponseFieldType::NOT_SET:
            return {};
          case AdditionalResponseFieldType::WEBURL:
            return "WEBURL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AdditionalResponseFieldTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
