/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/ssm-sap/SsmSapRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-sap/model/BackintConfig.h>
#include <aws/ssm-sap/model/ApplicationCredential.h>
#include <utility>

namespace Aws
{
namespace SsmSap
{
namespace Model
{

  /**
   */
  class UpdateApplicationSettingsRequest : public SsmSapRequest
  {
  public:
    AWS_SSMSAP_API UpdateApplicationSettingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplicationSettings"; }

    AWS_SSMSAP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    UpdateApplicationSettingsRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credentials to be added or updated.</p>
     */
    inline const Aws::Vector<ApplicationCredential>& GetCredentialsToAddOrUpdate() const { return m_credentialsToAddOrUpdate; }
    inline bool CredentialsToAddOrUpdateHasBeenSet() const { return m_credentialsToAddOrUpdateHasBeenSet; }
    template<typename CredentialsToAddOrUpdateT = Aws::Vector<ApplicationCredential>>
    void SetCredentialsToAddOrUpdate(CredentialsToAddOrUpdateT&& value) { m_credentialsToAddOrUpdateHasBeenSet = true; m_credentialsToAddOrUpdate = std::forward<CredentialsToAddOrUpdateT>(value); }
    template<typename CredentialsToAddOrUpdateT = Aws::Vector<ApplicationCredential>>
    UpdateApplicationSettingsRequest& WithCredentialsToAddOrUpdate(CredentialsToAddOrUpdateT&& value) { SetCredentialsToAddOrUpdate(std::forward<CredentialsToAddOrUpdateT>(value)); return *this;}
    template<typename CredentialsToAddOrUpdateT = ApplicationCredential>
    UpdateApplicationSettingsRequest& AddCredentialsToAddOrUpdate(CredentialsToAddOrUpdateT&& value) { m_credentialsToAddOrUpdateHasBeenSet = true; m_credentialsToAddOrUpdate.emplace_back(std::forward<CredentialsToAddOrUpdateT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The credentials to be removed.</p>
     */
    inline const Aws::Vector<ApplicationCredential>& GetCredentialsToRemove() const { return m_credentialsToRemove; }
    inline bool CredentialsToRemoveHasBeenSet() const { return m_credentialsToRemoveHasBeenSet; }
    template<typename CredentialsToRemoveT = Aws::Vector<ApplicationCredential>>
    void SetCredentialsToRemove(CredentialsToRemoveT&& value) { m_credentialsToRemoveHasBeenSet = true; m_credentialsToRemove = std::forward<CredentialsToRemoveT>(value); }
    template<typename CredentialsToRemoveT = Aws::Vector<ApplicationCredential>>
    UpdateApplicationSettingsRequest& WithCredentialsToRemove(CredentialsToRemoveT&& value) { SetCredentialsToRemove(std::forward<CredentialsToRemoveT>(value)); return *this;}
    template<typename CredentialsToRemoveT = ApplicationCredential>
    UpdateApplicationSettingsRequest& AddCredentialsToRemove(CredentialsToRemoveT&& value) { m_credentialsToRemoveHasBeenSet = true; m_credentialsToRemove.emplace_back(std::forward<CredentialsToRemoveT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Installation of AWS Backint Agent for SAP HANA.</p>
     */
    inline const BackintConfig& GetBackint() const { return m_backint; }
    inline bool BackintHasBeenSet() const { return m_backintHasBeenSet; }
    template<typename BackintT = BackintConfig>
    void SetBackint(BackintT&& value) { m_backintHasBeenSet = true; m_backint = std::forward<BackintT>(value); }
    template<typename BackintT = BackintConfig>
    UpdateApplicationSettingsRequest& WithBackint(BackintT&& value) { SetBackint(std::forward<BackintT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name of the SAP HANA database that replaces the current
     * SAP HANA connection with the SAP_ABAP application.</p>
     */
    inline const Aws::String& GetDatabaseArn() const { return m_databaseArn; }
    inline bool DatabaseArnHasBeenSet() const { return m_databaseArnHasBeenSet; }
    template<typename DatabaseArnT = Aws::String>
    void SetDatabaseArn(DatabaseArnT&& value) { m_databaseArnHasBeenSet = true; m_databaseArn = std::forward<DatabaseArnT>(value); }
    template<typename DatabaseArnT = Aws::String>
    UpdateApplicationSettingsRequest& WithDatabaseArn(DatabaseArnT&& value) { SetDatabaseArn(std::forward<DatabaseArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::Vector<ApplicationCredential> m_credentialsToAddOrUpdate;
    bool m_credentialsToAddOrUpdateHasBeenSet = false;

    Aws::Vector<ApplicationCredential> m_credentialsToRemove;
    bool m_credentialsToRemoveHasBeenSet = false;

    BackintConfig m_backint;
    bool m_backintHasBeenSet = false;

    Aws::String m_databaseArn;
    bool m_databaseArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
