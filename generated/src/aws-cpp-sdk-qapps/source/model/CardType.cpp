/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qapps/model/CardType.h>
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
      namespace CardTypeMapper
      {

        static const int text_input_HASH = HashingUtils::HashString("text-input");
        static const int q_query_HASH = HashingUtils::HashString("q-query");
        static const int file_upload_HASH = HashingUtils::HashString("file-upload");
        static const int q_plugin_HASH = HashingUtils::HashString("q-plugin");
        static const int form_input_HASH = HashingUtils::HashString("form-input");


        CardType GetCardTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == text_input_HASH)
          {
            return CardType::text_input;
          }
          else if (hashCode == q_query_HASH)
          {
            return CardType::q_query;
          }
          else if (hashCode == file_upload_HASH)
          {
            return CardType::file_upload;
          }
          else if (hashCode == q_plugin_HASH)
          {
            return CardType::q_plugin;
          }
          else if (hashCode == form_input_HASH)
          {
            return CardType::form_input;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CardType>(hashCode);
          }

          return CardType::NOT_SET;
        }

        Aws::String GetNameForCardType(CardType enumValue)
        {
          switch(enumValue)
          {
          case CardType::NOT_SET:
            return {};
          case CardType::text_input:
            return "text-input";
          case CardType::q_query:
            return "q-query";
          case CardType::file_upload:
            return "file-upload";
          case CardType::q_plugin:
            return "q-plugin";
          case CardType::form_input:
            return "form-input";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CardTypeMapper
    } // namespace Model
  } // namespace QApps
} // namespace Aws
