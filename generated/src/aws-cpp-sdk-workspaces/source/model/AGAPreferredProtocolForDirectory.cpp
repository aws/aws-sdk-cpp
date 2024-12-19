/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/AGAPreferredProtocolForDirectory.h>
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
      namespace AGAPreferredProtocolForDirectoryMapper
      {

        static const int TCP_HASH = HashingUtils::HashString("TCP");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        AGAPreferredProtocolForDirectory GetAGAPreferredProtocolForDirectoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TCP_HASH)
          {
            return AGAPreferredProtocolForDirectory::TCP;
          }
          else if (hashCode == NONE_HASH)
          {
            return AGAPreferredProtocolForDirectory::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AGAPreferredProtocolForDirectory>(hashCode);
          }

          return AGAPreferredProtocolForDirectory::NOT_SET;
        }

        Aws::String GetNameForAGAPreferredProtocolForDirectory(AGAPreferredProtocolForDirectory enumValue)
        {
          switch(enumValue)
          {
          case AGAPreferredProtocolForDirectory::NOT_SET:
            return {};
          case AGAPreferredProtocolForDirectory::TCP:
            return "TCP";
          case AGAPreferredProtocolForDirectory::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AGAPreferredProtocolForDirectoryMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
