/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/OperatingSystem.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace OperatingSystemMapper
      {

        static constexpr uint32_t WINDOWS_HASH = ConstExprHashingUtils::HashString("WINDOWS");
        static constexpr uint32_t AMAZON_LINUX_HASH = ConstExprHashingUtils::HashString("AMAZON_LINUX");
        static constexpr uint32_t AMAZON_LINUX_2_HASH = ConstExprHashingUtils::HashString("AMAZON_LINUX_2");
        static constexpr uint32_t AMAZON_LINUX_2022_HASH = ConstExprHashingUtils::HashString("AMAZON_LINUX_2022");
        static constexpr uint32_t UBUNTU_HASH = ConstExprHashingUtils::HashString("UBUNTU");
        static constexpr uint32_t REDHAT_ENTERPRISE_LINUX_HASH = ConstExprHashingUtils::HashString("REDHAT_ENTERPRISE_LINUX");
        static constexpr uint32_t SUSE_HASH = ConstExprHashingUtils::HashString("SUSE");
        static constexpr uint32_t CENTOS_HASH = ConstExprHashingUtils::HashString("CENTOS");
        static constexpr uint32_t ORACLE_LINUX_HASH = ConstExprHashingUtils::HashString("ORACLE_LINUX");
        static constexpr uint32_t DEBIAN_HASH = ConstExprHashingUtils::HashString("DEBIAN");
        static constexpr uint32_t MACOS_HASH = ConstExprHashingUtils::HashString("MACOS");
        static constexpr uint32_t RASPBIAN_HASH = ConstExprHashingUtils::HashString("RASPBIAN");
        static constexpr uint32_t ROCKY_LINUX_HASH = ConstExprHashingUtils::HashString("ROCKY_LINUX");
        static constexpr uint32_t ALMA_LINUX_HASH = ConstExprHashingUtils::HashString("ALMA_LINUX");
        static constexpr uint32_t AMAZON_LINUX_2023_HASH = ConstExprHashingUtils::HashString("AMAZON_LINUX_2023");


        OperatingSystem GetOperatingSystemForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WINDOWS_HASH)
          {
            return OperatingSystem::WINDOWS;
          }
          else if (hashCode == AMAZON_LINUX_HASH)
          {
            return OperatingSystem::AMAZON_LINUX;
          }
          else if (hashCode == AMAZON_LINUX_2_HASH)
          {
            return OperatingSystem::AMAZON_LINUX_2;
          }
          else if (hashCode == AMAZON_LINUX_2022_HASH)
          {
            return OperatingSystem::AMAZON_LINUX_2022;
          }
          else if (hashCode == UBUNTU_HASH)
          {
            return OperatingSystem::UBUNTU;
          }
          else if (hashCode == REDHAT_ENTERPRISE_LINUX_HASH)
          {
            return OperatingSystem::REDHAT_ENTERPRISE_LINUX;
          }
          else if (hashCode == SUSE_HASH)
          {
            return OperatingSystem::SUSE;
          }
          else if (hashCode == CENTOS_HASH)
          {
            return OperatingSystem::CENTOS;
          }
          else if (hashCode == ORACLE_LINUX_HASH)
          {
            return OperatingSystem::ORACLE_LINUX;
          }
          else if (hashCode == DEBIAN_HASH)
          {
            return OperatingSystem::DEBIAN;
          }
          else if (hashCode == MACOS_HASH)
          {
            return OperatingSystem::MACOS;
          }
          else if (hashCode == RASPBIAN_HASH)
          {
            return OperatingSystem::RASPBIAN;
          }
          else if (hashCode == ROCKY_LINUX_HASH)
          {
            return OperatingSystem::ROCKY_LINUX;
          }
          else if (hashCode == ALMA_LINUX_HASH)
          {
            return OperatingSystem::ALMA_LINUX;
          }
          else if (hashCode == AMAZON_LINUX_2023_HASH)
          {
            return OperatingSystem::AMAZON_LINUX_2023;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OperatingSystem>(hashCode);
          }

          return OperatingSystem::NOT_SET;
        }

        Aws::String GetNameForOperatingSystem(OperatingSystem enumValue)
        {
          switch(enumValue)
          {
          case OperatingSystem::NOT_SET:
            return {};
          case OperatingSystem::WINDOWS:
            return "WINDOWS";
          case OperatingSystem::AMAZON_LINUX:
            return "AMAZON_LINUX";
          case OperatingSystem::AMAZON_LINUX_2:
            return "AMAZON_LINUX_2";
          case OperatingSystem::AMAZON_LINUX_2022:
            return "AMAZON_LINUX_2022";
          case OperatingSystem::UBUNTU:
            return "UBUNTU";
          case OperatingSystem::REDHAT_ENTERPRISE_LINUX:
            return "REDHAT_ENTERPRISE_LINUX";
          case OperatingSystem::SUSE:
            return "SUSE";
          case OperatingSystem::CENTOS:
            return "CENTOS";
          case OperatingSystem::ORACLE_LINUX:
            return "ORACLE_LINUX";
          case OperatingSystem::DEBIAN:
            return "DEBIAN";
          case OperatingSystem::MACOS:
            return "MACOS";
          case OperatingSystem::RASPBIAN:
            return "RASPBIAN";
          case OperatingSystem::ROCKY_LINUX:
            return "ROCKY_LINUX";
          case OperatingSystem::ALMA_LINUX:
            return "ALMA_LINUX";
          case OperatingSystem::AMAZON_LINUX_2023:
            return "AMAZON_LINUX_2023";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OperatingSystemMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
