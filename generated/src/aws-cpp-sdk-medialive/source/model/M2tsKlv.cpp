/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/M2tsKlv.h>
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
      namespace M2tsKlvMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t PASSTHROUGH_HASH = ConstExprHashingUtils::HashString("PASSTHROUGH");


        M2tsKlv GetM2tsKlvForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return M2tsKlv::NONE;
          }
          else if (hashCode == PASSTHROUGH_HASH)
          {
            return M2tsKlv::PASSTHROUGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2tsKlv>(hashCode);
          }

          return M2tsKlv::NOT_SET;
        }

        Aws::String GetNameForM2tsKlv(M2tsKlv enumValue)
        {
          switch(enumValue)
          {
          case M2tsKlv::NOT_SET:
            return {};
          case M2tsKlv::NONE:
            return "NONE";
          case M2tsKlv::PASSTHROUGH:
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

      } // namespace M2tsKlvMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
