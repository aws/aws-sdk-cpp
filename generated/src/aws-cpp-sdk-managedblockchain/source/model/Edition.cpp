/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/Edition.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ManagedBlockchain
  {
    namespace Model
    {
      namespace EditionMapper
      {

        static constexpr uint32_t STARTER_HASH = ConstExprHashingUtils::HashString("STARTER");
        static constexpr uint32_t STANDARD_HASH = ConstExprHashingUtils::HashString("STANDARD");


        Edition GetEditionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STARTER_HASH)
          {
            return Edition::STARTER;
          }
          else if (hashCode == STANDARD_HASH)
          {
            return Edition::STANDARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Edition>(hashCode);
          }

          return Edition::NOT_SET;
        }

        Aws::String GetNameForEdition(Edition enumValue)
        {
          switch(enumValue)
          {
          case Edition::NOT_SET:
            return {};
          case Edition::STARTER:
            return "STARTER";
          case Edition::STANDARD:
            return "STANDARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EditionMapper
    } // namespace Model
  } // namespace ManagedBlockchain
} // namespace Aws
