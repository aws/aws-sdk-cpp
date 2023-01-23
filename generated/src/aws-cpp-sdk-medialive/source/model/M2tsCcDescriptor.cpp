/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/M2tsCcDescriptor.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace M2tsCcDescriptorMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        M2tsCcDescriptor GetM2tsCcDescriptorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return M2tsCcDescriptor::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return M2tsCcDescriptor::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2tsCcDescriptor>(hashCode);
          }

          return M2tsCcDescriptor::NOT_SET;
        }

        Aws::String GetNameForM2tsCcDescriptor(M2tsCcDescriptor enumValue)
        {
          switch(enumValue)
          {
          case M2tsCcDescriptor::DISABLED:
            return "DISABLED";
          case M2tsCcDescriptor::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M2tsCcDescriptorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
