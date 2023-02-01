/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/TextType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Textract
  {
    namespace Model
    {
      namespace TextTypeMapper
      {

        static const int HANDWRITING_HASH = HashingUtils::HashString("HANDWRITING");
        static const int PRINTED_HASH = HashingUtils::HashString("PRINTED");


        TextType GetTextTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HANDWRITING_HASH)
          {
            return TextType::HANDWRITING;
          }
          else if (hashCode == PRINTED_HASH)
          {
            return TextType::PRINTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TextType>(hashCode);
          }

          return TextType::NOT_SET;
        }

        Aws::String GetNameForTextType(TextType enumValue)
        {
          switch(enumValue)
          {
          case TextType::HANDWRITING:
            return "HANDWRITING";
          case TextType::PRINTED:
            return "PRINTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TextTypeMapper
    } // namespace Model
  } // namespace Textract
} // namespace Aws
