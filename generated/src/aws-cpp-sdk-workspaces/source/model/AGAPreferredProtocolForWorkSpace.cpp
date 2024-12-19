/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/AGAPreferredProtocolForWorkSpace.h>
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
      namespace AGAPreferredProtocolForWorkSpaceMapper
      {

        static const int TCP_HASH = HashingUtils::HashString("TCP");
        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int INHERITED_HASH = HashingUtils::HashString("INHERITED");


        AGAPreferredProtocolForWorkSpace GetAGAPreferredProtocolForWorkSpaceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TCP_HASH)
          {
            return AGAPreferredProtocolForWorkSpace::TCP;
          }
          else if (hashCode == NONE_HASH)
          {
            return AGAPreferredProtocolForWorkSpace::NONE;
          }
          else if (hashCode == INHERITED_HASH)
          {
            return AGAPreferredProtocolForWorkSpace::INHERITED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AGAPreferredProtocolForWorkSpace>(hashCode);
          }

          return AGAPreferredProtocolForWorkSpace::NOT_SET;
        }

        Aws::String GetNameForAGAPreferredProtocolForWorkSpace(AGAPreferredProtocolForWorkSpace enumValue)
        {
          switch(enumValue)
          {
          case AGAPreferredProtocolForWorkSpace::NOT_SET:
            return {};
          case AGAPreferredProtocolForWorkSpace::TCP:
            return "TCP";
          case AGAPreferredProtocolForWorkSpace::NONE:
            return "NONE";
          case AGAPreferredProtocolForWorkSpace::INHERITED:
            return "INHERITED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AGAPreferredProtocolForWorkSpaceMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
