/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/CreationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Omics
  {
    namespace Model
    {
      namespace CreationTypeMapper
      {

        static constexpr uint32_t IMPORT_HASH = ConstExprHashingUtils::HashString("IMPORT");
        static constexpr uint32_t UPLOAD_HASH = ConstExprHashingUtils::HashString("UPLOAD");


        CreationType GetCreationTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IMPORT_HASH)
          {
            return CreationType::IMPORT;
          }
          else if (hashCode == UPLOAD_HASH)
          {
            return CreationType::UPLOAD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CreationType>(hashCode);
          }

          return CreationType::NOT_SET;
        }

        Aws::String GetNameForCreationType(CreationType enumValue)
        {
          switch(enumValue)
          {
          case CreationType::NOT_SET:
            return {};
          case CreationType::IMPORT:
            return "IMPORT";
          case CreationType::UPLOAD:
            return "UPLOAD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CreationTypeMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
