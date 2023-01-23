/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/IdentityStore.h>
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
      namespace IdentityStoreMapper
      {

        static const int QUICKSIGHT_HASH = HashingUtils::HashString("QUICKSIGHT");


        IdentityStore GetIdentityStoreForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUICKSIGHT_HASH)
          {
            return IdentityStore::QUICKSIGHT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IdentityStore>(hashCode);
          }

          return IdentityStore::NOT_SET;
        }

        Aws::String GetNameForIdentityStore(IdentityStore enumValue)
        {
          switch(enumValue)
          {
          case IdentityStore::QUICKSIGHT:
            return "QUICKSIGHT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IdentityStoreMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
