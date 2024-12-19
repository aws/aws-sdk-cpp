/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/ssm-sap/SsmSapRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-sap/model/ApplicationType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm-sap/model/ApplicationCredential.h>
#include <aws/ssm-sap/model/ComponentInfo.h>
#include <utility>

namespace Aws
{
namespace SsmSap
{
namespace Model
{

  /**
   */
  class RegisterApplicationRequest : public SsmSapRequest
  {
  public:
    AWS_SSMSAP_API RegisterApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterApplication"; }

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
    inline RegisterApplicationRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline RegisterApplicationRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline RegisterApplicationRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the application.</p>
     */
    inline const ApplicationType& GetApplicationType() const{ return m_applicationType; }
    inline bool ApplicationTypeHasBeenSet() const { return m_applicationTypeHasBeenSet; }
    inline void SetApplicationType(const ApplicationType& value) { m_applicationTypeHasBeenSet = true; m_applicationType = value; }
    inline void SetApplicationType(ApplicationType&& value) { m_applicationTypeHasBeenSet = true; m_applicationType = std::move(value); }
    inline RegisterApplicationRequest& WithApplicationType(const ApplicationType& value) { SetApplicationType(value); return *this;}
    inline RegisterApplicationRequest& WithApplicationType(ApplicationType&& value) { SetApplicationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instances on which your SAP application is running.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstances() const{ return m_instances; }
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }
    inline void SetInstances(const Aws::Vector<Aws::String>& value) { m_instancesHasBeenSet = true; m_instances = value; }
    inline void SetInstances(Aws::Vector<Aws::String>&& value) { m_instancesHasBeenSet = true; m_instances = std::move(value); }
    inline RegisterApplicationRequest& WithInstances(const Aws::Vector<Aws::String>& value) { SetInstances(value); return *this;}
    inline RegisterApplicationRequest& WithInstances(Aws::Vector<Aws::String>&& value) { SetInstances(std::move(value)); return *this;}
    inline RegisterApplicationRequest& AddInstances(const Aws::String& value) { m_instancesHasBeenSet = true; m_instances.push_back(value); return *this; }
    inline RegisterApplicationRequest& AddInstances(Aws::String&& value) { m_instancesHasBeenSet = true; m_instances.push_back(std::move(value)); return *this; }
    inline RegisterApplicationRequest& AddInstances(const char* value) { m_instancesHasBeenSet = true; m_instances.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The SAP instance number of the application.</p>
     */
    inline const Aws::String& GetSapInstanceNumber() const{ return m_sapInstanceNumber; }
    inline bool SapInstanceNumberHasBeenSet() const { return m_sapInstanceNumberHasBeenSet; }
    inline void SetSapInstanceNumber(const Aws::String& value) { m_sapInstanceNumberHasBeenSet = true; m_sapInstanceNumber = value; }
    inline void SetSapInstanceNumber(Aws::String&& value) { m_sapInstanceNumberHasBeenSet = true; m_sapInstanceNumber = std::move(value); }
    inline void SetSapInstanceNumber(const char* value) { m_sapInstanceNumberHasBeenSet = true; m_sapInstanceNumber.assign(value); }
    inline RegisterApplicationRequest& WithSapInstanceNumber(const Aws::String& value) { SetSapInstanceNumber(value); return *this;}
    inline RegisterApplicationRequest& WithSapInstanceNumber(Aws::String&& value) { SetSapInstanceNumber(std::move(value)); return *this;}
    inline RegisterApplicationRequest& WithSapInstanceNumber(const char* value) { SetSapInstanceNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The System ID of the application.</p>
     */
    inline const Aws::String& GetSid() const{ return m_sid; }
    inline bool SidHasBeenSet() const { return m_sidHasBeenSet; }
    inline void SetSid(const Aws::String& value) { m_sidHasBeenSet = true; m_sid = value; }
    inline void SetSid(Aws::String&& value) { m_sidHasBeenSet = true; m_sid = std::move(value); }
    inline void SetSid(const char* value) { m_sidHasBeenSet = true; m_sid.assign(value); }
    inline RegisterApplicationRequest& WithSid(const Aws::String& value) { SetSid(value); return *this;}
    inline RegisterApplicationRequest& WithSid(Aws::String&& value) { SetSid(std::move(value)); return *this;}
    inline RegisterApplicationRequest& WithSid(const char* value) { SetSid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to be attached to the SAP application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline RegisterApplicationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline RegisterApplicationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline RegisterApplicationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline RegisterApplicationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline RegisterApplicationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline RegisterApplicationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline RegisterApplicationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline RegisterApplicationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline RegisterApplicationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The credentials of the SAP application.</p>
     */
    inline const Aws::Vector<ApplicationCredential>& GetCredentials() const{ return m_credentials; }
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }
    inline void SetCredentials(const Aws::Vector<ApplicationCredential>& value) { m_credentialsHasBeenSet = true; m_credentials = value; }
    inline void SetCredentials(Aws::Vector<ApplicationCredential>&& value) { m_credentialsHasBeenSet = true; m_credentials = std::move(value); }
    inline RegisterApplicationRequest& WithCredentials(const Aws::Vector<ApplicationCredential>& value) { SetCredentials(value); return *this;}
    inline RegisterApplicationRequest& WithCredentials(Aws::Vector<ApplicationCredential>&& value) { SetCredentials(std::move(value)); return *this;}
    inline RegisterApplicationRequest& AddCredentials(const ApplicationCredential& value) { m_credentialsHasBeenSet = true; m_credentials.push_back(value); return *this; }
    inline RegisterApplicationRequest& AddCredentials(ApplicationCredential&& value) { m_credentialsHasBeenSet = true; m_credentials.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name of the SAP HANA database.</p>
     */
    inline const Aws::String& GetDatabaseArn() const{ return m_databaseArn; }
    inline bool DatabaseArnHasBeenSet() const { return m_databaseArnHasBeenSet; }
    inline void SetDatabaseArn(const Aws::String& value) { m_databaseArnHasBeenSet = true; m_databaseArn = value; }
    inline void SetDatabaseArn(Aws::String&& value) { m_databaseArnHasBeenSet = true; m_databaseArn = std::move(value); }
    inline void SetDatabaseArn(const char* value) { m_databaseArnHasBeenSet = true; m_databaseArn.assign(value); }
    inline RegisterApplicationRequest& WithDatabaseArn(const Aws::String& value) { SetDatabaseArn(value); return *this;}
    inline RegisterApplicationRequest& WithDatabaseArn(Aws::String&& value) { SetDatabaseArn(std::move(value)); return *this;}
    inline RegisterApplicationRequest& WithDatabaseArn(const char* value) { SetDatabaseArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is an optional parameter for component details to which the SAP ABAP
     * application is attached, such as Web Dispatcher.</p> <p>This is an array of
     * ApplicationComponent objects. You may input 0 to 5 items.</p>
     */
    inline const Aws::Vector<ComponentInfo>& GetComponentsInfo() const{ return m_componentsInfo; }
    inline bool ComponentsInfoHasBeenSet() const { return m_componentsInfoHasBeenSet; }
    inline void SetComponentsInfo(const Aws::Vector<ComponentInfo>& value) { m_componentsInfoHasBeenSet = true; m_componentsInfo = value; }
    inline void SetComponentsInfo(Aws::Vector<ComponentInfo>&& value) { m_componentsInfoHasBeenSet = true; m_componentsInfo = std::move(value); }
    inline RegisterApplicationRequest& WithComponentsInfo(const Aws::Vector<ComponentInfo>& value) { SetComponentsInfo(value); return *this;}
    inline RegisterApplicationRequest& WithComponentsInfo(Aws::Vector<ComponentInfo>&& value) { SetComponentsInfo(std::move(value)); return *this;}
    inline RegisterApplicationRequest& AddComponentsInfo(const ComponentInfo& value) { m_componentsInfoHasBeenSet = true; m_componentsInfo.push_back(value); return *this; }
    inline RegisterApplicationRequest& AddComponentsInfo(ComponentInfo&& value) { m_componentsInfoHasBeenSet = true; m_componentsInfo.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    ApplicationType m_applicationType;
    bool m_applicationTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_instances;
    bool m_instancesHasBeenSet = false;

    Aws::String m_sapInstanceNumber;
    bool m_sapInstanceNumberHasBeenSet = false;

    Aws::String m_sid;
    bool m_sidHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<ApplicationCredential> m_credentials;
    bool m_credentialsHasBeenSet = false;

    Aws::String m_databaseArn;
    bool m_databaseArnHasBeenSet = false;

    Aws::Vector<ComponentInfo> m_componentsInfo;
    bool m_componentsInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
