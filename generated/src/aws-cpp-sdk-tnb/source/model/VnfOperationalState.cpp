/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/tnb/model/VnfOperationalState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace tnb
  {
    namespace Model
    {
      namespace VnfOperationalStateMapper
      {

        static const int STARTED_HASH = HashingUtils::HashString("STARTED");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        VnfOperationalState GetVnfOperationalStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STARTED_HASH)
          {
            return VnfOperationalState::STARTED;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return VnfOperationalState::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VnfOperationalState>(hashCode);
          }

          return VnfOperationalState::NOT_SET;
        }

        Aws::String GetNameForVnfOperationalState(VnfOperationalState enumValue)
        {
          switch(enumValue)
          {
          case VnfOperationalState::NOT_SET:
            return {};
          case VnfOperationalState::STARTED:
            return "STARTED";
          case VnfOperationalState::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VnfOperationalStateMapper
    } // namespace Model
  } // namespace tnb
} // namespace Aws
