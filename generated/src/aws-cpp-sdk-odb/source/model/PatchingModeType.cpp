/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/PatchingModeType.h>
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
      namespace PatchingModeTypeMapper
      {

        static const int ROLLING_HASH = HashingUtils::HashString("ROLLING");
        static const int NONROLLING_HASH = HashingUtils::HashString("NONROLLING");


        PatchingModeType GetPatchingModeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ROLLING_HASH)
          {
            return PatchingModeType::ROLLING;
          }
          else if (hashCode == NONROLLING_HASH)
          {
            return PatchingModeType::NONROLLING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PatchingModeType>(hashCode);
          }

          return PatchingModeType::NOT_SET;
        }

        Aws::String GetNameForPatchingModeType(PatchingModeType enumValue)
        {
          switch(enumValue)
          {
          case PatchingModeType::NOT_SET:
            return {};
          case PatchingModeType::ROLLING:
            return "ROLLING";
          case PatchingModeType::NONROLLING:
            return "NONROLLING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PatchingModeTypeMapper
    } // namespace Model
  } // namespace odb
} // namespace Aws
