/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ResourceResolutionStatusType.h>
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
      namespace ResourceResolutionStatusTypeMapper
      {

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Success_HASH = HashingUtils::HashString("Success");


        ResourceResolutionStatusType GetResourceResolutionStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return ResourceResolutionStatusType::Pending;
          }
          else if (hashCode == InProgress_HASH)
          {
            return ResourceResolutionStatusType::InProgress;
          }
          else if (hashCode == Failed_HASH)
          {
            return ResourceResolutionStatusType::Failed;
          }
          else if (hashCode == Success_HASH)
          {
            return ResourceResolutionStatusType::Success;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceResolutionStatusType>(hashCode);
          }

          return ResourceResolutionStatusType::NOT_SET;
        }

        Aws::String GetNameForResourceResolutionStatusType(ResourceResolutionStatusType enumValue)
        {
          switch(enumValue)
          {
          case ResourceResolutionStatusType::NOT_SET:
            return {};
          case ResourceResolutionStatusType::Pending:
            return "Pending";
          case ResourceResolutionStatusType::InProgress:
            return "InProgress";
          case ResourceResolutionStatusType::Failed:
            return "Failed";
          case ResourceResolutionStatusType::Success:
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

      } // namespace ResourceResolutionStatusTypeMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
