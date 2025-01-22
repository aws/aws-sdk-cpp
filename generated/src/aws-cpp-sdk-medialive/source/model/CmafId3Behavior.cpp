/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/CmafId3Behavior.h>
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
      namespace CmafId3BehaviorMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        CmafId3Behavior GetCmafId3BehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return CmafId3Behavior::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return CmafId3Behavior::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmafId3Behavior>(hashCode);
          }

          return CmafId3Behavior::NOT_SET;
        }

        Aws::String GetNameForCmafId3Behavior(CmafId3Behavior enumValue)
        {
          switch(enumValue)
          {
          case CmafId3Behavior::NOT_SET:
            return {};
          case CmafId3Behavior::DISABLED:
            return "DISABLED";
          case CmafId3Behavior::ENABLED:
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

      } // namespace CmafId3BehaviorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
