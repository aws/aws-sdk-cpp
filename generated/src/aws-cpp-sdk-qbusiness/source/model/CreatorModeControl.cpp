/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/CreatorModeControl.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace CreatorModeControlMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        CreatorModeControl GetCreatorModeControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return CreatorModeControl::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return CreatorModeControl::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CreatorModeControl>(hashCode);
          }

          return CreatorModeControl::NOT_SET;
        }

        Aws::String GetNameForCreatorModeControl(CreatorModeControl enumValue)
        {
          switch(enumValue)
          {
          case CreatorModeControl::NOT_SET:
            return {};
          case CreatorModeControl::ENABLED:
            return "ENABLED";
          case CreatorModeControl::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CreatorModeControlMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
