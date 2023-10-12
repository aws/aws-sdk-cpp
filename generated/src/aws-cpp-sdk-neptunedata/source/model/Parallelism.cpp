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

        static constexpr uint32_t LOW_HASH = ConstExprHashingUtils::HashString("LOW");
        static constexpr uint32_t MEDIUM_HASH = ConstExprHashingUtils::HashString("MEDIUM");
        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");
        static constexpr uint32_t OVERSUBSCRIBE_HASH = ConstExprHashingUtils::HashString("OVERSUBSCRIBE");


        Parallelism GetParallelismForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
