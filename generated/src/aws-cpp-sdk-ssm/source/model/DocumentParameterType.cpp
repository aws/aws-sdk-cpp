/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DocumentParameterType.h>
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
      namespace DocumentParameterTypeMapper
      {

        static const int String_HASH = HashingUtils::HashString("String");
        static const int StringList_HASH = HashingUtils::HashString("StringList");


        DocumentParameterType GetDocumentParameterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == String_HASH)
          {
            return DocumentParameterType::String;
          }
          else if (hashCode == StringList_HASH)
          {
            return DocumentParameterType::StringList;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentParameterType>(hashCode);
          }

          return DocumentParameterType::NOT_SET;
        }

        Aws::String GetNameForDocumentParameterType(DocumentParameterType enumValue)
        {
          switch(enumValue)
          {
          case DocumentParameterType::String:
            return "String";
          case DocumentParameterType::StringList:
            return "StringList";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentParameterTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
