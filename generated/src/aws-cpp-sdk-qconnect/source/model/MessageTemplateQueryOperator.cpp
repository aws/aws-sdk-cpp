/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/MessageTemplateQueryOperator.h>
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
      namespace MessageTemplateQueryOperatorMapper
      {

        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");
        static const int CONTAINS_AND_PREFIX_HASH = HashingUtils::HashString("CONTAINS_AND_PREFIX");


        MessageTemplateQueryOperator GetMessageTemplateQueryOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONTAINS_HASH)
          {
            return MessageTemplateQueryOperator::CONTAINS;
          }
          else if (hashCode == CONTAINS_AND_PREFIX_HASH)
          {
            return MessageTemplateQueryOperator::CONTAINS_AND_PREFIX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MessageTemplateQueryOperator>(hashCode);
          }

          return MessageTemplateQueryOperator::NOT_SET;
        }

        Aws::String GetNameForMessageTemplateQueryOperator(MessageTemplateQueryOperator enumValue)
        {
          switch(enumValue)
          {
          case MessageTemplateQueryOperator::NOT_SET:
            return {};
          case MessageTemplateQueryOperator::CONTAINS:
            return "CONTAINS";
          case MessageTemplateQueryOperator::CONTAINS_AND_PREFIX:
            return "CONTAINS_AND_PREFIX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MessageTemplateQueryOperatorMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws
