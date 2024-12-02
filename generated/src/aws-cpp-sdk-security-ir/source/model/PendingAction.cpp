/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/PendingAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityIR
  {
    namespace Model
    {
      namespace PendingActionMapper
      {

        static const int Customer_HASH = HashingUtils::HashString("Customer");
        static const int None_HASH = HashingUtils::HashString("None");


        PendingAction GetPendingActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Customer_HASH)
          {
            return PendingAction::Customer;
          }
          else if (hashCode == None_HASH)
          {
            return PendingAction::None;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PendingAction>(hashCode);
          }

          return PendingAction::NOT_SET;
        }

        Aws::String GetNameForPendingAction(PendingAction enumValue)
        {
          switch(enumValue)
          {
          case PendingAction::NOT_SET:
            return {};
          case PendingAction::Customer:
            return "Customer";
          case PendingAction::None:
            return "None";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PendingActionMapper
    } // namespace Model
  } // namespace SecurityIR
} // namespace Aws
