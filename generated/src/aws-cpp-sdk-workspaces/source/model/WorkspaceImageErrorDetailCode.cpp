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

        static const int OutdatedPowershellVersion_HASH = HashingUtils::HashString("OutdatedPowershellVersion");
        static const int OfficeInstalled_HASH = HashingUtils::HashString("OfficeInstalled");
        static const int PCoIPAgentInstalled_HASH = HashingUtils::HashString("PCoIPAgentInstalled");
        static const int WindowsUpdatesEnabled_HASH = HashingUtils::HashString("WindowsUpdatesEnabled");
        static const int AutoMountDisabled_HASH = HashingUtils::HashString("AutoMountDisabled");
        static const int WorkspacesBYOLAccountNotFound_HASH = HashingUtils::HashString("WorkspacesBYOLAccountNotFound");
        static const int WorkspacesBYOLAccountDisabled_HASH = HashingUtils::HashString("WorkspacesBYOLAccountDisabled");
        static const int DHCPDisabled_HASH = HashingUtils::HashString("DHCPDisabled");
        static const int DiskFreeSpace_HASH = HashingUtils::HashString("DiskFreeSpace");
        static const int AdditionalDrivesAttached_HASH = HashingUtils::HashString("AdditionalDrivesAttached");
        static const int OSNotSupported_HASH = HashingUtils::HashString("OSNotSupported");
        static const int DomainJoined_HASH = HashingUtils::HashString("DomainJoined");
        static const int AzureDomainJoined_HASH = HashingUtils::HashString("AzureDomainJoined");
        static const int FirewallEnabled_HASH = HashingUtils::HashString("FirewallEnabled");
        static const int VMWareToolsInstalled_HASH = HashingUtils::HashString("VMWareToolsInstalled");
        static const int DiskSizeExceeded_HASH = HashingUtils::HashString("DiskSizeExceeded");
        static const int IncompatiblePartitioning_HASH = HashingUtils::HashString("IncompatiblePartitioning");
        static const int PendingReboot_HASH = HashingUtils::HashString("PendingReboot");
        static const int AutoLogonEnabled_HASH = HashingUtils::HashString("AutoLogonEnabled");
        static const int RealTimeUniversalDisabled_HASH = HashingUtils::HashString("RealTimeUniversalDisabled");
        static const int MultipleBootPartition_HASH = HashingUtils::HashString("MultipleBootPartition");
        static const int Requires64BitOS_HASH = HashingUtils::HashString("Requires64BitOS");
        static const int ZeroRearmCount_HASH = HashingUtils::HashString("ZeroRearmCount");
        static const int InPlaceUpgrade_HASH = HashingUtils::HashString("InPlaceUpgrade");
        static const int AntiVirusInstalled_HASH = HashingUtils::HashString("AntiVirusInstalled");
        static const int UEFINotSupported_HASH = HashingUtils::HashString("UEFINotSupported");
        static const int UnknownError_HASH = HashingUtils::HashString("UnknownError");
        static const int AppXPackagesInstalled_HASH = HashingUtils::HashString("AppXPackagesInstalled");
        static const int ReservedStorageInUse_HASH = HashingUtils::HashString("ReservedStorageInUse");
        static const int AdditionalDrivesPresent_HASH = HashingUtils::HashString("AdditionalDrivesPresent");
        static const int WindowsUpdatesRequired_HASH = HashingUtils::HashString("WindowsUpdatesRequired");
        static const int SysPrepFileMissing_HASH = HashingUtils::HashString("SysPrepFileMissing");
        static const int UserProfileMissing_HASH = HashingUtils::HashString("UserProfileMissing");
        static const int InsufficientDiskSpace_HASH = HashingUtils::HashString("InsufficientDiskSpace");
        static const int EnvironmentVariablesPathMissingEntries_HASH = HashingUtils::HashString("EnvironmentVariablesPathMissingEntries");
        static const int DomainAccountServicesFound_HASH = HashingUtils::HashString("DomainAccountServicesFound");
        static const int InvalidIp_HASH = HashingUtils::HashString("InvalidIp");
        static const int RemoteDesktopServicesDisabled_HASH = HashingUtils::HashString("RemoteDesktopServicesDisabled");
        static const int WindowsModulesInstallerDisabled_HASH = HashingUtils::HashString("WindowsModulesInstallerDisabled");
        static const int AmazonSsmAgentEnabled_HASH = HashingUtils::HashString("AmazonSsmAgentEnabled");
        static const int UnsupportedSecurityProtocol_HASH = HashingUtils::HashString("UnsupportedSecurityProtocol");
        static const int MultipleUserProfiles_HASH = HashingUtils::HashString("MultipleUserProfiles");
        static const int StagedAppxPackage_HASH = HashingUtils::HashString("StagedAppxPackage");
        static const int UnsupportedOsUpgrade_HASH = HashingUtils::HashString("UnsupportedOsUpgrade");
        static const int InsufficientRearmCount_HASH = HashingUtils::HashString("InsufficientRearmCount");
        static const int ProtocolOSIncompatibility_HASH = HashingUtils::HashString("ProtocolOSIncompatibility");
        static const int MemoryIntegrityIncompatibility_HASH = HashingUtils::HashString("MemoryIntegrityIncompatibility");
        static const int RestrictedDriveLetterInUse_HASH = HashingUtils::HashString("RestrictedDriveLetterInUse");


        WorkspaceImageErrorDetailCode GetWorkspaceImageErrorDetailCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == UnknownError_HASH)
          {
            return WorkspaceImageErrorDetailCode::UnknownError;
          }
          else if (hashCode == AppXPackagesInstalled_HASH)
          {
            return WorkspaceImageErrorDetailCode::AppXPackagesInstalled;
          }
          else if (hashCode == ReservedStorageInUse_HASH)
          {
            return WorkspaceImageErrorDetailCode::ReservedStorageInUse;
          }
          else if (hashCode == AdditionalDrivesPresent_HASH)
          {
            return WorkspaceImageErrorDetailCode::AdditionalDrivesPresent;
          }
          else if (hashCode == WindowsUpdatesRequired_HASH)
          {
            return WorkspaceImageErrorDetailCode::WindowsUpdatesRequired;
          }
          else if (hashCode == SysPrepFileMissing_HASH)
          {
            return WorkspaceImageErrorDetailCode::SysPrepFileMissing;
          }
          else if (hashCode == UserProfileMissing_HASH)
          {
            return WorkspaceImageErrorDetailCode::UserProfileMissing;
          }
          else if (hashCode == InsufficientDiskSpace_HASH)
          {
            return WorkspaceImageErrorDetailCode::InsufficientDiskSpace;
          }
          else if (hashCode == EnvironmentVariablesPathMissingEntries_HASH)
          {
            return WorkspaceImageErrorDetailCode::EnvironmentVariablesPathMissingEntries;
          }
          else if (hashCode == DomainAccountServicesFound_HASH)
          {
            return WorkspaceImageErrorDetailCode::DomainAccountServicesFound;
          }
          else if (hashCode == InvalidIp_HASH)
          {
            return WorkspaceImageErrorDetailCode::InvalidIp;
          }
          else if (hashCode == RemoteDesktopServicesDisabled_HASH)
          {
            return WorkspaceImageErrorDetailCode::RemoteDesktopServicesDisabled;
          }
          else if (hashCode == WindowsModulesInstallerDisabled_HASH)
          {
            return WorkspaceImageErrorDetailCode::WindowsModulesInstallerDisabled;
          }
          else if (hashCode == AmazonSsmAgentEnabled_HASH)
          {
            return WorkspaceImageErrorDetailCode::AmazonSsmAgentEnabled;
          }
          else if (hashCode == UnsupportedSecurityProtocol_HASH)
          {
            return WorkspaceImageErrorDetailCode::UnsupportedSecurityProtocol;
          }
          else if (hashCode == MultipleUserProfiles_HASH)
          {
            return WorkspaceImageErrorDetailCode::MultipleUserProfiles;
          }
          else if (hashCode == StagedAppxPackage_HASH)
          {
            return WorkspaceImageErrorDetailCode::StagedAppxPackage;
          }
          else if (hashCode == UnsupportedOsUpgrade_HASH)
          {
            return WorkspaceImageErrorDetailCode::UnsupportedOsUpgrade;
          }
          else if (hashCode == InsufficientRearmCount_HASH)
          {
            return WorkspaceImageErrorDetailCode::InsufficientRearmCount;
          }
          else if (hashCode == ProtocolOSIncompatibility_HASH)
          {
            return WorkspaceImageErrorDetailCode::ProtocolOSIncompatibility;
          }
          else if (hashCode == MemoryIntegrityIncompatibility_HASH)
          {
            return WorkspaceImageErrorDetailCode::MemoryIntegrityIncompatibility;
          }
          else if (hashCode == RestrictedDriveLetterInUse_HASH)
          {
            return WorkspaceImageErrorDetailCode::RestrictedDriveLetterInUse;
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
          case WorkspaceImageErrorDetailCode::UnknownError:
            return "UnknownError";
          case WorkspaceImageErrorDetailCode::AppXPackagesInstalled:
            return "AppXPackagesInstalled";
          case WorkspaceImageErrorDetailCode::ReservedStorageInUse:
            return "ReservedStorageInUse";
          case WorkspaceImageErrorDetailCode::AdditionalDrivesPresent:
            return "AdditionalDrivesPresent";
          case WorkspaceImageErrorDetailCode::WindowsUpdatesRequired:
            return "WindowsUpdatesRequired";
          case WorkspaceImageErrorDetailCode::SysPrepFileMissing:
            return "SysPrepFileMissing";
          case WorkspaceImageErrorDetailCode::UserProfileMissing:
            return "UserProfileMissing";
          case WorkspaceImageErrorDetailCode::InsufficientDiskSpace:
            return "InsufficientDiskSpace";
          case WorkspaceImageErrorDetailCode::EnvironmentVariablesPathMissingEntries:
            return "EnvironmentVariablesPathMissingEntries";
          case WorkspaceImageErrorDetailCode::DomainAccountServicesFound:
            return "DomainAccountServicesFound";
          case WorkspaceImageErrorDetailCode::InvalidIp:
            return "InvalidIp";
          case WorkspaceImageErrorDetailCode::RemoteDesktopServicesDisabled:
            return "RemoteDesktopServicesDisabled";
          case WorkspaceImageErrorDetailCode::WindowsModulesInstallerDisabled:
            return "WindowsModulesInstallerDisabled";
          case WorkspaceImageErrorDetailCode::AmazonSsmAgentEnabled:
            return "AmazonSsmAgentEnabled";
          case WorkspaceImageErrorDetailCode::UnsupportedSecurityProtocol:
            return "UnsupportedSecurityProtocol";
          case WorkspaceImageErrorDetailCode::MultipleUserProfiles:
            return "MultipleUserProfiles";
          case WorkspaceImageErrorDetailCode::StagedAppxPackage:
            return "StagedAppxPackage";
          case WorkspaceImageErrorDetailCode::UnsupportedOsUpgrade:
            return "UnsupportedOsUpgrade";
          case WorkspaceImageErrorDetailCode::InsufficientRearmCount:
            return "InsufficientRearmCount";
          case WorkspaceImageErrorDetailCode::ProtocolOSIncompatibility:
            return "ProtocolOSIncompatibility";
          case WorkspaceImageErrorDetailCode::MemoryIntegrityIncompatibility:
            return "MemoryIntegrityIncompatibility";
          case WorkspaceImageErrorDetailCode::RestrictedDriveLetterInUse:
            return "RestrictedDriveLetterInUse";
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
