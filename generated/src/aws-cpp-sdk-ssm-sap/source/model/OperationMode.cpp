/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/OperationMode.h>
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
      namespace OperationModeMapper
      {

        static constexpr uint32_t PRIMARY_HASH = ConstExprHashingUtils::HashString("PRIMARY");
        static constexpr uint32_t LOGREPLAY_HASH = ConstExprHashingUtils::HashString("LOGREPLAY");
        static constexpr uint32_t DELTA_DATASHIPPING_HASH = ConstExprHashingUtils::HashString("DELTA_DATASHIPPING");
        static constexpr uint32_t LOGREPLAY_READACCESS_HASH = ConstExprHashingUtils::HashString("LOGREPLAY_READACCESS");
        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");


        OperationMode GetOperationModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRIMARY_HASH)
          {
            return OperationMode::PRIMARY;
          }
          else if (hashCode == LOGREPLAY_HASH)
          {
            return OperationMode::LOGREPLAY;
          }
          else if (hashCode == DELTA_DATASHIPPING_HASH)
          {
            return OperationMode::DELTA_DATASHIPPING;
          }
          else if (hashCode == LOGREPLAY_READACCESS_HASH)
          {
            return OperationMode::LOGREPLAY_READACCESS;
          }
          else if (hashCode == NONE_HASH)
          {
            return OperationMode::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OperationMode>(hashCode);
          }

          return OperationMode::NOT_SET;
        }

        Aws::String GetNameForOperationMode(OperationMode enumValue)
        {
          switch(enumValue)
          {
          case OperationMode::NOT_SET:
            return {};
          case OperationMode::PRIMARY:
            return "PRIMARY";
          case OperationMode::LOGREPLAY:
            return "LOGREPLAY";
          case OperationMode::DELTA_DATASHIPPING:
            return "DELTA_DATASHIPPING";
          case OperationMode::LOGREPLAY_READACCESS:
            return "LOGREPLAY_READACCESS";
          case OperationMode::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OperationModeMapper
    } // namespace Model
  } // namespace SsmSap
} // namespace Aws
