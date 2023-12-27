/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/ToxicityCategory.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TranscribeService
  {
    namespace Model
    {
      namespace ToxicityCategoryMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");


        ToxicityCategory GetToxicityCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return ToxicityCategory::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ToxicityCategory>(hashCode);
          }

          return ToxicityCategory::NOT_SET;
        }

        Aws::String GetNameForToxicityCategory(ToxicityCategory enumValue)
        {
          switch(enumValue)
          {
          case ToxicityCategory::NOT_SET:
            return {};
          case ToxicityCategory::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ToxicityCategoryMapper
    } // namespace Model
  } // namespace TranscribeService
} // namespace Aws
