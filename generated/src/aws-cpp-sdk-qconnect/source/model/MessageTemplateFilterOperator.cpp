/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/MessageTemplateFilterOperator.h>
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
      namespace MessageTemplateFilterOperatorMapper
      {

        static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
        static const int PREFIX_HASH = HashingUtils::HashString("PREFIX");


        MessageTemplateFilterOperator GetMessageTemplateFilterOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return MessageTemplateFilterOperator::EQUALS;
          }
          else if (hashCode == PREFIX_HASH)
          {
            return MessageTemplateFilterOperator::PREFIX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MessageTemplateFilterOperator>(hashCode);
          }

          return MessageTemplateFilterOperator::NOT_SET;
        }

        Aws::String GetNameForMessageTemplateFilterOperator(MessageTemplateFilterOperator enumValue)
        {
          switch(enumValue)
          {
          case MessageTemplateFilterOperator::NOT_SET:
            return {};
          case MessageTemplateFilterOperator::EQUALS:
            return "EQUALS";
          case MessageTemplateFilterOperator::PREFIX:
            return "PREFIX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MessageTemplateFilterOperatorMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws
