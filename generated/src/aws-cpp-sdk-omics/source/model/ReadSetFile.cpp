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

        static const int SOURCE1_HASH = HashingUtils::HashString("SOURCE1");
        static const int SOURCE2_HASH = HashingUtils::HashString("SOURCE2");
        static const int INDEX_HASH = HashingUtils::HashString("INDEX");


        ReadSetFile GetReadSetFileForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
