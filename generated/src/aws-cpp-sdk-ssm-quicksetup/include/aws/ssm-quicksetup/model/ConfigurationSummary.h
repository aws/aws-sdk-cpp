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
    AWS_SSMQUICKSETUP_API ConfigurationSummary();
    AWS_SSMQUICKSETUP_API ConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMQUICKSETUP_API ConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMQUICKSETUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account where the configuration was
     * deployed.</p>
     */
    inline const Aws::String& GetAccount() const{ return m_account; }
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }
    inline void SetAccount(const Aws::String& value) { m_accountHasBeenSet = true; m_account = value; }
    inline void SetAccount(Aws::String&& value) { m_accountHasBeenSet = true; m_account = std::move(value); }
    inline void SetAccount(const char* value) { m_accountHasBeenSet = true; m_account.assign(value); }
    inline ConfigurationSummary& WithAccount(const Aws::String& value) { SetAccount(value); return *this;}
    inline ConfigurationSummary& WithAccount(Aws::String&& value) { SetAccount(std::move(value)); return *this;}
    inline ConfigurationSummary& WithAccount(const char* value) { SetAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the configuration definition.</p>
     */
    inline const Aws::String& GetConfigurationDefinitionId() const{ return m_configurationDefinitionId; }
    inline bool ConfigurationDefinitionIdHasBeenSet() const { return m_configurationDefinitionIdHasBeenSet; }
    inline void SetConfigurationDefinitionId(const Aws::String& value) { m_configurationDefinitionIdHasBeenSet = true; m_configurationDefinitionId = value; }
    inline void SetConfigurationDefinitionId(Aws::String&& value) { m_configurationDefinitionIdHasBeenSet = true; m_configurationDefinitionId = std::move(value); }
    inline void SetConfigurationDefinitionId(const char* value) { m_configurationDefinitionIdHasBeenSet = true; m_configurationDefinitionId.assign(value); }
    inline ConfigurationSummary& WithConfigurationDefinitionId(const Aws::String& value) { SetConfigurationDefinitionId(value); return *this;}
    inline ConfigurationSummary& WithConfigurationDefinitionId(Aws::String&& value) { SetConfigurationDefinitionId(std::move(value)); return *this;}
    inline ConfigurationSummary& WithConfigurationDefinitionId(const char* value) { SetConfigurationDefinitionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The datetime stamp when the configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ConfigurationSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ConfigurationSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The common parameters and values for the configuration definition.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFirstClassParameters() const{ return m_firstClassParameters; }
    inline bool FirstClassParametersHasBeenSet() const { return m_firstClassParametersHasBeenSet; }
    inline void SetFirstClassParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_firstClassParametersHasBeenSet = true; m_firstClassParameters = value; }
    inline void SetFirstClassParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_firstClassParametersHasBeenSet = true; m_firstClassParameters = std::move(value); }
    inline ConfigurationSummary& WithFirstClassParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetFirstClassParameters(value); return *this;}
    inline ConfigurationSummary& WithFirstClassParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetFirstClassParameters(std::move(value)); return *this;}
    inline ConfigurationSummary& AddFirstClassParameters(const Aws::String& key, const Aws::String& value) { m_firstClassParametersHasBeenSet = true; m_firstClassParameters.emplace(key, value); return *this; }
    inline ConfigurationSummary& AddFirstClassParameters(Aws::String&& key, const Aws::String& value) { m_firstClassParametersHasBeenSet = true; m_firstClassParameters.emplace(std::move(key), value); return *this; }
    inline ConfigurationSummary& AddFirstClassParameters(const Aws::String& key, Aws::String&& value) { m_firstClassParametersHasBeenSet = true; m_firstClassParameters.emplace(key, std::move(value)); return *this; }
    inline ConfigurationSummary& AddFirstClassParameters(Aws::String&& key, Aws::String&& value) { m_firstClassParametersHasBeenSet = true; m_firstClassParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline ConfigurationSummary& AddFirstClassParameters(const char* key, Aws::String&& value) { m_firstClassParametersHasBeenSet = true; m_firstClassParameters.emplace(key, std::move(value)); return *this; }
    inline ConfigurationSummary& AddFirstClassParameters(Aws::String&& key, const char* value) { m_firstClassParametersHasBeenSet = true; m_firstClassParameters.emplace(std::move(key), value); return *this; }
    inline ConfigurationSummary& AddFirstClassParameters(const char* key, const char* value) { m_firstClassParametersHasBeenSet = true; m_firstClassParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A service generated identifier for the configuration.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ConfigurationSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ConfigurationSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ConfigurationSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the configuration manager.</p>
     */
    inline const Aws::String& GetManagerArn() const{ return m_managerArn; }
    inline bool ManagerArnHasBeenSet() const { return m_managerArnHasBeenSet; }
    inline void SetManagerArn(const Aws::String& value) { m_managerArnHasBeenSet = true; m_managerArn = value; }
    inline void SetManagerArn(Aws::String&& value) { m_managerArnHasBeenSet = true; m_managerArn = std::move(value); }
    inline void SetManagerArn(const char* value) { m_managerArnHasBeenSet = true; m_managerArn.assign(value); }
    inline ConfigurationSummary& WithManagerArn(const Aws::String& value) { SetManagerArn(value); return *this;}
    inline ConfigurationSummary& WithManagerArn(Aws::String&& value) { SetManagerArn(std::move(value)); return *this;}
    inline ConfigurationSummary& WithManagerArn(const char* value) { SetManagerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the configuration was deployed.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline ConfigurationSummary& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline ConfigurationSummary& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline ConfigurationSummary& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the state of the configuration manager. This includes deployment
     * statuses, association statuses, drift statuses, health checks, and more.</p>
     */
    inline const Aws::Vector<StatusSummary>& GetStatusSummaries() const{ return m_statusSummaries; }
    inline bool StatusSummariesHasBeenSet() const { return m_statusSummariesHasBeenSet; }
    inline void SetStatusSummaries(const Aws::Vector<StatusSummary>& value) { m_statusSummariesHasBeenSet = true; m_statusSummaries = value; }
    inline void SetStatusSummaries(Aws::Vector<StatusSummary>&& value) { m_statusSummariesHasBeenSet = true; m_statusSummaries = std::move(value); }
    inline ConfigurationSummary& WithStatusSummaries(const Aws::Vector<StatusSummary>& value) { SetStatusSummaries(value); return *this;}
    inline ConfigurationSummary& WithStatusSummaries(Aws::Vector<StatusSummary>&& value) { SetStatusSummaries(std::move(value)); return *this;}
    inline ConfigurationSummary& AddStatusSummaries(const StatusSummary& value) { m_statusSummariesHasBeenSet = true; m_statusSummaries.push_back(value); return *this; }
    inline ConfigurationSummary& AddStatusSummaries(StatusSummary&& value) { m_statusSummariesHasBeenSet = true; m_statusSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the Quick Setup configuration.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline ConfigurationSummary& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline ConfigurationSummary& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline ConfigurationSummary& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Quick Setup type used.</p>
     */
    inline const Aws::String& GetTypeVersion() const{ return m_typeVersion; }
    inline bool TypeVersionHasBeenSet() const { return m_typeVersionHasBeenSet; }
    inline void SetTypeVersion(const Aws::String& value) { m_typeVersionHasBeenSet = true; m_typeVersion = value; }
    inline void SetTypeVersion(Aws::String&& value) { m_typeVersionHasBeenSet = true; m_typeVersion = std::move(value); }
    inline void SetTypeVersion(const char* value) { m_typeVersionHasBeenSet = true; m_typeVersion.assign(value); }
    inline ConfigurationSummary& WithTypeVersion(const Aws::String& value) { SetTypeVersion(value); return *this;}
    inline ConfigurationSummary& WithTypeVersion(Aws::String&& value) { SetTypeVersion(std::move(value)); return *this;}
    inline ConfigurationSummary& WithTypeVersion(const char* value) { SetTypeVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_account;
    bool m_accountHasBeenSet = false;

    Aws::String m_configurationDefinitionId;
    bool m_configurationDefinitionIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
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
