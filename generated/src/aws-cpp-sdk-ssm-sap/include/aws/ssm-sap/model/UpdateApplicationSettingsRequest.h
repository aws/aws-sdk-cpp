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


    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The ID of the application.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The ID of the application.</p>
     */
    inline UpdateApplicationSettingsRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The ID of the application.</p>
     */
    inline UpdateApplicationSettingsRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application.</p>
     */
    inline UpdateApplicationSettingsRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The credentials to be added or updated.</p>
     */
    inline const Aws::Vector<ApplicationCredential>& GetCredentialsToAddOrUpdate() const{ return m_credentialsToAddOrUpdate; }

    /**
     * <p>The credentials to be added or updated.</p>
     */
    inline bool CredentialsToAddOrUpdateHasBeenSet() const { return m_credentialsToAddOrUpdateHasBeenSet; }

    /**
     * <p>The credentials to be added or updated.</p>
     */
    inline void SetCredentialsToAddOrUpdate(const Aws::Vector<ApplicationCredential>& value) { m_credentialsToAddOrUpdateHasBeenSet = true; m_credentialsToAddOrUpdate = value; }

    /**
     * <p>The credentials to be added or updated.</p>
     */
    inline void SetCredentialsToAddOrUpdate(Aws::Vector<ApplicationCredential>&& value) { m_credentialsToAddOrUpdateHasBeenSet = true; m_credentialsToAddOrUpdate = std::move(value); }

    /**
     * <p>The credentials to be added or updated.</p>
     */
    inline UpdateApplicationSettingsRequest& WithCredentialsToAddOrUpdate(const Aws::Vector<ApplicationCredential>& value) { SetCredentialsToAddOrUpdate(value); return *this;}

    /**
     * <p>The credentials to be added or updated.</p>
     */
    inline UpdateApplicationSettingsRequest& WithCredentialsToAddOrUpdate(Aws::Vector<ApplicationCredential>&& value) { SetCredentialsToAddOrUpdate(std::move(value)); return *this;}

    /**
     * <p>The credentials to be added or updated.</p>
     */
    inline UpdateApplicationSettingsRequest& AddCredentialsToAddOrUpdate(const ApplicationCredential& value) { m_credentialsToAddOrUpdateHasBeenSet = true; m_credentialsToAddOrUpdate.push_back(value); return *this; }

    /**
     * <p>The credentials to be added or updated.</p>
     */
    inline UpdateApplicationSettingsRequest& AddCredentialsToAddOrUpdate(ApplicationCredential&& value) { m_credentialsToAddOrUpdateHasBeenSet = true; m_credentialsToAddOrUpdate.push_back(std::move(value)); return *this; }


    /**
     * <p>The credentials to be removed.</p>
     */
    inline const Aws::Vector<ApplicationCredential>& GetCredentialsToRemove() const{ return m_credentialsToRemove; }

    /**
     * <p>The credentials to be removed.</p>
     */
    inline bool CredentialsToRemoveHasBeenSet() const { return m_credentialsToRemoveHasBeenSet; }

    /**
     * <p>The credentials to be removed.</p>
     */
    inline void SetCredentialsToRemove(const Aws::Vector<ApplicationCredential>& value) { m_credentialsToRemoveHasBeenSet = true; m_credentialsToRemove = value; }

    /**
     * <p>The credentials to be removed.</p>
     */
    inline void SetCredentialsToRemove(Aws::Vector<ApplicationCredential>&& value) { m_credentialsToRemoveHasBeenSet = true; m_credentialsToRemove = std::move(value); }

    /**
     * <p>The credentials to be removed.</p>
     */
    inline UpdateApplicationSettingsRequest& WithCredentialsToRemove(const Aws::Vector<ApplicationCredential>& value) { SetCredentialsToRemove(value); return *this;}

    /**
     * <p>The credentials to be removed.</p>
     */
    inline UpdateApplicationSettingsRequest& WithCredentialsToRemove(Aws::Vector<ApplicationCredential>&& value) { SetCredentialsToRemove(std::move(value)); return *this;}

    /**
     * <p>The credentials to be removed.</p>
     */
    inline UpdateApplicationSettingsRequest& AddCredentialsToRemove(const ApplicationCredential& value) { m_credentialsToRemoveHasBeenSet = true; m_credentialsToRemove.push_back(value); return *this; }

    /**
     * <p>The credentials to be removed.</p>
     */
    inline UpdateApplicationSettingsRequest& AddCredentialsToRemove(ApplicationCredential&& value) { m_credentialsToRemoveHasBeenSet = true; m_credentialsToRemove.push_back(std::move(value)); return *this; }


    /**
     * <p>Installation of AWS Backint Agent for SAP HANA.</p>
     */
    inline const BackintConfig& GetBackint() const{ return m_backint; }

    /**
     * <p>Installation of AWS Backint Agent for SAP HANA.</p>
     */
    inline bool BackintHasBeenSet() const { return m_backintHasBeenSet; }

    /**
     * <p>Installation of AWS Backint Agent for SAP HANA.</p>
     */
    inline void SetBackint(const BackintConfig& value) { m_backintHasBeenSet = true; m_backint = value; }

    /**
     * <p>Installation of AWS Backint Agent for SAP HANA.</p>
     */
    inline void SetBackint(BackintConfig&& value) { m_backintHasBeenSet = true; m_backint = std::move(value); }

    /**
     * <p>Installation of AWS Backint Agent for SAP HANA.</p>
     */
    inline UpdateApplicationSettingsRequest& WithBackint(const BackintConfig& value) { SetBackint(value); return *this;}

    /**
     * <p>Installation of AWS Backint Agent for SAP HANA.</p>
     */
    inline UpdateApplicationSettingsRequest& WithBackint(BackintConfig&& value) { SetBackint(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name of the SAP HANA database that replaces the current
     * SAP HANA connection with the SAP_ABAP application.</p>
     */
    inline const Aws::String& GetDatabaseArn() const{ return m_databaseArn; }

    /**
     * <p>The Amazon Resource Name of the SAP HANA database that replaces the current
     * SAP HANA connection with the SAP_ABAP application.</p>
     */
    inline bool DatabaseArnHasBeenSet() const { return m_databaseArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name of the SAP HANA database that replaces the current
     * SAP HANA connection with the SAP_ABAP application.</p>
     */
    inline void SetDatabaseArn(const Aws::String& value) { m_databaseArnHasBeenSet = true; m_databaseArn = value; }

    /**
     * <p>The Amazon Resource Name of the SAP HANA database that replaces the current
     * SAP HANA connection with the SAP_ABAP application.</p>
     */
    inline void SetDatabaseArn(Aws::String&& value) { m_databaseArnHasBeenSet = true; m_databaseArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name of the SAP HANA database that replaces the current
     * SAP HANA connection with the SAP_ABAP application.</p>
     */
    inline void SetDatabaseArn(const char* value) { m_databaseArnHasBeenSet = true; m_databaseArn.assign(value); }

    /**
     * <p>The Amazon Resource Name of the SAP HANA database that replaces the current
     * SAP HANA connection with the SAP_ABAP application.</p>
     */
    inline UpdateApplicationSettingsRequest& WithDatabaseArn(const Aws::String& value) { SetDatabaseArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name of the SAP HANA database that replaces the current
     * SAP HANA connection with the SAP_ABAP application.</p>
     */
    inline UpdateApplicationSettingsRequest& WithDatabaseArn(Aws::String&& value) { SetDatabaseArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name of the SAP HANA database that replaces the current
     * SAP HANA connection with the SAP_ABAP application.</p>
     */
    inline UpdateApplicationSettingsRequest& WithDatabaseArn(const char* value) { SetDatabaseArn(value); return *this;}

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
