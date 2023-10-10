/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/UpdateType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PrivateNetworks
  {
    namespace Model
    {
      namespace UpdateTypeMapper
      {

        static const int REPLACE_HASH = HashingUtils::HashString("REPLACE");
        static const int RETURN_HASH = HashingUtils::HashString("RETURN");
        static const int COMMITMENT_HASH = HashingUtils::HashString("COMMITMENT");


        UpdateType GetUpdateTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REPLACE_HASH)
          {
            return UpdateType::REPLACE;
          }
          else if (hashCode == RETURN_HASH)
          {
            return UpdateType::RETURN;
          }
          else if (hashCode == COMMITMENT_HASH)
          {
            return UpdateType::COMMITMENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateType>(hashCode);
          }

          return UpdateType::NOT_SET;
        }

        Aws::String GetNameForUpdateType(UpdateType enumValue)
        {
          switch(enumValue)
          {
          case UpdateType::NOT_SET:
            return {};
          case UpdateType::REPLACE:
            return "REPLACE";
          case UpdateType::RETURN:
            return "RETURN";
          case UpdateType::COMMITMENT:
            return "COMMITMENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateTypeMapper
    } // namespace Model
  } // namespace PrivateNetworks
} // namespace Aws
