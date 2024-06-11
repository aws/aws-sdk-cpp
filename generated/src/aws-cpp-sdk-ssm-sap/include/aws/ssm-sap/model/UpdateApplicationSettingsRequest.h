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
    AWS_SSMSAP_API UpdateApplicationSettingsRequest();

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
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline UpdateApplicationSettingsRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline UpdateApplicationSettingsRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline UpdateApplicationSettingsRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credentials to be added or updated.</p>
     */
    inline const Aws::Vector<ApplicationCredential>& GetCredentialsToAddOrUpdate() const{ return m_credentialsToAddOrUpdate; }
    inline bool CredentialsToAddOrUpdateHasBeenSet() const { return m_credentialsToAddOrUpdateHasBeenSet; }
    inline void SetCredentialsToAddOrUpdate(const Aws::Vector<ApplicationCredential>& value) { m_credentialsToAddOrUpdateHasBeenSet = true; m_credentialsToAddOrUpdate = value; }
    inline void SetCredentialsToAddOrUpdate(Aws::Vector<ApplicationCredential>&& value) { m_credentialsToAddOrUpdateHasBeenSet = true; m_credentialsToAddOrUpdate = std::move(value); }
    inline UpdateApplicationSettingsRequest& WithCredentialsToAddOrUpdate(const Aws::Vector<ApplicationCredential>& value) { SetCredentialsToAddOrUpdate(value); return *this;}
    inline UpdateApplicationSettingsRequest& WithCredentialsToAddOrUpdate(Aws::Vector<ApplicationCredential>&& value) { SetCredentialsToAddOrUpdate(std::move(value)); return *this;}
    inline UpdateApplicationSettingsRequest& AddCredentialsToAddOrUpdate(const ApplicationCredential& value) { m_credentialsToAddOrUpdateHasBeenSet = true; m_credentialsToAddOrUpdate.push_back(value); return *this; }
    inline UpdateApplicationSettingsRequest& AddCredentialsToAddOrUpdate(ApplicationCredential&& value) { m_credentialsToAddOrUpdateHasBeenSet = true; m_credentialsToAddOrUpdate.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The credentials to be removed.</p>
     */
    inline const Aws::Vector<ApplicationCredential>& GetCredentialsToRemove() const{ return m_credentialsToRemove; }
    inline bool CredentialsToRemoveHasBeenSet() const { return m_credentialsToRemoveHasBeenSet; }
    inline void SetCredentialsToRemove(const Aws::Vector<ApplicationCredential>& value) { m_credentialsToRemoveHasBeenSet = true; m_credentialsToRemove = value; }
    inline void SetCredentialsToRemove(Aws::Vector<ApplicationCredential>&& value) { m_credentialsToRemoveHasBeenSet = true; m_credentialsToRemove = std::move(value); }
    inline UpdateApplicationSettingsRequest& WithCredentialsToRemove(const Aws::Vector<ApplicationCredential>& value) { SetCredentialsToRemove(value); return *this;}
    inline UpdateApplicationSettingsRequest& WithCredentialsToRemove(Aws::Vector<ApplicationCredential>&& value) { SetCredentialsToRemove(std::move(value)); return *this;}
    inline UpdateApplicationSettingsRequest& AddCredentialsToRemove(const ApplicationCredential& value) { m_credentialsToRemoveHasBeenSet = true; m_credentialsToRemove.push_back(value); return *this; }
    inline UpdateApplicationSettingsRequest& AddCredentialsToRemove(ApplicationCredential&& value) { m_credentialsToRemoveHasBeenSet = true; m_credentialsToRemove.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Installation of AWS Backint Agent for SAP HANA.</p>
     */
    inline const BackintConfig& GetBackint() const{ return m_backint; }
    inline bool BackintHasBeenSet() const { return m_backintHasBeenSet; }
    inline void SetBackint(const BackintConfig& value) { m_backintHasBeenSet = true; m_backint = value; }
    inline void SetBackint(BackintConfig&& value) { m_backintHasBeenSet = true; m_backint = std::move(value); }
    inline UpdateApplicationSettingsRequest& WithBackint(const BackintConfig& value) { SetBackint(value); return *this;}
    inline UpdateApplicationSettingsRequest& WithBackint(BackintConfig&& value) { SetBackint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name of the SAP HANA database that replaces the current
     * SAP HANA connection with the SAP_ABAP application.</p>
     */
    inline const Aws::String& GetDatabaseArn() const{ return m_databaseArn; }
    inline bool DatabaseArnHasBeenSet() const { return m_databaseArnHasBeenSet; }
    inline void SetDatabaseArn(const Aws::String& value) { m_databaseArnHasBeenSet = true; m_databaseArn = value; }
    inline void SetDatabaseArn(Aws::String&& value) { m_databaseArnHasBeenSet = true; m_databaseArn = std::move(value); }
    inline void SetDatabaseArn(const char* value) { m_databaseArnHasBeenSet = true; m_databaseArn.assign(value); }
    inline UpdateApplicationSettingsRequest& WithDatabaseArn(const Aws::String& value) { SetDatabaseArn(value); return *this;}
    inline UpdateApplicationSettingsRequest& WithDatabaseArn(Aws::String&& value) { SetDatabaseArn(std::move(value)); return *this;}
    inline UpdateApplicationSettingsRequest& WithDatabaseArn(const char* value) { SetDatabaseArn(value); return *this;}
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
