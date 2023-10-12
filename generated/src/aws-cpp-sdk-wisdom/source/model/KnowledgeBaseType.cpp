/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/KnowledgeBaseType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectWisdomService
  {
    namespace Model
    {
      namespace KnowledgeBaseTypeMapper
      {

        static constexpr uint32_t EXTERNAL_HASH = ConstExprHashingUtils::HashString("EXTERNAL");
        static constexpr uint32_t CUSTOM_HASH = ConstExprHashingUtils::HashString("CUSTOM");


        KnowledgeBaseType GetKnowledgeBaseTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXTERNAL_HASH)
          {
            return KnowledgeBaseType::EXTERNAL;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return KnowledgeBaseType::CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KnowledgeBaseType>(hashCode);
          }

          return KnowledgeBaseType::NOT_SET;
        }

        Aws::String GetNameForKnowledgeBaseType(KnowledgeBaseType enumValue)
        {
          switch(enumValue)
          {
          case KnowledgeBaseType::NOT_SET:
            return {};
          case KnowledgeBaseType::EXTERNAL:
            return "EXTERNAL";
          case KnowledgeBaseType::CUSTOM:
            return "CUSTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KnowledgeBaseTypeMapper
    } // namespace Model
  } // namespace ConnectWisdomService
} // namespace Aws
