/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/AssetState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Outposts
  {
    namespace Model
    {
      namespace AssetStateMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int RETIRING_HASH = HashingUtils::HashString("RETIRING");


        AssetState GetAssetStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return AssetState::ACTIVE;
          }
          else if (hashCode == RETIRING_HASH)
          {
            return AssetState::RETIRING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssetState>(hashCode);
          }

          return AssetState::NOT_SET;
        }

        Aws::String GetNameForAssetState(AssetState enumValue)
        {
          switch(enumValue)
          {
          case AssetState::ACTIVE:
            return "ACTIVE";
          case AssetState::RETIRING:
            return "RETIRING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssetStateMapper
    } // namespace Model
  } // namespace Outposts
} // namespace Aws
