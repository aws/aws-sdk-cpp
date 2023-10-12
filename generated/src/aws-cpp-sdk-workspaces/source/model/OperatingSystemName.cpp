/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/OperatingSystemName.h>
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
      namespace OperatingSystemNameMapper
      {

        static constexpr uint32_t AMAZON_LINUX_2_HASH = ConstExprHashingUtils::HashString("AMAZON_LINUX_2");
        static constexpr uint32_t UBUNTU_18_04_HASH = ConstExprHashingUtils::HashString("UBUNTU_18_04");
        static constexpr uint32_t UBUNTU_20_04_HASH = ConstExprHashingUtils::HashString("UBUNTU_20_04");
        static constexpr uint32_t UBUNTU_22_04_HASH = ConstExprHashingUtils::HashString("UBUNTU_22_04");
        static constexpr uint32_t UNKNOWN_HASH = ConstExprHashingUtils::HashString("UNKNOWN");
        static constexpr uint32_t WINDOWS_10_HASH = ConstExprHashingUtils::HashString("WINDOWS_10");
        static constexpr uint32_t WINDOWS_11_HASH = ConstExprHashingUtils::HashString("WINDOWS_11");
        static constexpr uint32_t WINDOWS_7_HASH = ConstExprHashingUtils::HashString("WINDOWS_7");
        static constexpr uint32_t WINDOWS_SERVER_2016_HASH = ConstExprHashingUtils::HashString("WINDOWS_SERVER_2016");
        static constexpr uint32_t WINDOWS_SERVER_2019_HASH = ConstExprHashingUtils::HashString("WINDOWS_SERVER_2019");
        static constexpr uint32_t WINDOWS_SERVER_2022_HASH = ConstExprHashingUtils::HashString("WINDOWS_SERVER_2022");


        OperatingSystemName GetOperatingSystemNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AMAZON_LINUX_2_HASH)
          {
            return OperatingSystemName::AMAZON_LINUX_2;
          }
          else if (hashCode == UBUNTU_18_04_HASH)
          {
            return OperatingSystemName::UBUNTU_18_04;
          }
          else if (hashCode == UBUNTU_20_04_HASH)
          {
            return OperatingSystemName::UBUNTU_20_04;
          }
          else if (hashCode == UBUNTU_22_04_HASH)
          {
            return OperatingSystemName::UBUNTU_22_04;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return OperatingSystemName::UNKNOWN;
          }
          else if (hashCode == WINDOWS_10_HASH)
          {
            return OperatingSystemName::WINDOWS_10;
          }
          else if (hashCode == WINDOWS_11_HASH)
          {
            return OperatingSystemName::WINDOWS_11;
          }
          else if (hashCode == WINDOWS_7_HASH)
          {
            return OperatingSystemName::WINDOWS_7;
          }
          else if (hashCode == WINDOWS_SERVER_2016_HASH)
          {
            return OperatingSystemName::WINDOWS_SERVER_2016;
          }
          else if (hashCode == WINDOWS_SERVER_2019_HASH)
          {
            return OperatingSystemName::WINDOWS_SERVER_2019;
          }
          else if (hashCode == WINDOWS_SERVER_2022_HASH)
          {
            return OperatingSystemName::WINDOWS_SERVER_2022;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OperatingSystemName>(hashCode);
          }

          return OperatingSystemName::NOT_SET;
        }

        Aws::String GetNameForOperatingSystemName(OperatingSystemName enumValue)
        {
          switch(enumValue)
          {
          case OperatingSystemName::NOT_SET:
            return {};
          case OperatingSystemName::AMAZON_LINUX_2:
            return "AMAZON_LINUX_2";
          case OperatingSystemName::UBUNTU_18_04:
            return "UBUNTU_18_04";
          case OperatingSystemName::UBUNTU_20_04:
            return "UBUNTU_20_04";
          case OperatingSystemName::UBUNTU_22_04:
            return "UBUNTU_22_04";
          case OperatingSystemName::UNKNOWN:
            return "UNKNOWN";
          case OperatingSystemName::WINDOWS_10:
            return "WINDOWS_10";
          case OperatingSystemName::WINDOWS_11:
            return "WINDOWS_11";
          case OperatingSystemName::WINDOWS_7:
            return "WINDOWS_7";
          case OperatingSystemName::WINDOWS_SERVER_2016:
            return "WINDOWS_SERVER_2016";
          case OperatingSystemName::WINDOWS_SERVER_2019:
            return "WINDOWS_SERVER_2019";
          case OperatingSystemName::WINDOWS_SERVER_2022:
            return "WINDOWS_SERVER_2022";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OperatingSystemNameMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
