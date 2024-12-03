/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/IncludeGeneratedAnswer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace IncludeGeneratedAnswerMapper
      {

        static const int INCLUDE_HASH = HashingUtils::HashString("INCLUDE");
        static const int EXCLUDE_HASH = HashingUtils::HashString("EXCLUDE");


        IncludeGeneratedAnswer GetIncludeGeneratedAnswerForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCLUDE_HASH)
          {
            return IncludeGeneratedAnswer::INCLUDE;
          }
          else if (hashCode == EXCLUDE_HASH)
          {
            return IncludeGeneratedAnswer::EXCLUDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IncludeGeneratedAnswer>(hashCode);
          }

          return IncludeGeneratedAnswer::NOT_SET;
        }

        Aws::String GetNameForIncludeGeneratedAnswer(IncludeGeneratedAnswer enumValue)
        {
          switch(enumValue)
          {
          case IncludeGeneratedAnswer::NOT_SET:
            return {};
          case IncludeGeneratedAnswer::INCLUDE:
            return "INCLUDE";
          case IncludeGeneratedAnswer::EXCLUDE:
            return "EXCLUDE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IncludeGeneratedAnswerMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
