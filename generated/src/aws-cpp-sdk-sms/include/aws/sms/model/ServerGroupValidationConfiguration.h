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
    AWS_SMS_API ServerGroupValidationConfiguration();
    AWS_SMS_API ServerGroupValidationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API ServerGroupValidationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the server group.</p>
     */
    inline const Aws::String& GetServerGroupId() const{ return m_serverGroupId; }

    /**
     * <p>The ID of the server group.</p>
     */
    inline bool ServerGroupIdHasBeenSet() const { return m_serverGroupIdHasBeenSet; }

    /**
     * <p>The ID of the server group.</p>
     */
    inline void SetServerGroupId(const Aws::String& value) { m_serverGroupIdHasBeenSet = true; m_serverGroupId = value; }

    /**
     * <p>The ID of the server group.</p>
     */
    inline void SetServerGroupId(Aws::String&& value) { m_serverGroupIdHasBeenSet = true; m_serverGroupId = std::move(value); }

    /**
     * <p>The ID of the server group.</p>
     */
    inline void SetServerGroupId(const char* value) { m_serverGroupIdHasBeenSet = true; m_serverGroupId.assign(value); }

    /**
     * <p>The ID of the server group.</p>
     */
    inline ServerGroupValidationConfiguration& WithServerGroupId(const Aws::String& value) { SetServerGroupId(value); return *this;}

    /**
     * <p>The ID of the server group.</p>
     */
    inline ServerGroupValidationConfiguration& WithServerGroupId(Aws::String&& value) { SetServerGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the server group.</p>
     */
    inline ServerGroupValidationConfiguration& WithServerGroupId(const char* value) { SetServerGroupId(value); return *this;}


    /**
     * <p>The validation configuration.</p>
     */
    inline const Aws::Vector<ServerValidationConfiguration>& GetServerValidationConfigurations() const{ return m_serverValidationConfigurations; }

    /**
     * <p>The validation configuration.</p>
     */
    inline bool ServerValidationConfigurationsHasBeenSet() const { return m_serverValidationConfigurationsHasBeenSet; }

    /**
     * <p>The validation configuration.</p>
     */
    inline void SetServerValidationConfigurations(const Aws::Vector<ServerValidationConfiguration>& value) { m_serverValidationConfigurationsHasBeenSet = true; m_serverValidationConfigurations = value; }

    /**
     * <p>The validation configuration.</p>
     */
    inline void SetServerValidationConfigurations(Aws::Vector<ServerValidationConfiguration>&& value) { m_serverValidationConfigurationsHasBeenSet = true; m_serverValidationConfigurations = std::move(value); }

    /**
     * <p>The validation configuration.</p>
     */
    inline ServerGroupValidationConfiguration& WithServerValidationConfigurations(const Aws::Vector<ServerValidationConfiguration>& value) { SetServerValidationConfigurations(value); return *this;}

    /**
     * <p>The validation configuration.</p>
     */
    inline ServerGroupValidationConfiguration& WithServerValidationConfigurations(Aws::Vector<ServerValidationConfiguration>&& value) { SetServerValidationConfigurations(std::move(value)); return *this;}

    /**
     * <p>The validation configuration.</p>
     */
    inline ServerGroupValidationConfiguration& AddServerValidationConfigurations(const ServerValidationConfiguration& value) { m_serverValidationConfigurationsHasBeenSet = true; m_serverValidationConfigurations.push_back(value); return *this; }

    /**
     * <p>The validation configuration.</p>
     */
    inline ServerGroupValidationConfiguration& AddServerValidationConfigurations(ServerValidationConfiguration&& value) { m_serverValidationConfigurationsHasBeenSet = true; m_serverValidationConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_serverGroupId;
    bool m_serverGroupIdHasBeenSet = false;

    Aws::Vector<ServerValidationConfiguration> m_serverValidationConfigurations;
    bool m_serverValidationConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
