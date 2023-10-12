/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ContactListImportAction.h>
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
      namespace ContactListImportActionMapper
      {

        static constexpr uint32_t DELETE__HASH = ConstExprHashingUtils::HashString("DELETE");
        static constexpr uint32_t PUT_HASH = ConstExprHashingUtils::HashString("PUT");


        ContactListImportAction GetContactListImportActionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DELETE__HASH)
          {
            return ContactListImportAction::DELETE_;
          }
          else if (hashCode == PUT_HASH)
          {
            return ContactListImportAction::PUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContactListImportAction>(hashCode);
          }

          return ContactListImportAction::NOT_SET;
        }

        Aws::String GetNameForContactListImportAction(ContactListImportAction enumValue)
        {
          switch(enumValue)
          {
          case ContactListImportAction::NOT_SET:
            return {};
          case ContactListImportAction::DELETE_:
            return "DELETE";
          case ContactListImportAction::PUT:
            return "PUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContactListImportActionMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
