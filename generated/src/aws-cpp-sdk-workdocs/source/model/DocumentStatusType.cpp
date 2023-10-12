/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/DocumentStatusType.h>
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
      namespace DocumentStatusTypeMapper
      {

        static constexpr uint32_t INITIALIZED_HASH = ConstExprHashingUtils::HashString("INITIALIZED");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");


        DocumentStatusType GetDocumentStatusTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIALIZED_HASH)
          {
            return DocumentStatusType::INITIALIZED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return DocumentStatusType::ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentStatusType>(hashCode);
          }

          return DocumentStatusType::NOT_SET;
        }

        Aws::String GetNameForDocumentStatusType(DocumentStatusType enumValue)
        {
          switch(enumValue)
          {
          case DocumentStatusType::NOT_SET:
            return {};
          case DocumentStatusType::INITIALIZED:
            return "INITIALIZED";
          case DocumentStatusType::ACTIVE:
            return "ACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentStatusTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
