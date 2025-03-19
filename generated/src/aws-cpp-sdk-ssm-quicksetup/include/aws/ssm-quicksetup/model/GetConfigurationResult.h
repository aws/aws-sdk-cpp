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
    AWS_SSMQUICKSETUP_API GetConfigurationResult() = default;
    AWS_SSMQUICKSETUP_API GetConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMQUICKSETUP_API GetConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account where the configuration was
     * deployed.</p>
     */
    inline const Aws::String& GetAccount() const { return m_account; }
    template<typename AccountT = Aws::String>
    void SetAccount(AccountT&& value) { m_accountHasBeenSet = true; m_account = std::forward<AccountT>(value); }
    template<typename AccountT = Aws::String>
    GetConfigurationResult& WithAccount(AccountT&& value) { SetAccount(std::forward<AccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the configuration definition.</p>
     */
    inline const Aws::String& GetConfigurationDefinitionId() const { return m_configurationDefinitionId; }
    template<typename ConfigurationDefinitionIdT = Aws::String>
    void SetConfigurationDefinitionId(ConfigurationDefinitionIdT&& value) { m_configurationDefinitionIdHasBeenSet = true; m_configurationDefinitionId = std::forward<ConfigurationDefinitionIdT>(value); }
    template<typename ConfigurationDefinitionIdT = Aws::String>
    GetConfigurationResult& WithConfigurationDefinitionId(ConfigurationDefinitionIdT&& value) { SetConfigurationDefinitionId(std::forward<ConfigurationDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The datetime stamp when the configuration manager was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetConfigurationResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A service generated identifier for the configuration.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetConfigurationResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The datetime stamp when the configuration manager was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const { return m_lastModifiedAt; }
    template<typename LastModifiedAtT = Aws::Utils::DateTime>
    void SetLastModifiedAt(LastModifiedAtT&& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = std::forward<LastModifiedAtT>(value); }
    template<typename LastModifiedAtT = Aws::Utils::DateTime>
    GetConfigurationResult& WithLastModifiedAt(LastModifiedAtT&& value) { SetLastModifiedAt(std::forward<LastModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the configuration manager.</p>
     */
    inline const Aws::String& GetManagerArn() const { return m_managerArn; }
    template<typename ManagerArnT = Aws::String>
    void SetManagerArn(ManagerArnT&& value) { m_managerArnHasBeenSet = true; m_managerArn = std::forward<ManagerArnT>(value); }
    template<typename ManagerArnT = Aws::String>
    GetConfigurationResult& WithManagerArn(ManagerArnT&& value) { SetManagerArn(std::forward<ManagerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for the configuration definition type.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    GetConfigurationResult& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
    GetConfigurationResult& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the configuration was deployed.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    GetConfigurationResult& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
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
    GetConfigurationResult& WithStatusSummaries(StatusSummariesT&& value) { SetStatusSummaries(std::forward<StatusSummariesT>(value)); return *this;}
    template<typename StatusSummariesT = StatusSummary>
    GetConfigurationResult& AddStatusSummaries(StatusSummariesT&& value) { m_statusSummariesHasBeenSet = true; m_statusSummaries.emplace_back(std::forward<StatusSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the Quick Setup configuration.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    GetConfigurationResult& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Quick Setup type used.</p>
     */
    inline const Aws::String& GetTypeVersion() const { return m_typeVersion; }
    template<typename TypeVersionT = Aws::String>
    void SetTypeVersion(TypeVersionT&& value) { m_typeVersionHasBeenSet = true; m_typeVersion = std::forward<TypeVersionT>(value); }
    template<typename TypeVersionT = Aws::String>
    GetConfigurationResult& WithTypeVersion(TypeVersionT&& value) { SetTypeVersion(std::forward<TypeVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_account;
    bool m_accountHasBeenSet = false;

    Aws::String m_configurationDefinitionId;
    bool m_configurationDefinitionIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedAt{};
    bool m_lastModifiedAtHasBeenSet = false;

    Aws::String m_managerArn;
    bool m_managerArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::Vector<StatusSummary> m_statusSummaries;
    bool m_statusSummariesHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_typeVersion;
    bool m_typeVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
