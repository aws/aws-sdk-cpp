/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DataShareStatusForConsumer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace DataShareStatusForConsumerMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");


        DataShareStatusForConsumer GetDataShareStatusForConsumerForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return DataShareStatusForConsumer::ACTIVE;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return DataShareStatusForConsumer::AVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataShareStatusForConsumer>(hashCode);
          }

          return DataShareStatusForConsumer::NOT_SET;
        }

        Aws::String GetNameForDataShareStatusForConsumer(DataShareStatusForConsumer enumValue)
        {
          switch(enumValue)
          {
          case DataShareStatusForConsumer::NOT_SET:
            return {};
          case DataShareStatusForConsumer::ACTIVE:
            return "ACTIVE";
          case DataShareStatusForConsumer::AVAILABLE:
            return "AVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataShareStatusForConsumerMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
