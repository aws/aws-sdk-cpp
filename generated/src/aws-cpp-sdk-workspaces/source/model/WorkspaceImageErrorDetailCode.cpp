/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/WorkspaceImageErrorDetailCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace WorkspaceImageErrorDetailCodeMapper
      {

        static constexpr uint32_t OutdatedPowershellVersion_HASH = ConstExprHashingUtils::HashString("OutdatedPowershellVersion");
        static constexpr uint32_t OfficeInstalled_HASH = ConstExprHashingUtils::HashString("OfficeInstalled");
        static constexpr uint32_t PCoIPAgentInstalled_HASH = ConstExprHashingUtils::HashString("PCoIPAgentInstalled");
        static constexpr uint32_t WindowsUpdatesEnabled_HASH = ConstExprHashingUtils::HashString("WindowsUpdatesEnabled");
        static constexpr uint32_t AutoMountDisabled_HASH = ConstExprHashingUtils::HashString("AutoMountDisabled");
        static constexpr uint32_t WorkspacesBYOLAccountNotFound_HASH = ConstExprHashingUtils::HashString("WorkspacesBYOLAccountNotFound");
        static constexpr uint32_t WorkspacesBYOLAccountDisabled_HASH = ConstExprHashingUtils::HashString("WorkspacesBYOLAccountDisabled");
        static constexpr uint32_t DHCPDisabled_HASH = ConstExprHashingUtils::HashString("DHCPDisabled");
        static constexpr uint32_t DiskFreeSpace_HASH = ConstExprHashingUtils::HashString("DiskFreeSpace");
        static constexpr uint32_t AdditionalDrivesAttached_HASH = ConstExprHashingUtils::HashString("AdditionalDrivesAttached");
        static constexpr uint32_t OSNotSupported_HASH = ConstExprHashingUtils::HashString("OSNotSupported");
        static constexpr uint32_t DomainJoined_HASH = ConstExprHashingUtils::HashString("DomainJoined");
        static constexpr uint32_t AzureDomainJoined_HASH = ConstExprHashingUtils::HashString("AzureDomainJoined");
        static constexpr uint32_t FirewallEnabled_HASH = ConstExprHashingUtils::HashString("FirewallEnabled");
        static constexpr uint32_t VMWareToolsInstalled_HASH = ConstExprHashingUtils::HashString("VMWareToolsInstalled");
        static constexpr uint32_t DiskSizeExceeded_HASH = ConstExprHashingUtils::HashString("DiskSizeExceeded");
        static constexpr uint32_t IncompatiblePartitioning_HASH = ConstExprHashingUtils::HashString("IncompatiblePartitioning");
        static constexpr uint32_t PendingReboot_HASH = ConstExprHashingUtils::HashString("PendingReboot");
        static constexpr uint32_t AutoLogonEnabled_HASH = ConstExprHashingUtils::HashString("AutoLogonEnabled");
        static constexpr uint32_t RealTimeUniversalDisabled_HASH = ConstExprHashingUtils::HashString("RealTimeUniversalDisabled");
        static constexpr uint32_t MultipleBootPartition_HASH = ConstExprHashingUtils::HashString("MultipleBootPartition");
        static constexpr uint32_t Requires64BitOS_HASH = ConstExprHashingUtils::HashString("Requires64BitOS");
        static constexpr uint32_t ZeroRearmCount_HASH = ConstExprHashingUtils::HashString("ZeroRearmCount");
        static constexpr uint32_t InPlaceUpgrade_HASH = ConstExprHashingUtils::HashString("InPlaceUpgrade");
        static constexpr uint32_t AntiVirusInstalled_HASH = ConstExprHashingUtils::HashString("AntiVirusInstalled");
        static constexpr uint32_t UEFINotSupported_HASH = ConstExprHashingUtils::HashString("UEFINotSupported");


        WorkspaceImageErrorDetailCode GetWorkspaceImageErrorDetailCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OutdatedPowershellVersion_HASH)
          {
            return WorkspaceImageErrorDetailCode::OutdatedPowershellVersion;
          }
          else if (hashCode == OfficeInstalled_HASH)
          {
            return WorkspaceImageErrorDetailCode::OfficeInstalled;
          }
          else if (hashCode == PCoIPAgentInstalled_HASH)
          {
            return WorkspaceImageErrorDetailCode::PCoIPAgentInstalled;
          }
          else if (hashCode == WindowsUpdatesEnabled_HASH)
          {
            return WorkspaceImageErrorDetailCode::WindowsUpdatesEnabled;
          }
          else if (hashCode == AutoMountDisabled_HASH)
          {
            return WorkspaceImageErrorDetailCode::AutoMountDisabled;
          }
          else if (hashCode == WorkspacesBYOLAccountNotFound_HASH)
          {
            return WorkspaceImageErrorDetailCode::WorkspacesBYOLAccountNotFound;
          }
          else if (hashCode == WorkspacesBYOLAccountDisabled_HASH)
          {
            return WorkspaceImageErrorDetailCode::WorkspacesBYOLAccountDisabled;
          }
          else if (hashCode == DHCPDisabled_HASH)
          {
            return WorkspaceImageErrorDetailCode::DHCPDisabled;
          }
          else if (hashCode == DiskFreeSpace_HASH)
          {
            return WorkspaceImageErrorDetailCode::DiskFreeSpace;
          }
          else if (hashCode == AdditionalDrivesAttached_HASH)
          {
            return WorkspaceImageErrorDetailCode::AdditionalDrivesAttached;
          }
          else if (hashCode == OSNotSupported_HASH)
          {
            return WorkspaceImageErrorDetailCode::OSNotSupported;
          }
          else if (hashCode == DomainJoined_HASH)
          {
            return WorkspaceImageErrorDetailCode::DomainJoined;
          }
          else if (hashCode == AzureDomainJoined_HASH)
          {
            return WorkspaceImageErrorDetailCode::AzureDomainJoined;
          }
          else if (hashCode == FirewallEnabled_HASH)
          {
            return WorkspaceImageErrorDetailCode::FirewallEnabled;
          }
          else if (hashCode == VMWareToolsInstalled_HASH)
          {
            return WorkspaceImageErrorDetailCode::VMWareToolsInstalled;
          }
          else if (hashCode == DiskSizeExceeded_HASH)
          {
            return WorkspaceImageErrorDetailCode::DiskSizeExceeded;
          }
          else if (hashCode == IncompatiblePartitioning_HASH)
          {
            return WorkspaceImageErrorDetailCode::IncompatiblePartitioning;
          }
          else if (hashCode == PendingReboot_HASH)
          {
            return WorkspaceImageErrorDetailCode::PendingReboot;
          }
          else if (hashCode == AutoLogonEnabled_HASH)
          {
            return WorkspaceImageErrorDetailCode::AutoLogonEnabled;
          }
          else if (hashCode == RealTimeUniversalDisabled_HASH)
          {
            return WorkspaceImageErrorDetailCode::RealTimeUniversalDisabled;
          }
          else if (hashCode == MultipleBootPartition_HASH)
          {
            return WorkspaceImageErrorDetailCode::MultipleBootPartition;
          }
          else if (hashCode == Requires64BitOS_HASH)
          {
            return WorkspaceImageErrorDetailCode::Requires64BitOS;
          }
          else if (hashCode == ZeroRearmCount_HASH)
          {
            return WorkspaceImageErrorDetailCode::ZeroRearmCount;
          }
          else if (hashCode == InPlaceUpgrade_HASH)
          {
            return WorkspaceImageErrorDetailCode::InPlaceUpgrade;
          }
          else if (hashCode == AntiVirusInstalled_HASH)
          {
            return WorkspaceImageErrorDetailCode::AntiVirusInstalled;
          }
          else if (hashCode == UEFINotSupported_HASH)
          {
            return WorkspaceImageErrorDetailCode::UEFINotSupported;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkspaceImageErrorDetailCode>(hashCode);
          }

          return WorkspaceImageErrorDetailCode::NOT_SET;
        }

        Aws::String GetNameForWorkspaceImageErrorDetailCode(WorkspaceImageErrorDetailCode enumValue)
        {
          switch(enumValue)
          {
          case WorkspaceImageErrorDetailCode::NOT_SET:
            return {};
          case WorkspaceImageErrorDetailCode::OutdatedPowershellVersion:
            return "OutdatedPowershellVersion";
          case WorkspaceImageErrorDetailCode::OfficeInstalled:
            return "OfficeInstalled";
          case WorkspaceImageErrorDetailCode::PCoIPAgentInstalled:
            return "PCoIPAgentInstalled";
          case WorkspaceImageErrorDetailCode::WindowsUpdatesEnabled:
            return "WindowsUpdatesEnabled";
          case WorkspaceImageErrorDetailCode::AutoMountDisabled:
            return "AutoMountDisabled";
          case WorkspaceImageErrorDetailCode::WorkspacesBYOLAccountNotFound:
            return "WorkspacesBYOLAccountNotFound";
          case WorkspaceImageErrorDetailCode::WorkspacesBYOLAccountDisabled:
            return "WorkspacesBYOLAccountDisabled";
          case WorkspaceImageErrorDetailCode::DHCPDisabled:
            return "DHCPDisabled";
          case WorkspaceImageErrorDetailCode::DiskFreeSpace:
            return "DiskFreeSpace";
          case WorkspaceImageErrorDetailCode::AdditionalDrivesAttached:
            return "AdditionalDrivesAttached";
          case WorkspaceImageErrorDetailCode::OSNotSupported:
            return "OSNotSupported";
          case WorkspaceImageErrorDetailCode::DomainJoined:
            return "DomainJoined";
          case WorkspaceImageErrorDetailCode::AzureDomainJoined:
            return "AzureDomainJoined";
          case WorkspaceImageErrorDetailCode::FirewallEnabled:
            return "FirewallEnabled";
          case WorkspaceImageErrorDetailCode::VMWareToolsInstalled:
            return "VMWareToolsInstalled";
          case WorkspaceImageErrorDetailCode::DiskSizeExceeded:
            return "DiskSizeExceeded";
          case WorkspaceImageErrorDetailCode::IncompatiblePartitioning:
            return "IncompatiblePartitioning";
          case WorkspaceImageErrorDetailCode::PendingReboot:
            return "PendingReboot";
          case WorkspaceImageErrorDetailCode::AutoLogonEnabled:
            return "AutoLogonEnabled";
          case WorkspaceImageErrorDetailCode::RealTimeUniversalDisabled:
            return "RealTimeUniversalDisabled";
          case WorkspaceImageErrorDetailCode::MultipleBootPartition:
            return "MultipleBootPartition";
          case WorkspaceImageErrorDetailCode::Requires64BitOS:
            return "Requires64BitOS";
          case WorkspaceImageErrorDetailCode::ZeroRearmCount:
            return "ZeroRearmCount";
          case WorkspaceImageErrorDetailCode::InPlaceUpgrade:
            return "InPlaceUpgrade";
          case WorkspaceImageErrorDetailCode::AntiVirusInstalled:
            return "AntiVirusInstalled";
          case WorkspaceImageErrorDetailCode::UEFINotSupported:
            return "UEFINotSupported";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkspaceImageErrorDetailCodeMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
