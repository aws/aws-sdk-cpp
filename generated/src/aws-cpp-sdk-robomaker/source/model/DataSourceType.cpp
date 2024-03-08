/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/DataSourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RoboMaker
  {
    namespace Model
    {
      namespace DataSourceTypeMapper
      {

        static const int Prefix_HASH = HashingUtils::HashString("Prefix");
        static const int Archive_HASH = HashingUtils::HashString("Archive");
        static const int File_HASH = HashingUtils::HashString("File");


        DataSourceType GetDataSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Prefix_HASH)
          {
            return DataSourceType::Prefix;
          }
          else if (hashCode == Archive_HASH)
          {
            return DataSourceType::Archive;
          }
          else if (hashCode == File_HASH)
          {
            return DataSourceType::File;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataSourceType>(hashCode);
          }

          return DataSourceType::NOT_SET;
        }

        Aws::String GetNameForDataSourceType(DataSourceType enumValue)
        {
          switch(enumValue)
          {
          case DataSourceType::NOT_SET:
            return {};
          case DataSourceType::Prefix:
            return "Prefix";
          case DataSourceType::Archive:
            return "Archive";
          case DataSourceType::File:
            return "File";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataSourceTypeMapper
    } // namespace Model
  } // namespace RoboMaker
} // namespace Aws
