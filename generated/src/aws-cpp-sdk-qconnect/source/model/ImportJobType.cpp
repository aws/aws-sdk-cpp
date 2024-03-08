/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/ImportJobType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QConnect
  {
    namespace Model
    {
      namespace ImportJobTypeMapper
      {

        static const int QUICK_RESPONSES_HASH = HashingUtils::HashString("QUICK_RESPONSES");


        ImportJobType GetImportJobTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUICK_RESPONSES_HASH)
          {
            return ImportJobType::QUICK_RESPONSES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImportJobType>(hashCode);
          }

          return ImportJobType::NOT_SET;
        }

        Aws::String GetNameForImportJobType(ImportJobType enumValue)
        {
          switch(enumValue)
          {
          case ImportJobType::NOT_SET:
            return {};
          case ImportJobType::QUICK_RESPONSES:
            return "QUICK_RESPONSES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImportJobTypeMapper
    } // namespace Model
  } // namespace QConnect
} // namespace Aws
