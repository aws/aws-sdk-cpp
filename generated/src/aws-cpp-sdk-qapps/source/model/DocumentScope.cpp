/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/DocumentScope.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QApps
  {
    namespace Model
    {
      namespace DocumentScopeMapper
      {

        static const int APPLICATION_HASH = HashingUtils::HashString("APPLICATION");
        static const int SESSION_HASH = HashingUtils::HashString("SESSION");


        DocumentScope GetDocumentScopeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPLICATION_HASH)
          {
            return DocumentScope::APPLICATION;
          }
          else if (hashCode == SESSION_HASH)
          {
            return DocumentScope::SESSION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentScope>(hashCode);
          }

          return DocumentScope::NOT_SET;
        }

        Aws::String GetNameForDocumentScope(DocumentScope enumValue)
        {
          switch(enumValue)
          {
          case DocumentScope::NOT_SET:
            return {};
          case DocumentScope::APPLICATION:
            return "APPLICATION";
          case DocumentScope::SESSION:
            return "SESSION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentScopeMapper
    } // namespace Model
  } // namespace QApps
} // namespace Aws
