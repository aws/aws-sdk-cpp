/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/AuthType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhubstrategy/model/OSType.h>
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
   * <p>IP address based configurations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/IPAddressBasedRemoteInfo">AWS
   * API Reference</a></p>
   */
  class IPAddressBasedRemoteInfo
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API IPAddressBasedRemoteInfo() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API IPAddressBasedRemoteInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API IPAddressBasedRemoteInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of authorization.</p>
     */
    inline AuthType GetAuthType() const { return m_authType; }
    inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }
    inline void SetAuthType(AuthType value) { m_authTypeHasBeenSet = true; m_authType = value; }
    inline IPAddressBasedRemoteInfo& WithAuthType(AuthType value) { SetAuthType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp of the configuration.</p>
     */
    inline const Aws::String& GetIpAddressConfigurationTimeStamp() const { return m_ipAddressConfigurationTimeStamp; }
    inline bool IpAddressConfigurationTimeStampHasBeenSet() const { return m_ipAddressConfigurationTimeStampHasBeenSet; }
    template<typename IpAddressConfigurationTimeStampT = Aws::String>
    void SetIpAddressConfigurationTimeStamp(IpAddressConfigurationTimeStampT&& value) { m_ipAddressConfigurationTimeStampHasBeenSet = true; m_ipAddressConfigurationTimeStamp = std::forward<IpAddressConfigurationTimeStampT>(value); }
    template<typename IpAddressConfigurationTimeStampT = Aws::String>
    IPAddressBasedRemoteInfo& WithIpAddressConfigurationTimeStamp(IpAddressConfigurationTimeStampT&& value) { SetIpAddressConfigurationTimeStamp(std::forward<IpAddressConfigurationTimeStampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the operating system.</p>
     */
    inline OSType GetOsType() const { return m_osType; }
    inline bool OsTypeHasBeenSet() const { return m_osTypeHasBeenSet; }
    inline void SetOsType(OSType value) { m_osTypeHasBeenSet = true; m_osType = value; }
    inline IPAddressBasedRemoteInfo& WithOsType(OSType value) { SetOsType(value); return *this;}
    ///@}
  private:

    AuthType m_authType{AuthType::NOT_SET};
    bool m_authTypeHasBeenSet = false;

    Aws::String m_ipAddressConfigurationTimeStamp;
    bool m_ipAddressConfigurationTimeStampHasBeenSet = false;

    OSType m_osType{OSType::NOT_SET};
    bool m_osTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
