/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/ShareStatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkDocs
  {
    namespace Model
    {
      namespace ShareStatusTypeMapper
      {

        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int FAILURE_HASH = HashingUtils::HashString("FAILURE");


        ShareStatusType GetShareStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCESS_HASH)
          {
            return ShareStatusType::SUCCESS;
          }
          else if (hashCode == FAILURE_HASH)
          {
            return ShareStatusType::FAILURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ShareStatusType>(hashCode);
          }

          return ShareStatusType::NOT_SET;
        }

        Aws::String GetNameForShareStatusType(ShareStatusType enumValue)
        {
          switch(enumValue)
          {
          case ShareStatusType::SUCCESS:
            return "SUCCESS";
          case ShareStatusType::FAILURE:
            return "FAILURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ShareStatusTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
