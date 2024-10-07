/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/AIPromptTemplateType.h>
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
      namespace AIPromptTemplateTypeMapper
      {

        static const int TEXT_HASH = HashingUtils::HashString("TEXT");


        AIPromptTemplateType GetAIPromptTemplateTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TEXT_HASH)
          {
            return AIPromptTemplateType::TEXT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AIPromptTemplateType>(hashCode);
          }

          return AIPromptTemplateType::NOT_SET;
        }

        Aws::String GetNameForAIPromptTemplateType(AIPromptTemplateType enumValue)
        {
          switch(enumValue)
          {
          case AIPromptTemplateType::NOT_SET:
            return {};
          case AIPromptTemplateType::TEXT:
            return "TEXT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AIPromptTemplateTypeMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws
