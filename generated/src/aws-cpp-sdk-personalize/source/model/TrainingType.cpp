/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/TrainingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Personalize
  {
    namespace Model
    {
      namespace TrainingTypeMapper
      {

        static const int AUTOMATIC_HASH = HashingUtils::HashString("AUTOMATIC");
        static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");


        TrainingType GetTrainingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTOMATIC_HASH)
          {
            return TrainingType::AUTOMATIC;
          }
          else if (hashCode == MANUAL_HASH)
          {
            return TrainingType::MANUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrainingType>(hashCode);
          }

          return TrainingType::NOT_SET;
        }

        Aws::String GetNameForTrainingType(TrainingType enumValue)
        {
          switch(enumValue)
          {
          case TrainingType::NOT_SET:
            return {};
          case TrainingType::AUTOMATIC:
            return "AUTOMATIC";
          case TrainingType::MANUAL:
            return "MANUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrainingTypeMapper
    } // namespace Model
  } // namespace Personalize
} // namespace Aws
