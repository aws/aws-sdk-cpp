/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/ResourceShareAssociationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RAM
  {
    namespace Model
    {
      namespace ResourceShareAssociationStatusMapper
      {

        static constexpr uint32_t ASSOCIATING_HASH = ConstExprHashingUtils::HashString("ASSOCIATING");
        static constexpr uint32_t ASSOCIATED_HASH = ConstExprHashingUtils::HashString("ASSOCIATED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t DISASSOCIATING_HASH = ConstExprHashingUtils::HashString("DISASSOCIATING");
        static constexpr uint32_t DISASSOCIATED_HASH = ConstExprHashingUtils::HashString("DISASSOCIATED");


        ResourceShareAssociationStatus GetResourceShareAssociationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASSOCIATING_HASH)
          {
            return ResourceShareAssociationStatus::ASSOCIATING;
          }
          else if (hashCode == ASSOCIATED_HASH)
          {
            return ResourceShareAssociationStatus::ASSOCIATED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ResourceShareAssociationStatus::FAILED;
          }
          else if (hashCode == DISASSOCIATING_HASH)
          {
            return ResourceShareAssociationStatus::DISASSOCIATING;
          }
          else if (hashCode == DISASSOCIATED_HASH)
          {
            return ResourceShareAssociationStatus::DISASSOCIATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceShareAssociationStatus>(hashCode);
          }

          return ResourceShareAssociationStatus::NOT_SET;
        }

        Aws::String GetNameForResourceShareAssociationStatus(ResourceShareAssociationStatus enumValue)
        {
          switch(enumValue)
          {
          case ResourceShareAssociationStatus::NOT_SET:
            return {};
          case ResourceShareAssociationStatus::ASSOCIATING:
            return "ASSOCIATING";
          case ResourceShareAssociationStatus::ASSOCIATED:
            return "ASSOCIATED";
          case ResourceShareAssociationStatus::FAILED:
            return "FAILED";
          case ResourceShareAssociationStatus::DISASSOCIATING:
            return "DISASSOCIATING";
          case ResourceShareAssociationStatus::DISASSOCIATED:
            return "DISASSOCIATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceShareAssociationStatusMapper
    } // namespace Model
  } // namespace RAM
} // namespace Aws
