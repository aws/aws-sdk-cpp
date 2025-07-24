/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/SourceReferenceType.h>
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
      namespace SourceReferenceTypeMapper
      {

        static const int BRANCH_HASH = HashingUtils::HashString("BRANCH");
        static const int TAG_HASH = HashingUtils::HashString("TAG");
        static const int COMMIT_HASH = HashingUtils::HashString("COMMIT");


        SourceReferenceType GetSourceReferenceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BRANCH_HASH)
          {
            return SourceReferenceType::BRANCH;
          }
          else if (hashCode == TAG_HASH)
          {
            return SourceReferenceType::TAG;
          }
          else if (hashCode == COMMIT_HASH)
          {
            return SourceReferenceType::COMMIT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SourceReferenceType>(hashCode);
          }

          return SourceReferenceType::NOT_SET;
        }

        Aws::String GetNameForSourceReferenceType(SourceReferenceType enumValue)
        {
          switch(enumValue)
          {
          case SourceReferenceType::NOT_SET:
            return {};
          case SourceReferenceType::BRANCH:
            return "BRANCH";
          case SourceReferenceType::TAG:
            return "TAG";
          case SourceReferenceType::COMMIT:
            return "COMMIT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceReferenceTypeMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
