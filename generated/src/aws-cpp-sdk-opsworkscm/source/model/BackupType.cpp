/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworkscm/model/BackupType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpsWorksCM
  {
    namespace Model
    {
      namespace BackupTypeMapper
      {

        static constexpr uint32_t AUTOMATED_HASH = ConstExprHashingUtils::HashString("AUTOMATED");
        static constexpr uint32_t MANUAL_HASH = ConstExprHashingUtils::HashString("MANUAL");


        BackupType GetBackupTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTOMATED_HASH)
          {
            return BackupType::AUTOMATED;
          }
          else if (hashCode == MANUAL_HASH)
          {
            return BackupType::MANUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BackupType>(hashCode);
          }

          return BackupType::NOT_SET;
        }

        Aws::String GetNameForBackupType(BackupType enumValue)
        {
          switch(enumValue)
          {
          case BackupType::NOT_SET:
            return {};
          case BackupType::AUTOMATED:
            return "AUTOMATED";
          case BackupType::MANUAL:
            return "MANUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BackupTypeMapper
    } // namespace Model
  } // namespace OpsWorksCM
} // namespace Aws
