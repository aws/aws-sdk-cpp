/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ResourceCategory.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace ResourceCategoryMapper
      {

        static const int Compute_HASH = HashingUtils::HashString("Compute");
        static const int Database_HASH = HashingUtils::HashString("Database");
        static const int Storage_HASH = HashingUtils::HashString("Storage");
        static const int Code_HASH = HashingUtils::HashString("Code");
        static const int AI_ML_HASH = HashingUtils::HashString("AI/ML");
        static const int Identity_HASH = HashingUtils::HashString("Identity");
        static const int Network_HASH = HashingUtils::HashString("Network");
        static const int Other_HASH = HashingUtils::HashString("Other");


        ResourceCategory GetResourceCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Compute_HASH)
          {
            return ResourceCategory::Compute;
          }
          else if (hashCode == Database_HASH)
          {
            return ResourceCategory::Database;
          }
          else if (hashCode == Storage_HASH)
          {
            return ResourceCategory::Storage;
          }
          else if (hashCode == Code_HASH)
          {
            return ResourceCategory::Code;
          }
          else if (hashCode == AI_ML_HASH)
          {
            return ResourceCategory::AI_ML;
          }
          else if (hashCode == Identity_HASH)
          {
            return ResourceCategory::Identity;
          }
          else if (hashCode == Network_HASH)
          {
            return ResourceCategory::Network;
          }
          else if (hashCode == Other_HASH)
          {
            return ResourceCategory::Other;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceCategory>(hashCode);
          }

          return ResourceCategory::NOT_SET;
        }

        Aws::String GetNameForResourceCategory(ResourceCategory enumValue)
        {
          switch(enumValue)
          {
          case ResourceCategory::NOT_SET:
            return {};
          case ResourceCategory::Compute:
            return "Compute";
          case ResourceCategory::Database:
            return "Database";
          case ResourceCategory::Storage:
            return "Storage";
          case ResourceCategory::Code:
            return "Code";
          case ResourceCategory::AI_ML:
            return "AI/ML";
          case ResourceCategory::Identity:
            return "Identity";
          case ResourceCategory::Network:
            return "Network";
          case ResourceCategory::Other:
            return "Other";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceCategoryMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
