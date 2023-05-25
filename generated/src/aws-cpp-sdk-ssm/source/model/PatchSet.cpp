/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/PatchSet.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace PatchSetMapper
      {

        static const int OS_HASH = HashingUtils::HashString("OS");
        static const int APPLICATION_HASH = HashingUtils::HashString("APPLICATION");


        PatchSet GetPatchSetForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OS_HASH)
          {
            return PatchSet::OS;
          }
          else if (hashCode == APPLICATION_HASH)
          {
            return PatchSet::APPLICATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PatchSet>(hashCode);
          }

          return PatchSet::NOT_SET;
        }

        Aws::String GetNameForPatchSet(PatchSet enumValue)
        {
          switch(enumValue)
          {
          case PatchSet::OS:
            return "OS";
          case PatchSet::APPLICATION:
            return "APPLICATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PatchSetMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
