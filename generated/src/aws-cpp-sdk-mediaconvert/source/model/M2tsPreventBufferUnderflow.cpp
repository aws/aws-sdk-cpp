/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/M2tsPreventBufferUnderflow.h>
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
      namespace M2tsPreventBufferUnderflowMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        M2tsPreventBufferUnderflow GetM2tsPreventBufferUnderflowForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return M2tsPreventBufferUnderflow::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return M2tsPreventBufferUnderflow::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2tsPreventBufferUnderflow>(hashCode);
          }

          return M2tsPreventBufferUnderflow::NOT_SET;
        }

        Aws::String GetNameForM2tsPreventBufferUnderflow(M2tsPreventBufferUnderflow enumValue)
        {
          switch(enumValue)
          {
          case M2tsPreventBufferUnderflow::NOT_SET:
            return {};
          case M2tsPreventBufferUnderflow::DISABLED:
            return "DISABLED";
          case M2tsPreventBufferUnderflow::ENABLED:
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

      } // namespace M2tsPreventBufferUnderflowMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
