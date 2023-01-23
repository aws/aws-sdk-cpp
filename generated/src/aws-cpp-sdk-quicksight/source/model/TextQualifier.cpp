/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TextQualifier.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace TextQualifierMapper
      {

        static const int DOUBLE_QUOTE_HASH = HashingUtils::HashString("DOUBLE_QUOTE");
        static const int SINGLE_QUOTE_HASH = HashingUtils::HashString("SINGLE_QUOTE");


        TextQualifier GetTextQualifierForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DOUBLE_QUOTE_HASH)
          {
            return TextQualifier::DOUBLE_QUOTE;
          }
          else if (hashCode == SINGLE_QUOTE_HASH)
          {
            return TextQualifier::SINGLE_QUOTE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TextQualifier>(hashCode);
          }

          return TextQualifier::NOT_SET;
        }

        Aws::String GetNameForTextQualifier(TextQualifier enumValue)
        {
          switch(enumValue)
          {
          case TextQualifier::DOUBLE_QUOTE:
            return "DOUBLE_QUOTE";
          case TextQualifier::SINGLE_QUOTE:
            return "SINGLE_QUOTE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TextQualifierMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
