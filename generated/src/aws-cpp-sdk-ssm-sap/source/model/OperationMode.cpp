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

        static const int PRIMARY_HASH = HashingUtils::HashString("PRIMARY");
        static const int LOGREPLAY_HASH = HashingUtils::HashString("LOGREPLAY");
        static const int DELTA_DATASHIPPING_HASH = HashingUtils::HashString("DELTA_DATASHIPPING");
        static const int LOGREPLAY_READACCESS_HASH = HashingUtils::HashString("LOGREPLAY_READACCESS");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        OperationMode GetOperationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
