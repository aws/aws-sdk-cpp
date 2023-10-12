/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/MailType.h>
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
      namespace MailTypeMapper
      {

        static constexpr uint32_t MARKETING_HASH = ConstExprHashingUtils::HashString("MARKETING");
        static constexpr uint32_t TRANSACTIONAL_HASH = ConstExprHashingUtils::HashString("TRANSACTIONAL");


        MailType GetMailTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MARKETING_HASH)
          {
            return MailType::MARKETING;
          }
          else if (hashCode == TRANSACTIONAL_HASH)
          {
            return MailType::TRANSACTIONAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MailType>(hashCode);
          }

          return MailType::NOT_SET;
        }

        Aws::String GetNameForMailType(MailType enumValue)
        {
          switch(enumValue)
          {
          case MailType::NOT_SET:
            return {};
          case MailType::MARKETING:
            return "MARKETING";
          case MailType::TRANSACTIONAL:
            return "TRANSACTIONAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MailTypeMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
