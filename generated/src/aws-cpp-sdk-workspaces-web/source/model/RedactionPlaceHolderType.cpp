/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/RedactionPlaceHolderType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpacesWeb
  {
    namespace Model
    {
      namespace RedactionPlaceHolderTypeMapper
      {

        static const int CustomText_HASH = HashingUtils::HashString("CustomText");


        RedactionPlaceHolderType GetRedactionPlaceHolderTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CustomText_HASH)
          {
            return RedactionPlaceHolderType::CustomText;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RedactionPlaceHolderType>(hashCode);
          }

          return RedactionPlaceHolderType::NOT_SET;
        }

        Aws::String GetNameForRedactionPlaceHolderType(RedactionPlaceHolderType enumValue)
        {
          switch(enumValue)
          {
          case RedactionPlaceHolderType::NOT_SET:
            return {};
          case RedactionPlaceHolderType::CustomText:
            return "CustomText";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RedactionPlaceHolderTypeMapper
    } // namespace Model
  } // namespace WorkSpacesWeb
} // namespace Aws
