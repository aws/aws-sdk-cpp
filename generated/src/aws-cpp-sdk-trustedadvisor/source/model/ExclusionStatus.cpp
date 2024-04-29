/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/trustedadvisor/model/ExclusionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TrustedAdvisor
  {
    namespace Model
    {
      namespace ExclusionStatusMapper
      {

        static const int excluded_HASH = HashingUtils::HashString("excluded");
        static const int included_HASH = HashingUtils::HashString("included");


        ExclusionStatus GetExclusionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == excluded_HASH)
          {
            return ExclusionStatus::excluded;
          }
          else if (hashCode == included_HASH)
          {
            return ExclusionStatus::included;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExclusionStatus>(hashCode);
          }

          return ExclusionStatus::NOT_SET;
        }

        Aws::String GetNameForExclusionStatus(ExclusionStatus enumValue)
        {
          switch(enumValue)
          {
          case ExclusionStatus::NOT_SET:
            return {};
          case ExclusionStatus::excluded:
            return "excluded";
          case ExclusionStatus::included:
            return "included";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExclusionStatusMapper
    } // namespace Model
  } // namespace TrustedAdvisor
} // namespace Aws
