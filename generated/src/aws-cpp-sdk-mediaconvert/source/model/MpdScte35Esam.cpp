/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MpdScte35Esam.h>
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
      namespace MpdScte35EsamMapper
      {

        static constexpr uint32_t INSERT_HASH = ConstExprHashingUtils::HashString("INSERT");
        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");


        MpdScte35Esam GetMpdScte35EsamForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSERT_HASH)
          {
            return MpdScte35Esam::INSERT;
          }
          else if (hashCode == NONE_HASH)
          {
            return MpdScte35Esam::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MpdScte35Esam>(hashCode);
          }

          return MpdScte35Esam::NOT_SET;
        }

        Aws::String GetNameForMpdScte35Esam(MpdScte35Esam enumValue)
        {
          switch(enumValue)
          {
          case MpdScte35Esam::NOT_SET:
            return {};
          case MpdScte35Esam::INSERT:
            return "INSERT";
          case MpdScte35Esam::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MpdScte35EsamMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
