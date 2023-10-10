/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/AcceptType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSMContacts
  {
    namespace Model
    {
      namespace AcceptTypeMapper
      {

        static const int DELIVERED_HASH = HashingUtils::HashString("DELIVERED");
        static const int READ_HASH = HashingUtils::HashString("READ");


        AcceptType GetAcceptTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DELIVERED_HASH)
          {
            return AcceptType::DELIVERED;
          }
          else if (hashCode == READ_HASH)
          {
            return AcceptType::READ;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AcceptType>(hashCode);
          }

          return AcceptType::NOT_SET;
        }

        Aws::String GetNameForAcceptType(AcceptType enumValue)
        {
          switch(enumValue)
          {
          case AcceptType::NOT_SET:
            return {};
          case AcceptType::DELIVERED:
            return "DELIVERED";
          case AcceptType::READ:
            return "READ";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AcceptTypeMapper
    } // namespace Model
  } // namespace SSMContacts
} // namespace Aws
