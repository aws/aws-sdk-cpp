/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ResourceImportStatusType.h>
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
      namespace ResourceImportStatusTypeMapper
      {

        static constexpr uint32_t Pending_HASH = ConstExprHashingUtils::HashString("Pending");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Success_HASH = ConstExprHashingUtils::HashString("Success");


        ResourceImportStatusType GetResourceImportStatusTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return ResourceImportStatusType::Pending;
          }
          else if (hashCode == InProgress_HASH)
          {
            return ResourceImportStatusType::InProgress;
          }
          else if (hashCode == Failed_HASH)
          {
            return ResourceImportStatusType::Failed;
          }
          else if (hashCode == Success_HASH)
          {
            return ResourceImportStatusType::Success;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceImportStatusType>(hashCode);
          }

          return ResourceImportStatusType::NOT_SET;
        }

        Aws::String GetNameForResourceImportStatusType(ResourceImportStatusType enumValue)
        {
          switch(enumValue)
          {
          case ResourceImportStatusType::NOT_SET:
            return {};
          case ResourceImportStatusType::Pending:
            return "Pending";
          case ResourceImportStatusType::InProgress:
            return "InProgress";
          case ResourceImportStatusType::Failed:
            return "Failed";
          case ResourceImportStatusType::Success:
            return "Success";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceImportStatusTypeMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
