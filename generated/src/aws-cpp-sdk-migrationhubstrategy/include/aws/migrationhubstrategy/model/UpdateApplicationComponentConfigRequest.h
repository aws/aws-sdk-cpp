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
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API UpdateApplicationComponentConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplicationComponentConfig"; }

    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String SerializePayload() const override;


    /**
     * <p>The type of known component.</p>
     */
    inline const AppType& GetAppType() const{ return m_appType; }

    /**
     * <p>The type of known component.</p>
     */
    inline bool AppTypeHasBeenSet() const { return m_appTypeHasBeenSet; }

    /**
     * <p>The type of known component.</p>
     */
    inline void SetAppType(const AppType& value) { m_appTypeHasBeenSet = true; m_appType = value; }

    /**
     * <p>The type of known component.</p>
     */
    inline void SetAppType(AppType&& value) { m_appTypeHasBeenSet = true; m_appType = std::move(value); }

    /**
     * <p>The type of known component.</p>
     */
    inline UpdateApplicationComponentConfigRequest& WithAppType(const AppType& value) { SetAppType(value); return *this;}

    /**
     * <p>The type of known component.</p>
     */
    inline UpdateApplicationComponentConfigRequest& WithAppType(AppType&& value) { SetAppType(std::move(value)); return *this;}


    /**
     * <p> The ID of the application component. The ID is unique within an AWS account.
     * </p>
     */
    inline const Aws::String& GetApplicationComponentId() const{ return m_applicationComponentId; }

    /**
     * <p> The ID of the application component. The ID is unique within an AWS account.
     * </p>
     */
    inline bool ApplicationComponentIdHasBeenSet() const { return m_applicationComponentIdHasBeenSet; }

    /**
     * <p> The ID of the application component. The ID is unique within an AWS account.
     * </p>
     */
    inline void SetApplicationComponentId(const Aws::String& value) { m_applicationComponentIdHasBeenSet = true; m_applicationComponentId = value; }

    /**
     * <p> The ID of the application component. The ID is unique within an AWS account.
     * </p>
     */
    inline void SetApplicationComponentId(Aws::String&& value) { m_applicationComponentIdHasBeenSet = true; m_applicationComponentId = std::move(value); }

    /**
     * <p> The ID of the application component. The ID is unique within an AWS account.
     * </p>
     */
    inline void SetApplicationComponentId(const char* value) { m_applicationComponentIdHasBeenSet = true; m_applicationComponentId.assign(value); }

    /**
     * <p> The ID of the application component. The ID is unique within an AWS account.
     * </p>
     */
    inline UpdateApplicationComponentConfigRequest& WithApplicationComponentId(const Aws::String& value) { SetApplicationComponentId(value); return *this;}

    /**
     * <p> The ID of the application component. The ID is unique within an AWS account.
     * </p>
     */
    inline UpdateApplicationComponentConfigRequest& WithApplicationComponentId(Aws::String&& value) { SetApplicationComponentId(std::move(value)); return *this;}

    /**
     * <p> The ID of the application component. The ID is unique within an AWS account.
     * </p>
     */
    inline UpdateApplicationComponentConfigRequest& WithApplicationComponentId(const char* value) { SetApplicationComponentId(value); return *this;}


    /**
     * <p>Update the configuration request of an application component. If it is set to
     * true, the source code and/or database credentials are updated. If it is set to
     * false, the source code and/or database credentials are updated and an analysis
     * is initiated.</p>
     */
    inline bool GetConfigureOnly() const{ return m_configureOnly; }

    /**
     * <p>Update the configuration request of an application component. If it is set to
     * true, the source code and/or database credentials are updated. If it is set to
     * false, the source code and/or database credentials are updated and an analysis
     * is initiated.</p>
     */
    inline bool ConfigureOnlyHasBeenSet() const { return m_configureOnlyHasBeenSet; }

    /**
     * <p>Update the configuration request of an application component. If it is set to
     * true, the source code and/or database credentials are updated. If it is set to
     * false, the source code and/or database credentials are updated and an analysis
     * is initiated.</p>
     */
    inline void SetConfigureOnly(bool value) { m_configureOnlyHasBeenSet = true; m_configureOnly = value; }

    /**
     * <p>Update the configuration request of an application component. If it is set to
     * true, the source code and/or database credentials are updated. If it is set to
     * false, the source code and/or database credentials are updated and an analysis
     * is initiated.</p>
     */
    inline UpdateApplicationComponentConfigRequest& WithConfigureOnly(bool value) { SetConfigureOnly(value); return *this;}


    /**
     * <p> Indicates whether the application component has been included for server
     * recommendation or not. </p>
     */
    inline const InclusionStatus& GetInclusionStatus() const{ return m_inclusionStatus; }

    /**
     * <p> Indicates whether the application component has been included for server
     * recommendation or not. </p>
     */
    inline bool InclusionStatusHasBeenSet() const { return m_inclusionStatusHasBeenSet; }

    /**
     * <p> Indicates whether the application component has been included for server
     * recommendation or not. </p>
     */
    inline void SetInclusionStatus(const InclusionStatus& value) { m_inclusionStatusHasBeenSet = true; m_inclusionStatus = value; }

    /**
     * <p> Indicates whether the application component has been included for server
     * recommendation or not. </p>
     */
    inline void SetInclusionStatus(InclusionStatus&& value) { m_inclusionStatusHasBeenSet = true; m_inclusionStatus = std::move(value); }

    /**
     * <p> Indicates whether the application component has been included for server
     * recommendation or not. </p>
     */
    inline UpdateApplicationComponentConfigRequest& WithInclusionStatus(const InclusionStatus& value) { SetInclusionStatus(value); return *this;}

    /**
     * <p> Indicates whether the application component has been included for server
     * recommendation or not. </p>
     */
    inline UpdateApplicationComponentConfigRequest& WithInclusionStatus(InclusionStatus&& value) { SetInclusionStatus(std::move(value)); return *this;}


    /**
     * <p> Database credentials. </p>
     */
    inline const Aws::String& GetSecretsManagerKey() const{ return m_secretsManagerKey; }

    /**
     * <p> Database credentials. </p>
     */
    inline bool SecretsManagerKeyHasBeenSet() const { return m_secretsManagerKeyHasBeenSet; }

    /**
     * <p> Database credentials. </p>
     */
    inline void SetSecretsManagerKey(const Aws::String& value) { m_secretsManagerKeyHasBeenSet = true; m_secretsManagerKey = value; }

    /**
     * <p> Database credentials. </p>
     */
    inline void SetSecretsManagerKey(Aws::String&& value) { m_secretsManagerKeyHasBeenSet = true; m_secretsManagerKey = std::move(value); }

    /**
     * <p> Database credentials. </p>
     */
    inline void SetSecretsManagerKey(const char* value) { m_secretsManagerKeyHasBeenSet = true; m_secretsManagerKey.assign(value); }

    /**
     * <p> Database credentials. </p>
     */
    inline UpdateApplicationComponentConfigRequest& WithSecretsManagerKey(const Aws::String& value) { SetSecretsManagerKey(value); return *this;}

    /**
     * <p> Database credentials. </p>
     */
    inline UpdateApplicationComponentConfigRequest& WithSecretsManagerKey(Aws::String&& value) { SetSecretsManagerKey(std::move(value)); return *this;}

    /**
     * <p> Database credentials. </p>
     */
    inline UpdateApplicationComponentConfigRequest& WithSecretsManagerKey(const char* value) { SetSecretsManagerKey(value); return *this;}


    /**
     * <p> The list of source code configurations to update for the application
     * component. </p>
     */
    inline const Aws::Vector<SourceCode>& GetSourceCodeList() const{ return m_sourceCodeList; }

    /**
     * <p> The list of source code configurations to update for the application
     * component. </p>
     */
    inline bool SourceCodeListHasBeenSet() const { return m_sourceCodeListHasBeenSet; }

    /**
     * <p> The list of source code configurations to update for the application
     * component. </p>
     */
    inline void SetSourceCodeList(const Aws::Vector<SourceCode>& value) { m_sourceCodeListHasBeenSet = true; m_sourceCodeList = value; }

    /**
     * <p> The list of source code configurations to update for the application
     * component. </p>
     */
    inline void SetSourceCodeList(Aws::Vector<SourceCode>&& value) { m_sourceCodeListHasBeenSet = true; m_sourceCodeList = std::move(value); }

    /**
     * <p> The list of source code configurations to update for the application
     * component. </p>
     */
    inline UpdateApplicationComponentConfigRequest& WithSourceCodeList(const Aws::Vector<SourceCode>& value) { SetSourceCodeList(value); return *this;}

    /**
     * <p> The list of source code configurations to update for the application
     * component. </p>
     */
    inline UpdateApplicationComponentConfigRequest& WithSourceCodeList(Aws::Vector<SourceCode>&& value) { SetSourceCodeList(std::move(value)); return *this;}

    /**
     * <p> The list of source code configurations to update for the application
     * component. </p>
     */
    inline UpdateApplicationComponentConfigRequest& AddSourceCodeList(const SourceCode& value) { m_sourceCodeListHasBeenSet = true; m_sourceCodeList.push_back(value); return *this; }

    /**
     * <p> The list of source code configurations to update for the application
     * component. </p>
     */
    inline UpdateApplicationComponentConfigRequest& AddSourceCodeList(SourceCode&& value) { m_sourceCodeListHasBeenSet = true; m_sourceCodeList.push_back(std::move(value)); return *this; }


    /**
     * <p> The preferred strategy options for the application component. Use values
     * from the <a>GetApplicationComponentStrategies</a> response. </p>
     */
    inline const StrategyOption& GetStrategyOption() const{ return m_strategyOption; }

    /**
     * <p> The preferred strategy options for the application component. Use values
     * from the <a>GetApplicationComponentStrategies</a> response. </p>
     */
    inline bool StrategyOptionHasBeenSet() const { return m_strategyOptionHasBeenSet; }

    /**
     * <p> The preferred strategy options for the application component. Use values
     * from the <a>GetApplicationComponentStrategies</a> response. </p>
     */
    inline void SetStrategyOption(const StrategyOption& value) { m_strategyOptionHasBeenSet = true; m_strategyOption = value; }

    /**
     * <p> The preferred strategy options for the application component. Use values
     * from the <a>GetApplicationComponentStrategies</a> response. </p>
     */
    inline void SetStrategyOption(StrategyOption&& value) { m_strategyOptionHasBeenSet = true; m_strategyOption = std::move(value); }

    /**
     * <p> The preferred strategy options for the application component. Use values
     * from the <a>GetApplicationComponentStrategies</a> response. </p>
     */
    inline UpdateApplicationComponentConfigRequest& WithStrategyOption(const StrategyOption& value) { SetStrategyOption(value); return *this;}

    /**
     * <p> The preferred strategy options for the application component. Use values
     * from the <a>GetApplicationComponentStrategies</a> response. </p>
     */
    inline UpdateApplicationComponentConfigRequest& WithStrategyOption(StrategyOption&& value) { SetStrategyOption(std::move(value)); return *this;}

  private:

    AppType m_appType;
    bool m_appTypeHasBeenSet = false;

    Aws::String m_applicationComponentId;
    bool m_applicationComponentIdHasBeenSet = false;

    bool m_configureOnly;
    bool m_configureOnlyHasBeenSet = false;

    InclusionStatus m_inclusionStatus;
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
