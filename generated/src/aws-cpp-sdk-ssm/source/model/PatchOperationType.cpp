/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/PatchOperationType.h>
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
      namespace PatchOperationTypeMapper
      {

        static const int Scan_HASH = HashingUtils::HashString("Scan");
        static const int Install_HASH = HashingUtils::HashString("Install");


        PatchOperationType GetPatchOperationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Scan_HASH)
          {
            return PatchOperationType::Scan;
          }
          else if (hashCode == Install_HASH)
          {
            return PatchOperationType::Install;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PatchOperationType>(hashCode);
          }

          return PatchOperationType::NOT_SET;
        }

        Aws::String GetNameForPatchOperationType(PatchOperationType enumValue)
        {
          switch(enumValue)
          {
          case PatchOperationType::Scan:
            return "Scan";
          case PatchOperationType::Install:
            return "Install";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PatchOperationTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
