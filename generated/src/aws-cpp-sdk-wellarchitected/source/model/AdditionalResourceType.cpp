/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/AdditionalResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WellArchitected
  {
    namespace Model
    {
      namespace AdditionalResourceTypeMapper
      {

        static const int HELPFUL_RESOURCE_HASH = HashingUtils::HashString("HELPFUL_RESOURCE");
        static const int IMPROVEMENT_PLAN_HASH = HashingUtils::HashString("IMPROVEMENT_PLAN");


        AdditionalResourceType GetAdditionalResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HELPFUL_RESOURCE_HASH)
          {
            return AdditionalResourceType::HELPFUL_RESOURCE;
          }
          else if (hashCode == IMPROVEMENT_PLAN_HASH)
          {
            return AdditionalResourceType::IMPROVEMENT_PLAN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AdditionalResourceType>(hashCode);
          }

          return AdditionalResourceType::NOT_SET;
        }

        Aws::String GetNameForAdditionalResourceType(AdditionalResourceType enumValue)
        {
          switch(enumValue)
          {
          case AdditionalResourceType::NOT_SET:
            return {};
          case AdditionalResourceType::HELPFUL_RESOURCE:
            return "HELPFUL_RESOURCE";
          case AdditionalResourceType::IMPROVEMENT_PLAN:
            return "IMPROVEMENT_PLAN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AdditionalResourceTypeMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
