/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/ServerOsType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MigrationHubStrategyRecommendations
  {
    namespace Model
    {
      namespace ServerOsTypeMapper
      {

        static constexpr uint32_t WindowsServer_HASH = ConstExprHashingUtils::HashString("WindowsServer");
        static constexpr uint32_t AmazonLinux_HASH = ConstExprHashingUtils::HashString("AmazonLinux");
        static constexpr uint32_t EndOfSupportWindowsServer_HASH = ConstExprHashingUtils::HashString("EndOfSupportWindowsServer");
        static constexpr uint32_t Redhat_HASH = ConstExprHashingUtils::HashString("Redhat");
        static constexpr uint32_t Other_HASH = ConstExprHashingUtils::HashString("Other");


        ServerOsType GetServerOsTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WindowsServer_HASH)
          {
            return ServerOsType::WindowsServer;
          }
          else if (hashCode == AmazonLinux_HASH)
          {
            return ServerOsType::AmazonLinux;
          }
          else if (hashCode == EndOfSupportWindowsServer_HASH)
          {
            return ServerOsType::EndOfSupportWindowsServer;
          }
          else if (hashCode == Redhat_HASH)
          {
            return ServerOsType::Redhat;
          }
          else if (hashCode == Other_HASH)
          {
            return ServerOsType::Other;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServerOsType>(hashCode);
          }

          return ServerOsType::NOT_SET;
        }

        Aws::String GetNameForServerOsType(ServerOsType enumValue)
        {
          switch(enumValue)
          {
          case ServerOsType::NOT_SET:
            return {};
          case ServerOsType::WindowsServer:
            return "WindowsServer";
          case ServerOsType::AmazonLinux:
            return "AmazonLinux";
          case ServerOsType::EndOfSupportWindowsServer:
            return "EndOfSupportWindowsServer";
          case ServerOsType::Redhat:
            return "Redhat";
          case ServerOsType::Other:
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

      } // namespace ServerOsTypeMapper
    } // namespace Model
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
