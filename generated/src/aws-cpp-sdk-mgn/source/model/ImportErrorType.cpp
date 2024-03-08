/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ImportErrorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mgn
  {
    namespace Model
    {
      namespace ImportErrorTypeMapper
      {

        static const int VALIDATION_ERROR_HASH = HashingUtils::HashString("VALIDATION_ERROR");
        static const int PROCESSING_ERROR_HASH = HashingUtils::HashString("PROCESSING_ERROR");


        ImportErrorType GetImportErrorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VALIDATION_ERROR_HASH)
          {
            return ImportErrorType::VALIDATION_ERROR;
          }
          else if (hashCode == PROCESSING_ERROR_HASH)
          {
            return ImportErrorType::PROCESSING_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImportErrorType>(hashCode);
          }

          return ImportErrorType::NOT_SET;
        }

        Aws::String GetNameForImportErrorType(ImportErrorType enumValue)
        {
          switch(enumValue)
          {
          case ImportErrorType::NOT_SET:
            return {};
          case ImportErrorType::VALIDATION_ERROR:
            return "VALIDATION_ERROR";
          case ImportErrorType::PROCESSING_ERROR:
            return "PROCESSING_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImportErrorTypeMapper
    } // namespace Model
  } // namespace mgn
} // namespace Aws
