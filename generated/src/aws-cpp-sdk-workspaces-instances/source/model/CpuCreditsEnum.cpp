/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/CpuCreditsEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkspacesInstances
  {
    namespace Model
    {
      namespace CpuCreditsEnumMapper
      {

        static const int standard_HASH = HashingUtils::HashString("standard");
        static const int unlimited_HASH = HashingUtils::HashString("unlimited");


        CpuCreditsEnum GetCpuCreditsEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == standard_HASH)
          {
            return CpuCreditsEnum::standard;
          }
          else if (hashCode == unlimited_HASH)
          {
            return CpuCreditsEnum::unlimited;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CpuCreditsEnum>(hashCode);
          }

          return CpuCreditsEnum::NOT_SET;
        }

        Aws::String GetNameForCpuCreditsEnum(CpuCreditsEnum enumValue)
        {
          switch(enumValue)
          {
          case CpuCreditsEnum::NOT_SET:
            return {};
          case CpuCreditsEnum::standard:
            return "standard";
          case CpuCreditsEnum::unlimited:
            return "unlimited";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CpuCreditsEnumMapper
    } // namespace Model
  } // namespace WorkspacesInstances
} // namespace Aws
