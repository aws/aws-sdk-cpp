/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/M2tsEbifControl.h>
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
      namespace M2tsEbifControlMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int PASSTHROUGH_HASH = HashingUtils::HashString("PASSTHROUGH");


        M2tsEbifControl GetM2tsEbifControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return M2tsEbifControl::NONE;
          }
          else if (hashCode == PASSTHROUGH_HASH)
          {
            return M2tsEbifControl::PASSTHROUGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2tsEbifControl>(hashCode);
          }

          return M2tsEbifControl::NOT_SET;
        }

        Aws::String GetNameForM2tsEbifControl(M2tsEbifControl enumValue)
        {
          switch(enumValue)
          {
          case M2tsEbifControl::NONE:
            return "NONE";
          case M2tsEbifControl::PASSTHROUGH:
            return "PASSTHROUGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M2tsEbifControlMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
