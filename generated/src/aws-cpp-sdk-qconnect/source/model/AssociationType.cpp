/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/AssociationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QConnect
  {
    namespace Model
    {
      namespace AssociationTypeMapper
      {

        static const int KNOWLEDGE_BASE_HASH = HashingUtils::HashString("KNOWLEDGE_BASE");


        AssociationType GetAssociationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KNOWLEDGE_BASE_HASH)
          {
            return AssociationType::KNOWLEDGE_BASE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssociationType>(hashCode);
          }

          return AssociationType::NOT_SET;
        }

        Aws::String GetNameForAssociationType(AssociationType enumValue)
        {
          switch(enumValue)
          {
          case AssociationType::NOT_SET:
            return {};
          case AssociationType::KNOWLEDGE_BASE:
            return "KNOWLEDGE_BASE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssociationTypeMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws
