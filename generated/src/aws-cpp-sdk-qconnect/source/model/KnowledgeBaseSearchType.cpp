/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/KnowledgeBaseSearchType.h>
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
      namespace KnowledgeBaseSearchTypeMapper
      {

        static const int HYBRID_HASH = HashingUtils::HashString("HYBRID");
        static const int SEMANTIC_HASH = HashingUtils::HashString("SEMANTIC");


        KnowledgeBaseSearchType GetKnowledgeBaseSearchTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HYBRID_HASH)
          {
            return KnowledgeBaseSearchType::HYBRID;
          }
          else if (hashCode == SEMANTIC_HASH)
          {
            return KnowledgeBaseSearchType::SEMANTIC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KnowledgeBaseSearchType>(hashCode);
          }

          return KnowledgeBaseSearchType::NOT_SET;
        }

        Aws::String GetNameForKnowledgeBaseSearchType(KnowledgeBaseSearchType enumValue)
        {
          switch(enumValue)
          {
          case KnowledgeBaseSearchType::NOT_SET:
            return {};
          case KnowledgeBaseSearchType::HYBRID:
            return "HYBRID";
          case KnowledgeBaseSearchType::SEMANTIC:
            return "SEMANTIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KnowledgeBaseSearchTypeMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws
