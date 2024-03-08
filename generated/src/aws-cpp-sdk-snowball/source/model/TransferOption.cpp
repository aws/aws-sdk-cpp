/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/TransferOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Snowball
  {
    namespace Model
    {
      namespace TransferOptionMapper
      {

        static const int IMPORT_HASH = HashingUtils::HashString("IMPORT");
        static const int EXPORT_HASH = HashingUtils::HashString("EXPORT");
        static const int LOCAL_USE_HASH = HashingUtils::HashString("LOCAL_USE");


        TransferOption GetTransferOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IMPORT_HASH)
          {
            return TransferOption::IMPORT;
          }
          else if (hashCode == EXPORT_HASH)
          {
            return TransferOption::EXPORT;
          }
          else if (hashCode == LOCAL_USE_HASH)
          {
            return TransferOption::LOCAL_USE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransferOption>(hashCode);
          }

          return TransferOption::NOT_SET;
        }

        Aws::String GetNameForTransferOption(TransferOption enumValue)
        {
          switch(enumValue)
          {
          case TransferOption::NOT_SET:
            return {};
          case TransferOption::IMPORT:
            return "IMPORT";
          case TransferOption::EXPORT:
            return "EXPORT";
          case TransferOption::LOCAL_USE:
            return "LOCAL_USE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransferOptionMapper
    } // namespace Model
  } // namespace Snowball
} // namespace Aws
