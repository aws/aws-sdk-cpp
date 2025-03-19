/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/ActionCategory.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mgn/model/SsmExternalParameter.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/model/SsmParameterStoreParameter.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class PutTemplateActionRequest : public MgnRequest
  {
  public:
    AWS_MGN_API PutTemplateActionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutTemplateAction"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Template post migration custom action ID.</p>
     */
    inline const Aws::String& GetActionID() const { return m_actionID; }
    inline bool ActionIDHasBeenSet() const { return m_actionIDHasBeenSet; }
    template<typename ActionIDT = Aws::String>
    void SetActionID(ActionIDT&& value) { m_actionIDHasBeenSet = true; m_actionID = std::forward<ActionIDT>(value); }
    template<typename ActionIDT = Aws::String>
    PutTemplateActionRequest& WithActionID(ActionIDT&& value) { SetActionID(std::forward<ActionIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Template post migration custom action name.</p>
     */
    inline const Aws::String& GetActionName() const { return m_actionName; }
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
    template<typename ActionNameT = Aws::String>
    void SetActionName(ActionNameT&& value) { m_actionNameHasBeenSet = true; m_actionName = std::forward<ActionNameT>(value); }
    template<typename ActionNameT = Aws::String>
    PutTemplateActionRequest& WithActionName(ActionNameT&& value) { SetActionName(std::forward<ActionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Template post migration custom action active status.</p>
     */
    inline bool GetActive() const { return m_active; }
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }
    inline PutTemplateActionRequest& WithActive(bool value) { SetActive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Template post migration custom action category.</p>
     */
    inline ActionCategory GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(ActionCategory value) { m_categoryHasBeenSet = true; m_category = value; }
    inline PutTemplateActionRequest& WithCategory(ActionCategory value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Template post migration custom action description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PutTemplateActionRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Template post migration custom action document identifier.</p>
     */
    inline const Aws::String& GetDocumentIdentifier() const { return m_documentIdentifier; }
    inline bool DocumentIdentifierHasBeenSet() const { return m_documentIdentifierHasBeenSet; }
    template<typename DocumentIdentifierT = Aws::String>
    void SetDocumentIdentifier(DocumentIdentifierT&& value) { m_documentIdentifierHasBeenSet = true; m_documentIdentifier = std::forward<DocumentIdentifierT>(value); }
    template<typename DocumentIdentifierT = Aws::String>
    PutTemplateActionRequest& WithDocumentIdentifier(DocumentIdentifierT&& value) { SetDocumentIdentifier(std::forward<DocumentIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Template post migration custom action document version.</p>
     */
    inline const Aws::String& GetDocumentVersion() const { return m_documentVersion; }
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }
    template<typename DocumentVersionT = Aws::String>
    void SetDocumentVersion(DocumentVersionT&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::forward<DocumentVersionT>(value); }
    template<typename DocumentVersionT = Aws::String>
    PutTemplateActionRequest& WithDocumentVersion(DocumentVersionT&& value) { SetDocumentVersion(std::forward<DocumentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Template post migration custom action external parameters.</p>
     */
    inline const Aws::Map<Aws::String, SsmExternalParameter>& GetExternalParameters() const { return m_externalParameters; }
    inline bool ExternalParametersHasBeenSet() const { return m_externalParametersHasBeenSet; }
    template<typename ExternalParametersT = Aws::Map<Aws::String, SsmExternalParameter>>
    void SetExternalParameters(ExternalParametersT&& value) { m_externalParametersHasBeenSet = true; m_externalParameters = std::forward<ExternalParametersT>(value); }
    template<typename ExternalParametersT = Aws::Map<Aws::String, SsmExternalParameter>>
    PutTemplateActionRequest& WithExternalParameters(ExternalParametersT&& value) { SetExternalParameters(std::forward<ExternalParametersT>(value)); return *this;}
    template<typename ExternalParametersKeyT = Aws::String, typename ExternalParametersValueT = SsmExternalParameter>
    PutTemplateActionRequest& AddExternalParameters(ExternalParametersKeyT&& key, ExternalParametersValueT&& value) {
      m_externalParametersHasBeenSet = true; m_externalParameters.emplace(std::forward<ExternalParametersKeyT>(key), std::forward<ExternalParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Launch configuration template ID.</p>
     */
    inline const Aws::String& GetLaunchConfigurationTemplateID() const { return m_launchConfigurationTemplateID; }
    inline bool LaunchConfigurationTemplateIDHasBeenSet() const { return m_launchConfigurationTemplateIDHasBeenSet; }
    template<typename LaunchConfigurationTemplateIDT = Aws::String>
    void SetLaunchConfigurationTemplateID(LaunchConfigurationTemplateIDT&& value) { m_launchConfigurationTemplateIDHasBeenSet = true; m_launchConfigurationTemplateID = std::forward<LaunchConfigurationTemplateIDT>(value); }
    template<typename LaunchConfigurationTemplateIDT = Aws::String>
    PutTemplateActionRequest& WithLaunchConfigurationTemplateID(LaunchConfigurationTemplateIDT&& value) { SetLaunchConfigurationTemplateID(std::forward<LaunchConfigurationTemplateIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Template post migration custom action must succeed for cutover.</p>
     */
    inline bool GetMustSucceedForCutover() const { return m_mustSucceedForCutover; }
    inline bool MustSucceedForCutoverHasBeenSet() const { return m_mustSucceedForCutoverHasBeenSet; }
    inline void SetMustSucceedForCutover(bool value) { m_mustSucceedForCutoverHasBeenSet = true; m_mustSucceedForCutover = value; }
    inline PutTemplateActionRequest& WithMustSucceedForCutover(bool value) { SetMustSucceedForCutover(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Operating system eligible for this template post migration custom action.</p>
     */
    inline const Aws::String& GetOperatingSystem() const { return m_operatingSystem; }
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
    template<typename OperatingSystemT = Aws::String>
    void SetOperatingSystem(OperatingSystemT&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::forward<OperatingSystemT>(value); }
    template<typename OperatingSystemT = Aws::String>
    PutTemplateActionRequest& WithOperatingSystem(OperatingSystemT&& value) { SetOperatingSystem(std::forward<OperatingSystemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Template post migration custom action order.</p>
     */
    inline int GetOrder() const { return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(int value) { m_orderHasBeenSet = true; m_order = value; }
    inline PutTemplateActionRequest& WithOrder(int value) { SetOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Template post migration custom action parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>>
    PutTemplateActionRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::Vector<SsmParameterStoreParameter>>
    PutTemplateActionRequest& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Template post migration custom action timeout in seconds.</p>
     */
    inline int GetTimeoutSeconds() const { return m_timeoutSeconds; }
    inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }
    inline void SetTimeoutSeconds(int value) { m_timeoutSecondsHasBeenSet = true; m_timeoutSeconds = value; }
    inline PutTemplateActionRequest& WithTimeoutSeconds(int value) { SetTimeoutSeconds(value); return *this;}
    ///@}
  private:

    Aws::String m_actionID;
    bool m_actionIDHasBeenSet = false;

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;

    bool m_active{false};
    bool m_activeHasBeenSet = false;

    ActionCategory m_category{ActionCategory::NOT_SET};
    bool m_categoryHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_documentIdentifier;
    bool m_documentIdentifierHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    Aws::Map<Aws::String, SsmExternalParameter> m_externalParameters;
    bool m_externalParametersHasBeenSet = false;

    Aws::String m_launchConfigurationTemplateID;
    bool m_launchConfigurationTemplateIDHasBeenSet = false;

    bool m_mustSucceedForCutover{false};
    bool m_mustSucceedForCutoverHasBeenSet = false;

    Aws::String m_operatingSystem;
    bool m_operatingSystemHasBeenSet = false;

    int m_order{0};
    bool m_orderHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>> m_parameters;
    bool m_parametersHasBeenSet = false;

    int m_timeoutSeconds{0};
    bool m_timeoutSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
