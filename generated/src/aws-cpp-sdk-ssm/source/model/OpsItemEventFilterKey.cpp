/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/OpsItemEventFilterKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace OpsItemEventFilterKeyMapper
      {

        static const int OpsItemId_HASH = HashingUtils::HashString("OpsItemId");


        OpsItemEventFilterKey GetOpsItemEventFilterKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OpsItemId_HASH)
          {
            return OpsItemEventFilterKey::OpsItemId;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OpsItemEventFilterKey>(hashCode);
          }

          return OpsItemEventFilterKey::NOT_SET;
        }

        Aws::String GetNameForOpsItemEventFilterKey(OpsItemEventFilterKey enumValue)
        {
          switch(enumValue)
          {
          case OpsItemEventFilterKey::NOT_SET:
            return {};
          case OpsItemEventFilterKey::OpsItemId:
            return "OpsItemId";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OpsItemEventFilterKeyMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
