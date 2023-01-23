/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ExportSourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace ExportSourceTypeMapper
      {

        static const int SNAPSHOT_HASH = HashingUtils::HashString("SNAPSHOT");
        static const int CLUSTER_HASH = HashingUtils::HashString("CLUSTER");


        ExportSourceType GetExportSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SNAPSHOT_HASH)
          {
            return ExportSourceType::SNAPSHOT;
          }
          else if (hashCode == CLUSTER_HASH)
          {
            return ExportSourceType::CLUSTER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportSourceType>(hashCode);
          }

          return ExportSourceType::NOT_SET;
        }

        Aws::String GetNameForExportSourceType(ExportSourceType enumValue)
        {
          switch(enumValue)
          {
          case ExportSourceType::SNAPSHOT:
            return "SNAPSHOT";
          case ExportSourceType::CLUSTER:
            return "CLUSTER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExportSourceTypeMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
