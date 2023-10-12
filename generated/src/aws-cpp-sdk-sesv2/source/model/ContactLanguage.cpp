/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ContactLanguage.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace ContactLanguageMapper
      {

        static constexpr uint32_t EN_HASH = ConstExprHashingUtils::HashString("EN");
        static constexpr uint32_t JA_HASH = ConstExprHashingUtils::HashString("JA");


        ContactLanguage GetContactLanguageForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EN_HASH)
          {
            return ContactLanguage::EN;
          }
          else if (hashCode == JA_HASH)
          {
            return ContactLanguage::JA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContactLanguage>(hashCode);
          }

          return ContactLanguage::NOT_SET;
        }

        Aws::String GetNameForContactLanguage(ContactLanguage enumValue)
        {
          switch(enumValue)
          {
          case ContactLanguage::NOT_SET:
            return {};
          case ContactLanguage::EN:
            return "EN";
          case ContactLanguage::JA:
            return "JA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContactLanguageMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
