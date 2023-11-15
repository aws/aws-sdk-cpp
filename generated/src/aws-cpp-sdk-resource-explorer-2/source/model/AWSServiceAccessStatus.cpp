/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/AWSServiceAccessStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResourceExplorer2
  {
    namespace Model
    {
      namespace AWSServiceAccessStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        AWSServiceAccessStatus GetAWSServiceAccessStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return AWSServiceAccessStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return AWSServiceAccessStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AWSServiceAccessStatus>(hashCode);
          }

          return AWSServiceAccessStatus::NOT_SET;
        }

        Aws::String GetNameForAWSServiceAccessStatus(AWSServiceAccessStatus enumValue)
        {
          switch(enumValue)
          {
          case AWSServiceAccessStatus::NOT_SET:
            return {};
          case AWSServiceAccessStatus::ENABLED:
            return "ENABLED";
          case AWSServiceAccessStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AWSServiceAccessStatusMapper
    } // namespace Model
  } // namespace ResourceExplorer2
} // namespace Aws
