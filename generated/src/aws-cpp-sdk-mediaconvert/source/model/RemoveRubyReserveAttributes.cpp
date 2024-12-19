/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/RemoveRubyReserveAttributes.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace RemoveRubyReserveAttributesMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        RemoveRubyReserveAttributes GetRemoveRubyReserveAttributesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return RemoveRubyReserveAttributes::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return RemoveRubyReserveAttributes::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RemoveRubyReserveAttributes>(hashCode);
          }

          return RemoveRubyReserveAttributes::NOT_SET;
        }

        Aws::String GetNameForRemoveRubyReserveAttributes(RemoveRubyReserveAttributes enumValue)
        {
          switch(enumValue)
          {
          case RemoveRubyReserveAttributes::NOT_SET:
            return {};
          case RemoveRubyReserveAttributes::DISABLED:
            return "DISABLED";
          case RemoveRubyReserveAttributes::ENABLED:
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

      } // namespace RemoveRubyReserveAttributesMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
