/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-quicksetup/SSMQuickSetup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm-quicksetup/model/ConfigurationDefinition.h>
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
  class GetConfigurationManagerResult
  {
  public:
    AWS_SSMQUICKSETUP_API GetConfigurationManagerResult();
    AWS_SSMQUICKSETUP_API GetConfigurationManagerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMQUICKSETUP_API GetConfigurationManagerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The configuration definitions association with the configuration manager.</p>
     */
    inline const Aws::Vector<ConfigurationDefinition>& GetConfigurationDefinitions() const{ return m_configurationDefinitions; }
    inline void SetConfigurationDefinitions(const Aws::Vector<ConfigurationDefinition>& value) { m_configurationDefinitions = value; }
    inline void SetConfigurationDefinitions(Aws::Vector<ConfigurationDefinition>&& value) { m_configurationDefinitions = std::move(value); }
    inline GetConfigurationManagerResult& WithConfigurationDefinitions(const Aws::Vector<ConfigurationDefinition>& value) { SetConfigurationDefinitions(value); return *this;}
    inline GetConfigurationManagerResult& WithConfigurationDefinitions(Aws::Vector<ConfigurationDefinition>&& value) { SetConfigurationDefinitions(std::move(value)); return *this;}
    inline GetConfigurationManagerResult& AddConfigurationDefinitions(const ConfigurationDefinition& value) { m_configurationDefinitions.push_back(value); return *this; }
    inline GetConfigurationManagerResult& AddConfigurationDefinitions(ConfigurationDefinition&& value) { m_configurationDefinitions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The datetime stamp when the configuration manager was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetConfigurationManagerResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetConfigurationManagerResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the configuration manager.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetConfigurationManagerResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetConfigurationManagerResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetConfigurationManagerResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The datetime stamp when the configuration manager was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const{ return m_lastModifiedAt; }
    inline void SetLastModifiedAt(const Aws::Utils::DateTime& value) { m_lastModifiedAt = value; }
    inline void SetLastModifiedAt(Aws::Utils::DateTime&& value) { m_lastModifiedAt = std::move(value); }
    inline GetConfigurationManagerResult& WithLastModifiedAt(const Aws::Utils::DateTime& value) { SetLastModifiedAt(value); return *this;}
    inline GetConfigurationManagerResult& WithLastModifiedAt(Aws::Utils::DateTime&& value) { SetLastModifiedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the configuration manager.</p>
     */
    inline const Aws::String& GetManagerArn() const{ return m_managerArn; }
    inline void SetManagerArn(const Aws::String& value) { m_managerArn = value; }
    inline void SetManagerArn(Aws::String&& value) { m_managerArn = std::move(value); }
    inline void SetManagerArn(const char* value) { m_managerArn.assign(value); }
    inline GetConfigurationManagerResult& WithManagerArn(const Aws::String& value) { SetManagerArn(value); return *this;}
    inline GetConfigurationManagerResult& WithManagerArn(Aws::String&& value) { SetManagerArn(std::move(value)); return *this;}
    inline GetConfigurationManagerResult& WithManagerArn(const char* value) { SetManagerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration manager.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetConfigurationManagerResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetConfigurationManagerResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetConfigurationManagerResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the state of the configuration manager. This includes deployment
     * statuses, association statuses, drift statuses, health checks, and more.</p>
     */
    inline const Aws::Vector<StatusSummary>& GetStatusSummaries() const{ return m_statusSummaries; }
    inline void SetStatusSummaries(const Aws::Vector<StatusSummary>& value) { m_statusSummaries = value; }
    inline void SetStatusSummaries(Aws::Vector<StatusSummary>&& value) { m_statusSummaries = std::move(value); }
    inline GetConfigurationManagerResult& WithStatusSummaries(const Aws::Vector<StatusSummary>& value) { SetStatusSummaries(value); return *this;}
    inline GetConfigurationManagerResult& WithStatusSummaries(Aws::Vector<StatusSummary>&& value) { SetStatusSummaries(std::move(value)); return *this;}
    inline GetConfigurationManagerResult& AddStatusSummaries(const StatusSummary& value) { m_statusSummaries.push_back(value); return *this; }
    inline GetConfigurationManagerResult& AddStatusSummaries(StatusSummary&& value) { m_statusSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Key-value pairs of metadata to assign to the configuration manager.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetConfigurationManagerResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetConfigurationManagerResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetConfigurationManagerResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetConfigurationManagerResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetConfigurationManagerResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetConfigurationManagerResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetConfigurationManagerResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetConfigurationManagerResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetConfigurationManagerResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetConfigurationManagerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetConfigurationManagerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetConfigurationManagerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ConfigurationDefinition> m_configurationDefinitions;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_description;

    Aws::Utils::DateTime m_lastModifiedAt;

    Aws::String m_managerArn;

    Aws::String m_name;

    Aws::Vector<StatusSummary> m_statusSummaries;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
