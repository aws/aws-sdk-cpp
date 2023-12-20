/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain-query/model/ConfirmationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ManagedBlockchainQuery
  {
    namespace Model
    {
      namespace ConfirmationStatusMapper
      {

        static const int FINAL_HASH = HashingUtils::HashString("FINAL");


        ConfirmationStatus GetConfirmationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FINAL_HASH)
          {
            return ConfirmationStatus::FINAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfirmationStatus>(hashCode);
          }

          return ConfirmationStatus::NOT_SET;
        }

        Aws::String GetNameForConfirmationStatus(ConfirmationStatus enumValue)
        {
          switch(enumValue)
          {
          case ConfirmationStatus::NOT_SET:
            return {};
          case ConfirmationStatus::FINAL:
            return "FINAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfirmationStatusMapper
    } // namespace Model
  } // namespace ManagedBlockchainQuery
} // namespace Aws
