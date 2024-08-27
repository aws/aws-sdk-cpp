/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ReferenceCreationType.h>
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
      namespace ReferenceCreationTypeMapper
      {

        static const int IMPORT_HASH = HashingUtils::HashString("IMPORT");


        ReferenceCreationType GetReferenceCreationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IMPORT_HASH)
          {
            return ReferenceCreationType::IMPORT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReferenceCreationType>(hashCode);
          }

          return ReferenceCreationType::NOT_SET;
        }

        Aws::String GetNameForReferenceCreationType(ReferenceCreationType enumValue)
        {
          switch(enumValue)
          {
          case ReferenceCreationType::NOT_SET:
            return {};
          case ReferenceCreationType::IMPORT:
            return "IMPORT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReferenceCreationTypeMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
