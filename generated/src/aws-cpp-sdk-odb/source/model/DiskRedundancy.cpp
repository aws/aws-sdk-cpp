/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/DiskRedundancy.h>
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
      namespace DiskRedundancyMapper
      {

        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int NORMAL_HASH = HashingUtils::HashString("NORMAL");


        DiskRedundancy GetDiskRedundancyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HIGH_HASH)
          {
            return DiskRedundancy::HIGH;
          }
          else if (hashCode == NORMAL_HASH)
          {
            return DiskRedundancy::NORMAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DiskRedundancy>(hashCode);
          }

          return DiskRedundancy::NOT_SET;
        }

        Aws::String GetNameForDiskRedundancy(DiskRedundancy enumValue)
        {
          switch(enumValue)
          {
          case DiskRedundancy::NOT_SET:
            return {};
          case DiskRedundancy::HIGH:
            return "HIGH";
          case DiskRedundancy::NORMAL:
            return "NORMAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DiskRedundancyMapper
    } // namespace Model
  } // namespace odb
} // namespace Aws
