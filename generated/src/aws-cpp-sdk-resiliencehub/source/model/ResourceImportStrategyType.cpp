/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ResourceImportStrategyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResilienceHub
  {
    namespace Model
    {
      namespace ResourceImportStrategyTypeMapper
      {

        static const int AddOnly_HASH = HashingUtils::HashString("AddOnly");
        static const int ReplaceAll_HASH = HashingUtils::HashString("ReplaceAll");


        ResourceImportStrategyType GetResourceImportStrategyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AddOnly_HASH)
          {
            return ResourceImportStrategyType::AddOnly;
          }
          else if (hashCode == ReplaceAll_HASH)
          {
            return ResourceImportStrategyType::ReplaceAll;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceImportStrategyType>(hashCode);
          }

          return ResourceImportStrategyType::NOT_SET;
        }

        Aws::String GetNameForResourceImportStrategyType(ResourceImportStrategyType enumValue)
        {
          switch(enumValue)
          {
          case ResourceImportStrategyType::NOT_SET:
            return {};
          case ResourceImportStrategyType::AddOnly:
            return "AddOnly";
          case ResourceImportStrategyType::ReplaceAll:
            return "ReplaceAll";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceImportStrategyTypeMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
