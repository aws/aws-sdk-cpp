/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/M3u8NielsenId3.h>
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
      namespace M3u8NielsenId3Mapper
      {

        static const int INSERT_HASH = HashingUtils::HashString("INSERT");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        M3u8NielsenId3 GetM3u8NielsenId3ForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSERT_HASH)
          {
            return M3u8NielsenId3::INSERT;
          }
          else if (hashCode == NONE_HASH)
          {
            return M3u8NielsenId3::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M3u8NielsenId3>(hashCode);
          }

          return M3u8NielsenId3::NOT_SET;
        }

        Aws::String GetNameForM3u8NielsenId3(M3u8NielsenId3 enumValue)
        {
          switch(enumValue)
          {
          case M3u8NielsenId3::INSERT:
            return "INSERT";
          case M3u8NielsenId3::NONE:
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

      } // namespace M3u8NielsenId3Mapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
