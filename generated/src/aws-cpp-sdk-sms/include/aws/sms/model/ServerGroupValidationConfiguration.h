/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sms/model/ServerValidationConfiguration.h>
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
namespace SMS
{
namespace Model
{

  /**
   * <p>Configuration for validating an instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ServerGroupValidationConfiguration">AWS
   * API Reference</a></p>
   */
  class ServerGroupValidationConfiguration
  {
  public:
    AWS_SMS_API ServerGroupValidationConfiguration() = default;
    AWS_SMS_API ServerGroupValidationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API ServerGroupValidationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the server group.</p>
     */
    inline const Aws::String& GetServerGroupId() const { return m_serverGroupId; }
    inline bool ServerGroupIdHasBeenSet() const { return m_serverGroupIdHasBeenSet; }
    template<typename ServerGroupIdT = Aws::String>
    void SetServerGroupId(ServerGroupIdT&& value) { m_serverGroupIdHasBeenSet = true; m_serverGroupId = std::forward<ServerGroupIdT>(value); }
    template<typename ServerGroupIdT = Aws::String>
    ServerGroupValidationConfiguration& WithServerGroupId(ServerGroupIdT&& value) { SetServerGroupId(std::forward<ServerGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation configuration.</p>
     */
    inline const Aws::Vector<ServerValidationConfiguration>& GetServerValidationConfigurations() const { return m_serverValidationConfigurations; }
    inline bool ServerValidationConfigurationsHasBeenSet() const { return m_serverValidationConfigurationsHasBeenSet; }
    template<typename ServerValidationConfigurationsT = Aws::Vector<ServerValidationConfiguration>>
    void SetServerValidationConfigurations(ServerValidationConfigurationsT&& value) { m_serverValidationConfigurationsHasBeenSet = true; m_serverValidationConfigurations = std::forward<ServerValidationConfigurationsT>(value); }
    template<typename ServerValidationConfigurationsT = Aws::Vector<ServerValidationConfiguration>>
    ServerGroupValidationConfiguration& WithServerValidationConfigurations(ServerValidationConfigurationsT&& value) { SetServerValidationConfigurations(std::forward<ServerValidationConfigurationsT>(value)); return *this;}
    template<typename ServerValidationConfigurationsT = ServerValidationConfiguration>
    ServerGroupValidationConfiguration& AddServerValidationConfigurations(ServerValidationConfigurationsT&& value) { m_serverValidationConfigurationsHasBeenSet = true; m_serverValidationConfigurations.emplace_back(std::forward<ServerValidationConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_serverGroupId;
    bool m_serverGroupIdHasBeenSet = false;

    Aws::Vector<ServerValidationConfiguration> m_serverValidationConfigurations;
    bool m_serverValidationConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
