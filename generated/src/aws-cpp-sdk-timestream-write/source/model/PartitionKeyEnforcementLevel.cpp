/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/PartitionKeyEnforcementLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TimestreamWrite
  {
    namespace Model
    {
      namespace PartitionKeyEnforcementLevelMapper
      {

        static const int REQUIRED_HASH = HashingUtils::HashString("REQUIRED");
        static const int OPTIONAL_HASH = HashingUtils::HashString("OPTIONAL");


        PartitionKeyEnforcementLevel GetPartitionKeyEnforcementLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REQUIRED_HASH)
          {
            return PartitionKeyEnforcementLevel::REQUIRED;
          }
          else if (hashCode == OPTIONAL_HASH)
          {
            return PartitionKeyEnforcementLevel::OPTIONAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PartitionKeyEnforcementLevel>(hashCode);
          }

          return PartitionKeyEnforcementLevel::NOT_SET;
        }

        Aws::String GetNameForPartitionKeyEnforcementLevel(PartitionKeyEnforcementLevel enumValue)
        {
          switch(enumValue)
          {
          case PartitionKeyEnforcementLevel::NOT_SET:
            return {};
          case PartitionKeyEnforcementLevel::REQUIRED:
            return "REQUIRED";
          case PartitionKeyEnforcementLevel::OPTIONAL:
            return "OPTIONAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PartitionKeyEnforcementLevelMapper
    } // namespace Model
  } // namespace TimestreamWrite
} // namespace Aws
