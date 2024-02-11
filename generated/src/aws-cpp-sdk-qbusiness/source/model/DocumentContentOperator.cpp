/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/DocumentContentOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace DocumentContentOperatorMapper
      {

        static const int DELETE__HASH = HashingUtils::HashString("DELETE");


        DocumentContentOperator GetDocumentContentOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DELETE__HASH)
          {
            return DocumentContentOperator::DELETE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentContentOperator>(hashCode);
          }

          return DocumentContentOperator::NOT_SET;
        }

        Aws::String GetNameForDocumentContentOperator(DocumentContentOperator enumValue)
        {
          switch(enumValue)
          {
          case DocumentContentOperator::NOT_SET:
            return {};
          case DocumentContentOperator::DELETE_:
            return "DELETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentContentOperatorMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
