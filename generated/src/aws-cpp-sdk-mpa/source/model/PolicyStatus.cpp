/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mpa/model/PolicyStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MPA
  {
    namespace Model
    {
      namespace PolicyStatusMapper
      {

        static const int ATTACHABLE_HASH = HashingUtils::HashString("ATTACHABLE");
        static const int DEPRECATED_HASH = HashingUtils::HashString("DEPRECATED");


        PolicyStatus GetPolicyStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ATTACHABLE_HASH)
          {
            return PolicyStatus::ATTACHABLE;
          }
          else if (hashCode == DEPRECATED_HASH)
          {
            return PolicyStatus::DEPRECATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PolicyStatus>(hashCode);
          }

          return PolicyStatus::NOT_SET;
        }

        Aws::String GetNameForPolicyStatus(PolicyStatus enumValue)
        {
          switch(enumValue)
          {
          case PolicyStatus::NOT_SET:
            return {};
          case PolicyStatus::ATTACHABLE:
            return "ATTACHABLE";
          case PolicyStatus::DEPRECATED:
            return "DEPRECATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PolicyStatusMapper
    } // namespace Model
  } // namespace MPA
} // namespace Aws
