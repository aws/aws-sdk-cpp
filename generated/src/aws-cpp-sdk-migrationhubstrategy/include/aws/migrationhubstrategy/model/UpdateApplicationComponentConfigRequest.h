/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsRequest.h>
#include <aws/migrationhubstrategy/model/AppType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhubstrategy/model/InclusionStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhubstrategy/model/StrategyOption.h>
#include <aws/migrationhubstrategy/model/SourceCode.h>
#include <utility>

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   */
  class UpdateApplicationComponentConfigRequest : public MigrationHubStrategyRecommendationsRequest
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API UpdateApplicationComponentConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplicationComponentConfig"; }

    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The type of known component.</p>
     */
    inline AppType GetAppType() const { return m_appType; }
    inline bool AppTypeHasBeenSet() const { return m_appTypeHasBeenSet; }
    inline void SetAppType(AppType value) { m_appTypeHasBeenSet = true; m_appType = value; }
    inline UpdateApplicationComponentConfigRequest& WithAppType(AppType value) { SetAppType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the application component. The ID is unique within an AWS account.
     * </p>
     */
    inline const Aws::String& GetApplicationComponentId() const { return m_applicationComponentId; }
    inline bool ApplicationComponentIdHasBeenSet() const { return m_applicationComponentIdHasBeenSet; }
    template<typename ApplicationComponentIdT = Aws::String>
    void SetApplicationComponentId(ApplicationComponentIdT&& value) { m_applicationComponentIdHasBeenSet = true; m_applicationComponentId = std::forward<ApplicationComponentIdT>(value); }
    template<typename ApplicationComponentIdT = Aws::String>
    UpdateApplicationComponentConfigRequest& WithApplicationComponentId(ApplicationComponentIdT&& value) { SetApplicationComponentId(std::forward<ApplicationComponentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update the configuration request of an application component. If it is set to
     * true, the source code and/or database credentials are updated. If it is set to
     * false, the source code and/or database credentials are updated and an analysis
     * is initiated.</p>
     */
    inline bool GetConfigureOnly() const { return m_configureOnly; }
    inline bool ConfigureOnlyHasBeenSet() const { return m_configureOnlyHasBeenSet; }
    inline void SetConfigureOnly(bool value) { m_configureOnlyHasBeenSet = true; m_configureOnly = value; }
    inline UpdateApplicationComponentConfigRequest& WithConfigureOnly(bool value) { SetConfigureOnly(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether the application component has been included for server
     * recommendation or not. </p>
     */
    inline InclusionStatus GetInclusionStatus() const { return m_inclusionStatus; }
    inline bool InclusionStatusHasBeenSet() const { return m_inclusionStatusHasBeenSet; }
    inline void SetInclusionStatus(InclusionStatus value) { m_inclusionStatusHasBeenSet = true; m_inclusionStatus = value; }
    inline UpdateApplicationComponentConfigRequest& WithInclusionStatus(InclusionStatus value) { SetInclusionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Database credentials. </p>
     */
    inline const Aws::String& GetSecretsManagerKey() const { return m_secretsManagerKey; }
    inline bool SecretsManagerKeyHasBeenSet() const { return m_secretsManagerKeyHasBeenSet; }
    template<typename SecretsManagerKeyT = Aws::String>
    void SetSecretsManagerKey(SecretsManagerKeyT&& value) { m_secretsManagerKeyHasBeenSet = true; m_secretsManagerKey = std::forward<SecretsManagerKeyT>(value); }
    template<typename SecretsManagerKeyT = Aws::String>
    UpdateApplicationComponentConfigRequest& WithSecretsManagerKey(SecretsManagerKeyT&& value) { SetSecretsManagerKey(std::forward<SecretsManagerKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of source code configurations to update for the application
     * component. </p>
     */
    inline const Aws::Vector<SourceCode>& GetSourceCodeList() const { return m_sourceCodeList; }
    inline bool SourceCodeListHasBeenSet() const { return m_sourceCodeListHasBeenSet; }
    template<typename SourceCodeListT = Aws::Vector<SourceCode>>
    void SetSourceCodeList(SourceCodeListT&& value) { m_sourceCodeListHasBeenSet = true; m_sourceCodeList = std::forward<SourceCodeListT>(value); }
    template<typename SourceCodeListT = Aws::Vector<SourceCode>>
    UpdateApplicationComponentConfigRequest& WithSourceCodeList(SourceCodeListT&& value) { SetSourceCodeList(std::forward<SourceCodeListT>(value)); return *this;}
    template<typename SourceCodeListT = SourceCode>
    UpdateApplicationComponentConfigRequest& AddSourceCodeList(SourceCodeListT&& value) { m_sourceCodeListHasBeenSet = true; m_sourceCodeList.emplace_back(std::forward<SourceCodeListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The preferred strategy options for the application component. Use values
     * from the <a>GetApplicationComponentStrategies</a> response. </p>
     */
    inline const StrategyOption& GetStrategyOption() const { return m_strategyOption; }
    inline bool StrategyOptionHasBeenSet() const { return m_strategyOptionHasBeenSet; }
    template<typename StrategyOptionT = StrategyOption>
    void SetStrategyOption(StrategyOptionT&& value) { m_strategyOptionHasBeenSet = true; m_strategyOption = std::forward<StrategyOptionT>(value); }
    template<typename StrategyOptionT = StrategyOption>
    UpdateApplicationComponentConfigRequest& WithStrategyOption(StrategyOptionT&& value) { SetStrategyOption(std::forward<StrategyOptionT>(value)); return *this;}
    ///@}
  private:

    AppType m_appType{AppType::NOT_SET};
    bool m_appTypeHasBeenSet = false;

    Aws::String m_applicationComponentId;
    bool m_applicationComponentIdHasBeenSet = false;

    bool m_configureOnly{false};
    bool m_configureOnlyHasBeenSet = false;

    InclusionStatus m_inclusionStatus{InclusionStatus::NOT_SET};
    bool m_inclusionStatusHasBeenSet = false;

    Aws::String m_secretsManagerKey;
    bool m_secretsManagerKeyHasBeenSet = false;

    Aws::Vector<SourceCode> m_sourceCodeList;
    bool m_sourceCodeListHasBeenSet = false;

    StrategyOption m_strategyOption;
    bool m_strategyOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
