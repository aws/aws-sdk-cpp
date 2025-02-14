/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/DataProtectionAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFV2
  {
    namespace Model
    {
      namespace DataProtectionActionMapper
      {

        static const int SUBSTITUTION_HASH = HashingUtils::HashString("SUBSTITUTION");
        static const int HASH_HASH = HashingUtils::HashString("HASH");


        DataProtectionAction GetDataProtectionActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUBSTITUTION_HASH)
          {
            return DataProtectionAction::SUBSTITUTION;
          }
          else if (hashCode == HASH_HASH)
          {
            return DataProtectionAction::HASH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataProtectionAction>(hashCode);
          }

          return DataProtectionAction::NOT_SET;
        }

        Aws::String GetNameForDataProtectionAction(DataProtectionAction enumValue)
        {
          switch(enumValue)
          {
          case DataProtectionAction::NOT_SET:
            return {};
          case DataProtectionAction::SUBSTITUTION:
            return "SUBSTITUTION";
          case DataProtectionAction::HASH:
            return "HASH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataProtectionActionMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws
