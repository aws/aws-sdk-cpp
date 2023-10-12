/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ReadSetFile.h>
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
      namespace ReadSetFileMapper
      {

        static constexpr uint32_t SOURCE1_HASH = ConstExprHashingUtils::HashString("SOURCE1");
        static constexpr uint32_t SOURCE2_HASH = ConstExprHashingUtils::HashString("SOURCE2");
        static constexpr uint32_t INDEX_HASH = ConstExprHashingUtils::HashString("INDEX");


        ReadSetFile GetReadSetFileForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SOURCE1_HASH)
          {
            return ReadSetFile::SOURCE1;
          }
          else if (hashCode == SOURCE2_HASH)
          {
            return ReadSetFile::SOURCE2;
          }
          else if (hashCode == INDEX_HASH)
          {
            return ReadSetFile::INDEX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReadSetFile>(hashCode);
          }

          return ReadSetFile::NOT_SET;
        }

        Aws::String GetNameForReadSetFile(ReadSetFile enumValue)
        {
          switch(enumValue)
          {
          case ReadSetFile::NOT_SET:
            return {};
          case ReadSetFile::SOURCE1:
            return "SOURCE1";
          case ReadSetFile::SOURCE2:
            return "SOURCE2";
          case ReadSetFile::INDEX:
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

      } // namespace ReadSetFileMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
