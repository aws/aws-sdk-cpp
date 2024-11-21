/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-quicksetup/SSMQuickSetup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-quicksetup/model/StatusSummary.h>
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
namespace SSMQuickSetup
{
namespace Model
{
  class GetConfigurationResult
  {
  public:
    AWS_SSMQUICKSETUP_API GetConfigurationResult();
    AWS_SSMQUICKSETUP_API GetConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMQUICKSETUP_API GetConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account where the configuration was
     * deployed.</p>
     */
    inline const Aws::String& GetAccount() const{ return m_account; }
    inline void SetAccount(const Aws::String& value) { m_account = value; }
    inline void SetAccount(Aws::String&& value) { m_account = std::move(value); }
    inline void SetAccount(const char* value) { m_account.assign(value); }
    inline GetConfigurationResult& WithAccount(const Aws::String& value) { SetAccount(value); return *this;}
    inline GetConfigurationResult& WithAccount(Aws::String&& value) { SetAccount(std::move(value)); return *this;}
    inline GetConfigurationResult& WithAccount(const char* value) { SetAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the configuration definition.</p>
     */
    inline const Aws::String& GetConfigurationDefinitionId() const{ return m_configurationDefinitionId; }
    inline void SetConfigurationDefinitionId(const Aws::String& value) { m_configurationDefinitionId = value; }
    inline void SetConfigurationDefinitionId(Aws::String&& value) { m_configurationDefinitionId = std::move(value); }
    inline void SetConfigurationDefinitionId(const char* value) { m_configurationDefinitionId.assign(value); }
    inline GetConfigurationResult& WithConfigurationDefinitionId(const Aws::String& value) { SetConfigurationDefinitionId(value); return *this;}
    inline GetConfigurationResult& WithConfigurationDefinitionId(Aws::String&& value) { SetConfigurationDefinitionId(std::move(value)); return *this;}
    inline GetConfigurationResult& WithConfigurationDefinitionId(const char* value) { SetConfigurationDefinitionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The datetime stamp when the configuration manager was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetConfigurationResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetConfigurationResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A service generated identifier for the configuration.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetConfigurationResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetConfigurationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetConfigurationResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The datetime stamp when the configuration manager was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const{ return m_lastModifiedAt; }
    inline void SetLastModifiedAt(const Aws::Utils::DateTime& value) { m_lastModifiedAt = value; }
    inline void SetLastModifiedAt(Aws::Utils::DateTime&& value) { m_lastModifiedAt = std::move(value); }
    inline GetConfigurationResult& WithLastModifiedAt(const Aws::Utils::DateTime& value) { SetLastModifiedAt(value); return *this;}
    inline GetConfigurationResult& WithLastModifiedAt(Aws::Utils::DateTime&& value) { SetLastModifiedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the configuration manager.</p>
     */
    inline const Aws::String& GetManagerArn() const{ return m_managerArn; }
    inline void SetManagerArn(const Aws::String& value) { m_managerArn = value; }
    inline void SetManagerArn(Aws::String&& value) { m_managerArn = std::move(value); }
    inline void SetManagerArn(const char* value) { m_managerArn.assign(value); }
    inline GetConfigurationResult& WithManagerArn(const Aws::String& value) { SetManagerArn(value); return *this;}
    inline GetConfigurationResult& WithManagerArn(Aws::String&& value) { SetManagerArn(std::move(value)); return *this;}
    inline GetConfigurationResult& WithManagerArn(const char* value) { SetManagerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for the configuration definition type.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parameters = std::move(value); }
    inline GetConfigurationResult& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}
    inline GetConfigurationResult& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}
    inline GetConfigurationResult& AddParameters(const Aws::String& key, const Aws::String& value) { m_parameters.emplace(key, value); return *this; }
    inline GetConfigurationResult& AddParameters(Aws::String&& key, const Aws::String& value) { m_parameters.emplace(std::move(key), value); return *this; }
    inline GetConfigurationResult& AddParameters(const Aws::String& key, Aws::String&& value) { m_parameters.emplace(key, std::move(value)); return *this; }
    inline GetConfigurationResult& AddParameters(Aws::String&& key, Aws::String&& value) { m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline GetConfigurationResult& AddParameters(const char* key, Aws::String&& value) { m_parameters.emplace(key, std::move(value)); return *this; }
    inline GetConfigurationResult& AddParameters(Aws::String&& key, const char* value) { m_parameters.emplace(std::move(key), value); return *this; }
    inline GetConfigurationResult& AddParameters(const char* key, const char* value) { m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the configuration was deployed.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline void SetRegion(const Aws::String& value) { m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_region.assign(value); }
    inline GetConfigurationResult& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline GetConfigurationResult& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline GetConfigurationResult& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the state of the configuration manager. This includes deployment
     * statuses, association statuses, drift statuses, health checks, and more.</p>
     */
    inline const Aws::Vector<StatusSummary>& GetStatusSummaries() const{ return m_statusSummaries; }
    inline void SetStatusSummaries(const Aws::Vector<StatusSummary>& value) { m_statusSummaries = value; }
    inline void SetStatusSummaries(Aws::Vector<StatusSummary>&& value) { m_statusSummaries = std::move(value); }
    inline GetConfigurationResult& WithStatusSummaries(const Aws::Vector<StatusSummary>& value) { SetStatusSummaries(value); return *this;}
    inline GetConfigurationResult& WithStatusSummaries(Aws::Vector<StatusSummary>&& value) { SetStatusSummaries(std::move(value)); return *this;}
    inline GetConfigurationResult& AddStatusSummaries(const StatusSummary& value) { m_statusSummaries.push_back(value); return *this; }
    inline GetConfigurationResult& AddStatusSummaries(StatusSummary&& value) { m_statusSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the Quick Setup configuration.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline void SetType(const Aws::String& value) { m_type = value; }
    inline void SetType(Aws::String&& value) { m_type = std::move(value); }
    inline void SetType(const char* value) { m_type.assign(value); }
    inline GetConfigurationResult& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline GetConfigurationResult& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline GetConfigurationResult& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Quick Setup type used.</p>
     */
    inline const Aws::String& GetTypeVersion() const{ return m_typeVersion; }
    inline void SetTypeVersion(const Aws::String& value) { m_typeVersion = value; }
    inline void SetTypeVersion(Aws::String&& value) { m_typeVersion = std::move(value); }
    inline void SetTypeVersion(const char* value) { m_typeVersion.assign(value); }
    inline GetConfigurationResult& WithTypeVersion(const Aws::String& value) { SetTypeVersion(value); return *this;}
    inline GetConfigurationResult& WithTypeVersion(Aws::String&& value) { SetTypeVersion(std::move(value)); return *this;}
    inline GetConfigurationResult& WithTypeVersion(const char* value) { SetTypeVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_account;

    Aws::String m_configurationDefinitionId;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_id;

    Aws::Utils::DateTime m_lastModifiedAt;

    Aws::String m_managerArn;

    Aws::Map<Aws::String, Aws::String> m_parameters;

    Aws::String m_region;

    Aws::Vector<StatusSummary> m_statusSummaries;

    Aws::String m_type;

    Aws::String m_typeVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
