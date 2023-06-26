/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   * <p> Information about the server's network for which the assessment was run.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/NetworkInfo">AWS
   * API Reference</a></p>
   */
  class NetworkInfo
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API NetworkInfo();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API NetworkInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API NetworkInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Information about the name of the interface of the server for which the
     * assessment was run. </p>
     */
    inline const Aws::String& GetInterfaceName() const{ return m_interfaceName; }

    /**
     * <p> Information about the name of the interface of the server for which the
     * assessment was run. </p>
     */
    inline bool InterfaceNameHasBeenSet() const { return m_interfaceNameHasBeenSet; }

    /**
     * <p> Information about the name of the interface of the server for which the
     * assessment was run. </p>
     */
    inline void SetInterfaceName(const Aws::String& value) { m_interfaceNameHasBeenSet = true; m_interfaceName = value; }

    /**
     * <p> Information about the name of the interface of the server for which the
     * assessment was run. </p>
     */
    inline void SetInterfaceName(Aws::String&& value) { m_interfaceNameHasBeenSet = true; m_interfaceName = std::move(value); }

    /**
     * <p> Information about the name of the interface of the server for which the
     * assessment was run. </p>
     */
    inline void SetInterfaceName(const char* value) { m_interfaceNameHasBeenSet = true; m_interfaceName.assign(value); }

    /**
     * <p> Information about the name of the interface of the server for which the
     * assessment was run. </p>
     */
    inline NetworkInfo& WithInterfaceName(const Aws::String& value) { SetInterfaceName(value); return *this;}

    /**
     * <p> Information about the name of the interface of the server for which the
     * assessment was run. </p>
     */
    inline NetworkInfo& WithInterfaceName(Aws::String&& value) { SetInterfaceName(std::move(value)); return *this;}

    /**
     * <p> Information about the name of the interface of the server for which the
     * assessment was run. </p>
     */
    inline NetworkInfo& WithInterfaceName(const char* value) { SetInterfaceName(value); return *this;}


    /**
     * <p> Information about the IP address of the server for which the assessment was
     * run. </p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p> Information about the IP address of the server for which the assessment was
     * run. </p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * <p> Information about the IP address of the server for which the assessment was
     * run. </p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p> Information about the IP address of the server for which the assessment was
     * run. </p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p> Information about the IP address of the server for which the assessment was
     * run. </p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p> Information about the IP address of the server for which the assessment was
     * run. </p>
     */
    inline NetworkInfo& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p> Information about the IP address of the server for which the assessment was
     * run. </p>
     */
    inline NetworkInfo& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p> Information about the IP address of the server for which the assessment was
     * run. </p>
     */
    inline NetworkInfo& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}


    /**
     * <p> Information about the MAC address of the server for which the assessment was
     * run. </p>
     */
    inline const Aws::String& GetMacAddress() const{ return m_macAddress; }

    /**
     * <p> Information about the MAC address of the server for which the assessment was
     * run. </p>
     */
    inline bool MacAddressHasBeenSet() const { return m_macAddressHasBeenSet; }

    /**
     * <p> Information about the MAC address of the server for which the assessment was
     * run. </p>
     */
    inline void SetMacAddress(const Aws::String& value) { m_macAddressHasBeenSet = true; m_macAddress = value; }

    /**
     * <p> Information about the MAC address of the server for which the assessment was
     * run. </p>
     */
    inline void SetMacAddress(Aws::String&& value) { m_macAddressHasBeenSet = true; m_macAddress = std::move(value); }

    /**
     * <p> Information about the MAC address of the server for which the assessment was
     * run. </p>
     */
    inline void SetMacAddress(const char* value) { m_macAddressHasBeenSet = true; m_macAddress.assign(value); }

    /**
     * <p> Information about the MAC address of the server for which the assessment was
     * run. </p>
     */
    inline NetworkInfo& WithMacAddress(const Aws::String& value) { SetMacAddress(value); return *this;}

    /**
     * <p> Information about the MAC address of the server for which the assessment was
     * run. </p>
     */
    inline NetworkInfo& WithMacAddress(Aws::String&& value) { SetMacAddress(std::move(value)); return *this;}

    /**
     * <p> Information about the MAC address of the server for which the assessment was
     * run. </p>
     */
    inline NetworkInfo& WithMacAddress(const char* value) { SetMacAddress(value); return *this;}


    /**
     * <p> Information about the subnet mask of the server for which the assessment was
     * run. </p>
     */
    inline const Aws::String& GetNetMask() const{ return m_netMask; }

    /**
     * <p> Information about the subnet mask of the server for which the assessment was
     * run. </p>
     */
    inline bool NetMaskHasBeenSet() const { return m_netMaskHasBeenSet; }

    /**
     * <p> Information about the subnet mask of the server for which the assessment was
     * run. </p>
     */
    inline void SetNetMask(const Aws::String& value) { m_netMaskHasBeenSet = true; m_netMask = value; }

    /**
     * <p> Information about the subnet mask of the server for which the assessment was
     * run. </p>
     */
    inline void SetNetMask(Aws::String&& value) { m_netMaskHasBeenSet = true; m_netMask = std::move(value); }

    /**
     * <p> Information about the subnet mask of the server for which the assessment was
     * run. </p>
     */
    inline void SetNetMask(const char* value) { m_netMaskHasBeenSet = true; m_netMask.assign(value); }

    /**
     * <p> Information about the subnet mask of the server for which the assessment was
     * run. </p>
     */
    inline NetworkInfo& WithNetMask(const Aws::String& value) { SetNetMask(value); return *this;}

    /**
     * <p> Information about the subnet mask of the server for which the assessment was
     * run. </p>
     */
    inline NetworkInfo& WithNetMask(Aws::String&& value) { SetNetMask(std::move(value)); return *this;}

    /**
     * <p> Information about the subnet mask of the server for which the assessment was
     * run. </p>
     */
    inline NetworkInfo& WithNetMask(const char* value) { SetNetMask(value); return *this;}

  private:

    Aws::String m_interfaceName;
    bool m_interfaceNameHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_macAddress;
    bool m_macAddressHasBeenSet = false;

    Aws::String m_netMask;
    bool m_netMaskHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
