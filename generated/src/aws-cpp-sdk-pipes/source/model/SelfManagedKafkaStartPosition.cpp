/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/SelfManagedKafkaStartPosition.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pipes
  {
    namespace Model
    {
      namespace SelfManagedKafkaStartPositionMapper
      {

        static const int TRIM_HORIZON_HASH = HashingUtils::HashString("TRIM_HORIZON");
        static const int LATEST_HASH = HashingUtils::HashString("LATEST");


        SelfManagedKafkaStartPosition GetSelfManagedKafkaStartPositionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRIM_HORIZON_HASH)
          {
            return SelfManagedKafkaStartPosition::TRIM_HORIZON;
          }
          else if (hashCode == LATEST_HASH)
          {
            return SelfManagedKafkaStartPosition::LATEST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SelfManagedKafkaStartPosition>(hashCode);
          }

          return SelfManagedKafkaStartPosition::NOT_SET;
        }

        Aws::String GetNameForSelfManagedKafkaStartPosition(SelfManagedKafkaStartPosition enumValue)
        {
          switch(enumValue)
          {
          case SelfManagedKafkaStartPosition::TRIM_HORIZON:
            return "TRIM_HORIZON";
          case SelfManagedKafkaStartPosition::LATEST:
            return "LATEST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SelfManagedKafkaStartPositionMapper
    } // namespace Model
  } // namespace Pipes
} // namespace Aws
