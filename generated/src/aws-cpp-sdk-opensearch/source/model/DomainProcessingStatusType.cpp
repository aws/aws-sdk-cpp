/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/DomainProcessingStatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchService
  {
    namespace Model
    {
      namespace DomainProcessingStatusTypeMapper
      {

        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Modifying_HASH = HashingUtils::HashString("Modifying");
        static const int UpgradingEngineVersion_HASH = HashingUtils::HashString("UpgradingEngineVersion");
        static const int UpdatingServiceSoftware_HASH = HashingUtils::HashString("UpdatingServiceSoftware");
        static const int Isolated_HASH = HashingUtils::HashString("Isolated");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");


        DomainProcessingStatusType GetDomainProcessingStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Creating_HASH)
          {
            return DomainProcessingStatusType::Creating;
          }
          else if (hashCode == Active_HASH)
          {
            return DomainProcessingStatusType::Active;
          }
          else if (hashCode == Modifying_HASH)
          {
            return DomainProcessingStatusType::Modifying;
          }
          else if (hashCode == UpgradingEngineVersion_HASH)
          {
            return DomainProcessingStatusType::UpgradingEngineVersion;
          }
          else if (hashCode == UpdatingServiceSoftware_HASH)
          {
            return DomainProcessingStatusType::UpdatingServiceSoftware;
          }
          else if (hashCode == Isolated_HASH)
          {
            return DomainProcessingStatusType::Isolated;
          }
          else if (hashCode == Deleting_HASH)
          {
            return DomainProcessingStatusType::Deleting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DomainProcessingStatusType>(hashCode);
          }

          return DomainProcessingStatusType::NOT_SET;
        }

        Aws::String GetNameForDomainProcessingStatusType(DomainProcessingStatusType enumValue)
        {
          switch(enumValue)
          {
          case DomainProcessingStatusType::NOT_SET:
            return {};
          case DomainProcessingStatusType::Creating:
            return "Creating";
          case DomainProcessingStatusType::Active:
            return "Active";
          case DomainProcessingStatusType::Modifying:
            return "Modifying";
          case DomainProcessingStatusType::UpgradingEngineVersion:
            return "UpgradingEngineVersion";
          case DomainProcessingStatusType::UpdatingServiceSoftware:
            return "UpdatingServiceSoftware";
          case DomainProcessingStatusType::Isolated:
            return "Isolated";
          case DomainProcessingStatusType::Deleting:
            return "Deleting";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DomainProcessingStatusTypeMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
