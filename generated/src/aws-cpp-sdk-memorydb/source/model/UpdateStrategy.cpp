/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/UpdateStrategy.h>
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
      namespace UpdateStrategyMapper
      {

        static const int coordinated_HASH = HashingUtils::HashString("coordinated");
        static const int uncoordinated_HASH = HashingUtils::HashString("uncoordinated");


        UpdateStrategy GetUpdateStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == coordinated_HASH)
          {
            return UpdateStrategy::coordinated;
          }
          else if (hashCode == uncoordinated_HASH)
          {
            return UpdateStrategy::uncoordinated;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateStrategy>(hashCode);
          }

          return UpdateStrategy::NOT_SET;
        }

        Aws::String GetNameForUpdateStrategy(UpdateStrategy enumValue)
        {
          switch(enumValue)
          {
          case UpdateStrategy::NOT_SET:
            return {};
          case UpdateStrategy::coordinated:
            return "coordinated";
          case UpdateStrategy::uncoordinated:
            return "uncoordinated";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateStrategyMapper
    } // namespace Model
  } // namespace MemoryDB
} // namespace Aws
