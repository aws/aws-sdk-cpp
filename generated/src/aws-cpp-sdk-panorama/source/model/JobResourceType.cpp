/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/JobResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Panorama
  {
    namespace Model
    {
      namespace JobResourceTypeMapper
      {

        static const int PACKAGE_HASH = HashingUtils::HashString("PACKAGE");


        JobResourceType GetJobResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PACKAGE_HASH)
          {
            return JobResourceType::PACKAGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobResourceType>(hashCode);
          }

          return JobResourceType::NOT_SET;
        }

        Aws::String GetNameForJobResourceType(JobResourceType enumValue)
        {
          switch(enumValue)
          {
          case JobResourceType::NOT_SET:
            return {};
          case JobResourceType::PACKAGE:
            return "PACKAGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobResourceTypeMapper
    } // namespace Model
  } // namespace Panorama
} // namespace Aws
