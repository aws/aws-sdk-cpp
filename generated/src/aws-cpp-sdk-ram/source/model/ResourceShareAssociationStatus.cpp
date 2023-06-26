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

        static const int ASSOCIATING_HASH = HashingUtils::HashString("ASSOCIATING");
        static const int ASSOCIATED_HASH = HashingUtils::HashString("ASSOCIATED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int DISASSOCIATING_HASH = HashingUtils::HashString("DISASSOCIATING");
        static const int DISASSOCIATED_HASH = HashingUtils::HashString("DISASSOCIATED");


        ResourceShareAssociationStatus GetResourceShareAssociationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
