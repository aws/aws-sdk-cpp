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
    AWS_SSMSAP_API RegisterApplicationRequest() = default;

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
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    RegisterApplicationRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the application.</p>
     */
    inline ApplicationType GetApplicationType() const { return m_applicationType; }
    inline bool ApplicationTypeHasBeenSet() const { return m_applicationTypeHasBeenSet; }
    inline void SetApplicationType(ApplicationType value) { m_applicationTypeHasBeenSet = true; m_applicationType = value; }
    inline RegisterApplicationRequest& WithApplicationType(ApplicationType value) { SetApplicationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instances on which your SAP application is running.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstances() const { return m_instances; }
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }
    template<typename InstancesT = Aws::Vector<Aws::String>>
    void SetInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances = std::forward<InstancesT>(value); }
    template<typename InstancesT = Aws::Vector<Aws::String>>
    RegisterApplicationRequest& WithInstances(InstancesT&& value) { SetInstances(std::forward<InstancesT>(value)); return *this;}
    template<typename InstancesT = Aws::String>
    RegisterApplicationRequest& AddInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances.emplace_back(std::forward<InstancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The SAP instance number of the application.</p>
     */
    inline const Aws::String& GetSapInstanceNumber() const { return m_sapInstanceNumber; }
    inline bool SapInstanceNumberHasBeenSet() const { return m_sapInstanceNumberHasBeenSet; }
    template<typename SapInstanceNumberT = Aws::String>
    void SetSapInstanceNumber(SapInstanceNumberT&& value) { m_sapInstanceNumberHasBeenSet = true; m_sapInstanceNumber = std::forward<SapInstanceNumberT>(value); }
    template<typename SapInstanceNumberT = Aws::String>
    RegisterApplicationRequest& WithSapInstanceNumber(SapInstanceNumberT&& value) { SetSapInstanceNumber(std::forward<SapInstanceNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The System ID of the application.</p>
     */
    inline const Aws::String& GetSid() const { return m_sid; }
    inline bool SidHasBeenSet() const { return m_sidHasBeenSet; }
    template<typename SidT = Aws::String>
    void SetSid(SidT&& value) { m_sidHasBeenSet = true; m_sid = std::forward<SidT>(value); }
    template<typename SidT = Aws::String>
    RegisterApplicationRequest& WithSid(SidT&& value) { SetSid(std::forward<SidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to be attached to the SAP application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    RegisterApplicationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    RegisterApplicationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The credentials of the SAP application.</p>
     */
    inline const Aws::Vector<ApplicationCredential>& GetCredentials() const { return m_credentials; }
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }
    template<typename CredentialsT = Aws::Vector<ApplicationCredential>>
    void SetCredentials(CredentialsT&& value) { m_credentialsHasBeenSet = true; m_credentials = std::forward<CredentialsT>(value); }
    template<typename CredentialsT = Aws::Vector<ApplicationCredential>>
    RegisterApplicationRequest& WithCredentials(CredentialsT&& value) { SetCredentials(std::forward<CredentialsT>(value)); return *this;}
    template<typename CredentialsT = ApplicationCredential>
    RegisterApplicationRequest& AddCredentials(CredentialsT&& value) { m_credentialsHasBeenSet = true; m_credentials.emplace_back(std::forward<CredentialsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name of the SAP HANA database.</p>
     */
    inline const Aws::String& GetDatabaseArn() const { return m_databaseArn; }
    inline bool DatabaseArnHasBeenSet() const { return m_databaseArnHasBeenSet; }
    template<typename DatabaseArnT = Aws::String>
    void SetDatabaseArn(DatabaseArnT&& value) { m_databaseArnHasBeenSet = true; m_databaseArn = std::forward<DatabaseArnT>(value); }
    template<typename DatabaseArnT = Aws::String>
    RegisterApplicationRequest& WithDatabaseArn(DatabaseArnT&& value) { SetDatabaseArn(std::forward<DatabaseArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is an optional parameter for component details to which the SAP ABAP
     * application is attached, such as Web Dispatcher.</p> <p>This is an array of
     * ApplicationComponent objects. You may input 0 to 5 items.</p>
     */
    inline const Aws::Vector<ComponentInfo>& GetComponentsInfo() const { return m_componentsInfo; }
    inline bool ComponentsInfoHasBeenSet() const { return m_componentsInfoHasBeenSet; }
    template<typename ComponentsInfoT = Aws::Vector<ComponentInfo>>
    void SetComponentsInfo(ComponentsInfoT&& value) { m_componentsInfoHasBeenSet = true; m_componentsInfo = std::forward<ComponentsInfoT>(value); }
    template<typename ComponentsInfoT = Aws::Vector<ComponentInfo>>
    RegisterApplicationRequest& WithComponentsInfo(ComponentsInfoT&& value) { SetComponentsInfo(std::forward<ComponentsInfoT>(value)); return *this;}
    template<typename ComponentsInfoT = ComponentInfo>
    RegisterApplicationRequest& AddComponentsInfo(ComponentsInfoT&& value) { m_componentsInfoHasBeenSet = true; m_componentsInfo.emplace_back(std::forward<ComponentsInfoT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    ApplicationType m_applicationType{ApplicationType::NOT_SET};
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
