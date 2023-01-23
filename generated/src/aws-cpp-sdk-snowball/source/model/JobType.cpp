/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/JobType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Snowball
  {
    namespace Model
    {
      namespace JobTypeMapper
      {

        static const int IMPORT_HASH = HashingUtils::HashString("IMPORT");
        static const int EXPORT_HASH = HashingUtils::HashString("EXPORT");
        static const int LOCAL_USE_HASH = HashingUtils::HashString("LOCAL_USE");


        JobType GetJobTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IMPORT_HASH)
          {
            return JobType::IMPORT;
          }
          else if (hashCode == EXPORT_HASH)
          {
            return JobType::EXPORT;
          }
          else if (hashCode == LOCAL_USE_HASH)
          {
            return JobType::LOCAL_USE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobType>(hashCode);
          }

          return JobType::NOT_SET;
        }

        Aws::String GetNameForJobType(JobType enumValue)
        {
          switch(enumValue)
          {
          case JobType::IMPORT:
            return "IMPORT";
          case JobType::EXPORT:
            return "EXPORT";
          case JobType::LOCAL_USE:
            return "LOCAL_USE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobTypeMapper
    } // namespace Model
  } // namespace Snowball
} // namespace Aws
