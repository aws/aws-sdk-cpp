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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SSMQuickSetup
{
namespace Model
{

  /**
   * <p>Details for a Quick Setup configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-quicksetup-2018-05-10/ConfigurationSummary">AWS
   * API Reference</a></p>
   */
  class ConfigurationSummary
  {
  public:
    AWS_SSMQUICKSETUP_API ConfigurationSummary() = default;
    AWS_SSMQUICKSETUP_API ConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMQUICKSETUP_API ConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMQUICKSETUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account where the configuration was
     * deployed.</p>
     */
    inline const Aws::String& GetAccount() const { return m_account; }
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }
    template<typename AccountT = Aws::String>
    void SetAccount(AccountT&& value) { m_accountHasBeenSet = true; m_account = std::forward<AccountT>(value); }
    template<typename AccountT = Aws::String>
    ConfigurationSummary& WithAccount(AccountT&& value) { SetAccount(std::forward<AccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the configuration definition.</p>
     */
    inline const Aws::String& GetConfigurationDefinitionId() const { return m_configurationDefinitionId; }
    inline bool ConfigurationDefinitionIdHasBeenSet() const { return m_configurationDefinitionIdHasBeenSet; }
    template<typename ConfigurationDefinitionIdT = Aws::String>
    void SetConfigurationDefinitionId(ConfigurationDefinitionIdT&& value) { m_configurationDefinitionIdHasBeenSet = true; m_configurationDefinitionId = std::forward<ConfigurationDefinitionIdT>(value); }
    template<typename ConfigurationDefinitionIdT = Aws::String>
    ConfigurationSummary& WithConfigurationDefinitionId(ConfigurationDefinitionIdT&& value) { SetConfigurationDefinitionId(std::forward<ConfigurationDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The datetime stamp when the configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ConfigurationSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The common parameters and values for the configuration definition.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFirstClassParameters() const { return m_firstClassParameters; }
    inline bool FirstClassParametersHasBeenSet() const { return m_firstClassParametersHasBeenSet; }
    template<typename FirstClassParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetFirstClassParameters(FirstClassParametersT&& value) { m_firstClassParametersHasBeenSet = true; m_firstClassParameters = std::forward<FirstClassParametersT>(value); }
    template<typename FirstClassParametersT = Aws::Map<Aws::String, Aws::String>>
    ConfigurationSummary& WithFirstClassParameters(FirstClassParametersT&& value) { SetFirstClassParameters(std::forward<FirstClassParametersT>(value)); return *this;}
    template<typename FirstClassParametersKeyT = Aws::String, typename FirstClassParametersValueT = Aws::String>
    ConfigurationSummary& AddFirstClassParameters(FirstClassParametersKeyT&& key, FirstClassParametersValueT&& value) {
      m_firstClassParametersHasBeenSet = true; m_firstClassParameters.emplace(std::forward<FirstClassParametersKeyT>(key), std::forward<FirstClassParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A service generated identifier for the configuration.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ConfigurationSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the configuration manager.</p>
     */
    inline const Aws::String& GetManagerArn() const { return m_managerArn; }
    inline bool ManagerArnHasBeenSet() const { return m_managerArnHasBeenSet; }
    template<typename ManagerArnT = Aws::String>
    void SetManagerArn(ManagerArnT&& value) { m_managerArnHasBeenSet = true; m_managerArn = std::forward<ManagerArnT>(value); }
    template<typename ManagerArnT = Aws::String>
    ConfigurationSummary& WithManagerArn(ManagerArnT&& value) { SetManagerArn(std::forward<ManagerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the configuration was deployed.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    ConfigurationSummary& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the state of the configuration manager. This includes deployment
     * statuses, association statuses, drift statuses, health checks, and more.</p>
     */
    inline const Aws::Vector<StatusSummary>& GetStatusSummaries() const { return m_statusSummaries; }
    inline bool StatusSummariesHasBeenSet() const { return m_statusSummariesHasBeenSet; }
    template<typename StatusSummariesT = Aws::Vector<StatusSummary>>
    void SetStatusSummaries(StatusSummariesT&& value) { m_statusSummariesHasBeenSet = true; m_statusSummaries = std::forward<StatusSummariesT>(value); }
    template<typename StatusSummariesT = Aws::Vector<StatusSummary>>
    ConfigurationSummary& WithStatusSummaries(StatusSummariesT&& value) { SetStatusSummaries(std::forward<StatusSummariesT>(value)); return *this;}
    template<typename StatusSummariesT = StatusSummary>
    ConfigurationSummary& AddStatusSummaries(StatusSummariesT&& value) { m_statusSummariesHasBeenSet = true; m_statusSummaries.emplace_back(std::forward<StatusSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the Quick Setup configuration.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    ConfigurationSummary& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Quick Setup type used.</p>
     */
    inline const Aws::String& GetTypeVersion() const { return m_typeVersion; }
    inline bool TypeVersionHasBeenSet() const { return m_typeVersionHasBeenSet; }
    template<typename TypeVersionT = Aws::String>
    void SetTypeVersion(TypeVersionT&& value) { m_typeVersionHasBeenSet = true; m_typeVersion = std::forward<TypeVersionT>(value); }
    template<typename TypeVersionT = Aws::String>
    ConfigurationSummary& WithTypeVersion(TypeVersionT&& value) { SetTypeVersion(std::forward<TypeVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_account;
    bool m_accountHasBeenSet = false;

    Aws::String m_configurationDefinitionId;
    bool m_configurationDefinitionIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_firstClassParameters;
    bool m_firstClassParametersHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_managerArn;
    bool m_managerArnHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::Vector<StatusSummary> m_statusSummaries;
    bool m_statusSummariesHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_typeVersion;
    bool m_typeVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
