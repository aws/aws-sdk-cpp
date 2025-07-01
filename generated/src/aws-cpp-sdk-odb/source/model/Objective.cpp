/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/Objective.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace odb
  {
    namespace Model
    {
      namespace ObjectiveMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int BALANCED_HASH = HashingUtils::HashString("BALANCED");
        static const int BASIC_HASH = HashingUtils::HashString("BASIC");
        static const int HIGH_THROUGHPUT_HASH = HashingUtils::HashString("HIGH_THROUGHPUT");
        static const int LOW_LATENCY_HASH = HashingUtils::HashString("LOW_LATENCY");


        Objective GetObjectiveForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return Objective::AUTO;
          }
          else if (hashCode == BALANCED_HASH)
          {
            return Objective::BALANCED;
          }
          else if (hashCode == BASIC_HASH)
          {
            return Objective::BASIC;
          }
          else if (hashCode == HIGH_THROUGHPUT_HASH)
          {
            return Objective::HIGH_THROUGHPUT;
          }
          else if (hashCode == LOW_LATENCY_HASH)
          {
            return Objective::LOW_LATENCY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Objective>(hashCode);
          }

          return Objective::NOT_SET;
        }

        Aws::String GetNameForObjective(Objective enumValue)
        {
          switch(enumValue)
          {
          case Objective::NOT_SET:
            return {};
          case Objective::AUTO:
            return "AUTO";
          case Objective::BALANCED:
            return "BALANCED";
          case Objective::BASIC:
            return "BASIC";
          case Objective::HIGH_THROUGHPUT:
            return "HIGH_THROUGHPUT";
          case Objective::LOW_LATENCY:
            return "LOW_LATENCY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ObjectiveMapper
    } // namespace Model
  } // namespace odb
} // namespace Aws
