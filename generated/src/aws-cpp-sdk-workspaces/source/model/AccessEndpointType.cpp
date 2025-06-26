/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/AccessEndpointType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace AccessEndpointTypeMapper
      {

        static const int STREAMING_WSP_HASH = HashingUtils::HashString("STREAMING_WSP");


        AccessEndpointType GetAccessEndpointTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STREAMING_WSP_HASH)
          {
            return AccessEndpointType::STREAMING_WSP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessEndpointType>(hashCode);
          }

          return AccessEndpointType::NOT_SET;
        }

        Aws::String GetNameForAccessEndpointType(AccessEndpointType enumValue)
        {
          switch(enumValue)
          {
          case AccessEndpointType::NOT_SET:
            return {};
          case AccessEndpointType::STREAMING_WSP:
            return "STREAMING_WSP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccessEndpointTypeMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
