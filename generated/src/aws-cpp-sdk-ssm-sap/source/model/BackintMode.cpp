/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/BackintMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SsmSap
  {
    namespace Model
    {
      namespace BackintModeMapper
      {

        static const int AWSBackup_HASH = HashingUtils::HashString("AWSBackup");


        BackintMode GetBackintModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWSBackup_HASH)
          {
            return BackintMode::AWSBackup;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BackintMode>(hashCode);
          }

          return BackintMode::NOT_SET;
        }

        Aws::String GetNameForBackintMode(BackintMode enumValue)
        {
          switch(enumValue)
          {
          case BackintMode::NOT_SET:
            return {};
          case BackintMode::AWSBackup:
            return "AWSBackup";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BackintModeMapper
    } // namespace Model
  } // namespace SsmSap
} // namespace Aws
