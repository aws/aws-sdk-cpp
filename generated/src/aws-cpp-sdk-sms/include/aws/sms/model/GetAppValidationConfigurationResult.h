/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sms/model/AppValidationConfiguration.h>
#include <aws/sms/model/ServerGroupValidationConfiguration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SMS
{
namespace Model
{
  class GetAppValidationConfigurationResult
  {
  public:
    AWS_SMS_API GetAppValidationConfigurationResult();
    AWS_SMS_API GetAppValidationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SMS_API GetAppValidationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The configuration for application validation.</p>
     */
    inline const Aws::Vector<AppValidationConfiguration>& GetAppValidationConfigurations() const{ return m_appValidationConfigurations; }

    /**
     * <p>The configuration for application validation.</p>
     */
    inline void SetAppValidationConfigurations(const Aws::Vector<AppValidationConfiguration>& value) { m_appValidationConfigurations = value; }

    /**
     * <p>The configuration for application validation.</p>
     */
    inline void SetAppValidationConfigurations(Aws::Vector<AppValidationConfiguration>&& value) { m_appValidationConfigurations = std::move(value); }

    /**
     * <p>The configuration for application validation.</p>
     */
    inline GetAppValidationConfigurationResult& WithAppValidationConfigurations(const Aws::Vector<AppValidationConfiguration>& value) { SetAppValidationConfigurations(value); return *this;}

    /**
     * <p>The configuration for application validation.</p>
     */
    inline GetAppValidationConfigurationResult& WithAppValidationConfigurations(Aws::Vector<AppValidationConfiguration>&& value) { SetAppValidationConfigurations(std::move(value)); return *this;}

    /**
     * <p>The configuration for application validation.</p>
     */
    inline GetAppValidationConfigurationResult& AddAppValidationConfigurations(const AppValidationConfiguration& value) { m_appValidationConfigurations.push_back(value); return *this; }

    /**
     * <p>The configuration for application validation.</p>
     */
    inline GetAppValidationConfigurationResult& AddAppValidationConfigurations(AppValidationConfiguration&& value) { m_appValidationConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The configuration for instance validation.</p>
     */
    inline const Aws::Vector<ServerGroupValidationConfiguration>& GetServerGroupValidationConfigurations() const{ return m_serverGroupValidationConfigurations; }

    /**
     * <p>The configuration for instance validation.</p>
     */
    inline void SetServerGroupValidationConfigurations(const Aws::Vector<ServerGroupValidationConfiguration>& value) { m_serverGroupValidationConfigurations = value; }

    /**
     * <p>The configuration for instance validation.</p>
     */
    inline void SetServerGroupValidationConfigurations(Aws::Vector<ServerGroupValidationConfiguration>&& value) { m_serverGroupValidationConfigurations = std::move(value); }

    /**
     * <p>The configuration for instance validation.</p>
     */
    inline GetAppValidationConfigurationResult& WithServerGroupValidationConfigurations(const Aws::Vector<ServerGroupValidationConfiguration>& value) { SetServerGroupValidationConfigurations(value); return *this;}

    /**
     * <p>The configuration for instance validation.</p>
     */
    inline GetAppValidationConfigurationResult& WithServerGroupValidationConfigurations(Aws::Vector<ServerGroupValidationConfiguration>&& value) { SetServerGroupValidationConfigurations(std::move(value)); return *this;}

    /**
     * <p>The configuration for instance validation.</p>
     */
    inline GetAppValidationConfigurationResult& AddServerGroupValidationConfigurations(const ServerGroupValidationConfiguration& value) { m_serverGroupValidationConfigurations.push_back(value); return *this; }

    /**
     * <p>The configuration for instance validation.</p>
     */
    inline GetAppValidationConfigurationResult& AddServerGroupValidationConfigurations(ServerGroupValidationConfiguration&& value) { m_serverGroupValidationConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AppValidationConfiguration> m_appValidationConfigurations;

    Aws::Vector<ServerGroupValidationConfiguration> m_serverGroupValidationConfigurations;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
