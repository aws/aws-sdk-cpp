/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/MergeStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Translate
  {
    namespace Model
    {
      namespace MergeStrategyMapper
      {

        static const int OVERWRITE_HASH = HashingUtils::HashString("OVERWRITE");


        MergeStrategy GetMergeStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OVERWRITE_HASH)
          {
            return MergeStrategy::OVERWRITE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MergeStrategy>(hashCode);
          }

          return MergeStrategy::NOT_SET;
        }

        Aws::String GetNameForMergeStrategy(MergeStrategy enumValue)
        {
          switch(enumValue)
          {
          case MergeStrategy::OVERWRITE:
            return "OVERWRITE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MergeStrategyMapper
    } // namespace Model
  } // namespace Translate
} // namespace Aws
