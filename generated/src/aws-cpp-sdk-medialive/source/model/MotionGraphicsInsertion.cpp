/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MotionGraphicsInsertion.h>
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
      namespace MotionGraphicsInsertionMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        MotionGraphicsInsertion GetMotionGraphicsInsertionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return MotionGraphicsInsertion::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return MotionGraphicsInsertion::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MotionGraphicsInsertion>(hashCode);
          }

          return MotionGraphicsInsertion::NOT_SET;
        }

        Aws::String GetNameForMotionGraphicsInsertion(MotionGraphicsInsertion enumValue)
        {
          switch(enumValue)
          {
          case MotionGraphicsInsertion::NOT_SET:
            return {};
          case MotionGraphicsInsertion::DISABLED:
            return "DISABLED";
          case MotionGraphicsInsertion::ENABLED:
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

      } // namespace MotionGraphicsInsertionMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
