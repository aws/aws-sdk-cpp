/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/M2tsForceTsVideoEbpOrder.h>
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
      namespace M2tsForceTsVideoEbpOrderMapper
      {

        static const int FORCE_HASH = HashingUtils::HashString("FORCE");
        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");


        M2tsForceTsVideoEbpOrder GetM2tsForceTsVideoEbpOrderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FORCE_HASH)
          {
            return M2tsForceTsVideoEbpOrder::FORCE;
          }
          else if (hashCode == DEFAULT_HASH)
          {
            return M2tsForceTsVideoEbpOrder::DEFAULT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2tsForceTsVideoEbpOrder>(hashCode);
          }

          return M2tsForceTsVideoEbpOrder::NOT_SET;
        }

        Aws::String GetNameForM2tsForceTsVideoEbpOrder(M2tsForceTsVideoEbpOrder enumValue)
        {
          switch(enumValue)
          {
          case M2tsForceTsVideoEbpOrder::FORCE:
            return "FORCE";
          case M2tsForceTsVideoEbpOrder::DEFAULT:
            return "DEFAULT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M2tsForceTsVideoEbpOrderMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
