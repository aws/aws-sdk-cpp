/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ReferenceFile.h>
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
      namespace ReferenceFileMapper
      {

        static constexpr uint32_t SOURCE_HASH = ConstExprHashingUtils::HashString("SOURCE");
        static constexpr uint32_t INDEX_HASH = ConstExprHashingUtils::HashString("INDEX");


        ReferenceFile GetReferenceFileForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SOURCE_HASH)
          {
            return ReferenceFile::SOURCE;
          }
          else if (hashCode == INDEX_HASH)
          {
            return ReferenceFile::INDEX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReferenceFile>(hashCode);
          }

          return ReferenceFile::NOT_SET;
        }

        Aws::String GetNameForReferenceFile(ReferenceFile enumValue)
        {
          switch(enumValue)
          {
          case ReferenceFile::NOT_SET:
            return {};
          case ReferenceFile::SOURCE:
            return "SOURCE";
          case ReferenceFile::INDEX:
            return "INDEX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReferenceFileMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
