/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/AZStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MemoryDB
  {
    namespace Model
    {
      namespace AZStatusMapper
      {

        static const int singleaz_HASH = HashingUtils::HashString("singleaz");
        static const int multiaz_HASH = HashingUtils::HashString("multiaz");


        AZStatus GetAZStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == singleaz_HASH)
          {
            return AZStatus::singleaz;
          }
          else if (hashCode == multiaz_HASH)
          {
            return AZStatus::multiaz;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AZStatus>(hashCode);
          }

          return AZStatus::NOT_SET;
        }

        Aws::String GetNameForAZStatus(AZStatus enumValue)
        {
          switch(enumValue)
          {
          case AZStatus::NOT_SET:
            return {};
          case AZStatus::singleaz:
            return "singleaz";
          case AZStatus::multiaz:
            return "multiaz";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AZStatusMapper
    } // namespace Model
  } // namespace MemoryDB
} // namespace Aws
