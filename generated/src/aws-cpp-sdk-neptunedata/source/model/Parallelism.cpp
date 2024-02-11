/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/Parallelism.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace neptunedata
  {
    namespace Model
    {
      namespace ParallelismMapper
      {

        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int OVERSUBSCRIBE_HASH = HashingUtils::HashString("OVERSUBSCRIBE");


        Parallelism GetParallelismForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOW_HASH)
          {
            return Parallelism::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return Parallelism::MEDIUM;
          }
          else if (hashCode == HIGH_HASH)
          {
            return Parallelism::HIGH;
          }
          else if (hashCode == OVERSUBSCRIBE_HASH)
          {
            return Parallelism::OVERSUBSCRIBE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Parallelism>(hashCode);
          }

          return Parallelism::NOT_SET;
        }

        Aws::String GetNameForParallelism(Parallelism enumValue)
        {
          switch(enumValue)
          {
          case Parallelism::NOT_SET:
            return {};
          case Parallelism::LOW:
            return "LOW";
          case Parallelism::MEDIUM:
            return "MEDIUM";
          case Parallelism::HIGH:
            return "HIGH";
          case Parallelism::OVERSUBSCRIBE:
            return "OVERSUBSCRIBE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParallelismMapper
    } // namespace Model
  } // namespace neptunedata
} // namespace Aws
