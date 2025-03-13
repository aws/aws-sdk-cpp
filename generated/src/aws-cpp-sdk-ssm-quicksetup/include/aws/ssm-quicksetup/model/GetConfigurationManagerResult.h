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
    AWS_SSMQUICKSETUP_API GetConfigurationManagerResult() = default;
    AWS_SSMQUICKSETUP_API GetConfigurationManagerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMQUICKSETUP_API GetConfigurationManagerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The configuration definitions association with the configuration manager.</p>
     */
    inline const Aws::Vector<ConfigurationDefinition>& GetConfigurationDefinitions() const { return m_configurationDefinitions; }
    template<typename ConfigurationDefinitionsT = Aws::Vector<ConfigurationDefinition>>
    void SetConfigurationDefinitions(ConfigurationDefinitionsT&& value) { m_configurationDefinitionsHasBeenSet = true; m_configurationDefinitions = std::forward<ConfigurationDefinitionsT>(value); }
    template<typename ConfigurationDefinitionsT = Aws::Vector<ConfigurationDefinition>>
    GetConfigurationManagerResult& WithConfigurationDefinitions(ConfigurationDefinitionsT&& value) { SetConfigurationDefinitions(std::forward<ConfigurationDefinitionsT>(value)); return *this;}
    template<typename ConfigurationDefinitionsT = ConfigurationDefinition>
    GetConfigurationManagerResult& AddConfigurationDefinitions(ConfigurationDefinitionsT&& value) { m_configurationDefinitionsHasBeenSet = true; m_configurationDefinitions.emplace_back(std::forward<ConfigurationDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The datetime stamp when the configuration manager was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetConfigurationManagerResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the configuration manager.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetConfigurationManagerResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The datetime stamp when the configuration manager was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const { return m_lastModifiedAt; }
    template<typename LastModifiedAtT = Aws::Utils::DateTime>
    void SetLastModifiedAt(LastModifiedAtT&& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = std::forward<LastModifiedAtT>(value); }
    template<typename LastModifiedAtT = Aws::Utils::DateTime>
    GetConfigurationManagerResult& WithLastModifiedAt(LastModifiedAtT&& value) { SetLastModifiedAt(std::forward<LastModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the configuration manager.</p>
     */
    inline const Aws::String& GetManagerArn() const { return m_managerArn; }
    template<typename ManagerArnT = Aws::String>
    void SetManagerArn(ManagerArnT&& value) { m_managerArnHasBeenSet = true; m_managerArn = std::forward<ManagerArnT>(value); }
    template<typename ManagerArnT = Aws::String>
    GetConfigurationManagerResult& WithManagerArn(ManagerArnT&& value) { SetManagerArn(std::forward<ManagerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration manager.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetConfigurationManagerResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the state of the configuration manager. This includes deployment
     * statuses, association statuses, drift statuses, health checks, and more.</p>
     */
    inline const Aws::Vector<StatusSummary>& GetStatusSummaries() const { return m_statusSummaries; }
    template<typename StatusSummariesT = Aws::Vector<StatusSummary>>
    void SetStatusSummaries(StatusSummariesT&& value) { m_statusSummariesHasBeenSet = true; m_statusSummaries = std::forward<StatusSummariesT>(value); }
    template<typename StatusSummariesT = Aws::Vector<StatusSummary>>
    GetConfigurationManagerResult& WithStatusSummaries(StatusSummariesT&& value) { SetStatusSummaries(std::forward<StatusSummariesT>(value)); return *this;}
    template<typename StatusSummariesT = StatusSummary>
    GetConfigurationManagerResult& AddStatusSummaries(StatusSummariesT&& value) { m_statusSummariesHasBeenSet = true; m_statusSummaries.emplace_back(std::forward<StatusSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Key-value pairs of metadata to assign to the configuration manager.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetConfigurationManagerResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetConfigurationManagerResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetConfigurationManagerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConfigurationDefinition> m_configurationDefinitions;
    bool m_configurationDefinitionsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedAt{};
    bool m_lastModifiedAtHasBeenSet = false;

    Aws::String m_managerArn;
    bool m_managerArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<StatusSummary> m_statusSummaries;
    bool m_statusSummariesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
