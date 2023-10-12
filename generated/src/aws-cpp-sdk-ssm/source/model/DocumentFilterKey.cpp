/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DocumentFilterKey.h>
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
      namespace DocumentFilterKeyMapper
      {

        static constexpr uint32_t Name_HASH = ConstExprHashingUtils::HashString("Name");
        static constexpr uint32_t Owner_HASH = ConstExprHashingUtils::HashString("Owner");
        static constexpr uint32_t PlatformTypes_HASH = ConstExprHashingUtils::HashString("PlatformTypes");
        static constexpr uint32_t DocumentType_HASH = ConstExprHashingUtils::HashString("DocumentType");


        DocumentFilterKey GetDocumentFilterKeyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Name_HASH)
          {
            return DocumentFilterKey::Name;
          }
          else if (hashCode == Owner_HASH)
          {
            return DocumentFilterKey::Owner;
          }
          else if (hashCode == PlatformTypes_HASH)
          {
            return DocumentFilterKey::PlatformTypes;
          }
          else if (hashCode == DocumentType_HASH)
          {
            return DocumentFilterKey::DocumentType;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentFilterKey>(hashCode);
          }

          return DocumentFilterKey::NOT_SET;
        }

        Aws::String GetNameForDocumentFilterKey(DocumentFilterKey enumValue)
        {
          switch(enumValue)
          {
          case DocumentFilterKey::NOT_SET:
            return {};
          case DocumentFilterKey::Name:
            return "Name";
          case DocumentFilterKey::Owner:
            return "Owner";
          case DocumentFilterKey::PlatformTypes:
            return "PlatformTypes";
          case DocumentFilterKey::DocumentType:
            return "DocumentType";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentFilterKeyMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
