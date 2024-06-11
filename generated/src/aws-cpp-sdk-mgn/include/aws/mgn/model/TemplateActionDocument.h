/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/ActionCategory.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mgn/model/SsmExternalParameter.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/model/SsmParameterStoreParameter.h>
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
namespace mgn
{
namespace Model
{

  class TemplateActionDocument
  {
  public:
    AWS_MGN_API TemplateActionDocument();
    AWS_MGN_API TemplateActionDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API TemplateActionDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Template post migration custom action ID.</p>
     */
    inline const Aws::String& GetActionID() const{ return m_actionID; }
    inline bool ActionIDHasBeenSet() const { return m_actionIDHasBeenSet; }
    inline void SetActionID(const Aws::String& value) { m_actionIDHasBeenSet = true; m_actionID = value; }
    inline void SetActionID(Aws::String&& value) { m_actionIDHasBeenSet = true; m_actionID = std::move(value); }
    inline void SetActionID(const char* value) { m_actionIDHasBeenSet = true; m_actionID.assign(value); }
    inline TemplateActionDocument& WithActionID(const Aws::String& value) { SetActionID(value); return *this;}
    inline TemplateActionDocument& WithActionID(Aws::String&& value) { SetActionID(std::move(value)); return *this;}
    inline TemplateActionDocument& WithActionID(const char* value) { SetActionID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Template post migration custom action name.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }
    inline TemplateActionDocument& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}
    inline TemplateActionDocument& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}
    inline TemplateActionDocument& WithActionName(const char* value) { SetActionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Template post migration custom action active status.</p>
     */
    inline bool GetActive() const{ return m_active; }
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }
    inline TemplateActionDocument& WithActive(bool value) { SetActive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Template post migration custom action category.</p>
     */
    inline const ActionCategory& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const ActionCategory& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(ActionCategory&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline TemplateActionDocument& WithCategory(const ActionCategory& value) { SetCategory(value); return *this;}
    inline TemplateActionDocument& WithCategory(ActionCategory&& value) { SetCategory(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Template post migration custom action description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline TemplateActionDocument& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline TemplateActionDocument& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline TemplateActionDocument& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Template post migration custom action document identifier.</p>
     */
    inline const Aws::String& GetDocumentIdentifier() const{ return m_documentIdentifier; }
    inline bool DocumentIdentifierHasBeenSet() const { return m_documentIdentifierHasBeenSet; }
    inline void SetDocumentIdentifier(const Aws::String& value) { m_documentIdentifierHasBeenSet = true; m_documentIdentifier = value; }
    inline void SetDocumentIdentifier(Aws::String&& value) { m_documentIdentifierHasBeenSet = true; m_documentIdentifier = std::move(value); }
    inline void SetDocumentIdentifier(const char* value) { m_documentIdentifierHasBeenSet = true; m_documentIdentifier.assign(value); }
    inline TemplateActionDocument& WithDocumentIdentifier(const Aws::String& value) { SetDocumentIdentifier(value); return *this;}
    inline TemplateActionDocument& WithDocumentIdentifier(Aws::String&& value) { SetDocumentIdentifier(std::move(value)); return *this;}
    inline TemplateActionDocument& WithDocumentIdentifier(const char* value) { SetDocumentIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Template post migration custom action document version.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }
    inline TemplateActionDocument& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}
    inline TemplateActionDocument& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}
    inline TemplateActionDocument& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Template post migration custom action external parameters.</p>
     */
    inline const Aws::Map<Aws::String, SsmExternalParameter>& GetExternalParameters() const{ return m_externalParameters; }
    inline bool ExternalParametersHasBeenSet() const { return m_externalParametersHasBeenSet; }
    inline void SetExternalParameters(const Aws::Map<Aws::String, SsmExternalParameter>& value) { m_externalParametersHasBeenSet = true; m_externalParameters = value; }
    inline void SetExternalParameters(Aws::Map<Aws::String, SsmExternalParameter>&& value) { m_externalParametersHasBeenSet = true; m_externalParameters = std::move(value); }
    inline TemplateActionDocument& WithExternalParameters(const Aws::Map<Aws::String, SsmExternalParameter>& value) { SetExternalParameters(value); return *this;}
    inline TemplateActionDocument& WithExternalParameters(Aws::Map<Aws::String, SsmExternalParameter>&& value) { SetExternalParameters(std::move(value)); return *this;}
    inline TemplateActionDocument& AddExternalParameters(const Aws::String& key, const SsmExternalParameter& value) { m_externalParametersHasBeenSet = true; m_externalParameters.emplace(key, value); return *this; }
    inline TemplateActionDocument& AddExternalParameters(Aws::String&& key, const SsmExternalParameter& value) { m_externalParametersHasBeenSet = true; m_externalParameters.emplace(std::move(key), value); return *this; }
    inline TemplateActionDocument& AddExternalParameters(const Aws::String& key, SsmExternalParameter&& value) { m_externalParametersHasBeenSet = true; m_externalParameters.emplace(key, std::move(value)); return *this; }
    inline TemplateActionDocument& AddExternalParameters(Aws::String&& key, SsmExternalParameter&& value) { m_externalParametersHasBeenSet = true; m_externalParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline TemplateActionDocument& AddExternalParameters(const char* key, SsmExternalParameter&& value) { m_externalParametersHasBeenSet = true; m_externalParameters.emplace(key, std::move(value)); return *this; }
    inline TemplateActionDocument& AddExternalParameters(const char* key, const SsmExternalParameter& value) { m_externalParametersHasBeenSet = true; m_externalParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Template post migration custom action must succeed for cutover.</p>
     */
    inline bool GetMustSucceedForCutover() const{ return m_mustSucceedForCutover; }
    inline bool MustSucceedForCutoverHasBeenSet() const { return m_mustSucceedForCutoverHasBeenSet; }
    inline void SetMustSucceedForCutover(bool value) { m_mustSucceedForCutoverHasBeenSet = true; m_mustSucceedForCutover = value; }
    inline TemplateActionDocument& WithMustSucceedForCutover(bool value) { SetMustSucceedForCutover(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Operating system eligible for this template post migration custom action.</p>
     */
    inline const Aws::String& GetOperatingSystem() const{ return m_operatingSystem; }
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }
    inline void SetOperatingSystem(const Aws::String& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }
    inline void SetOperatingSystem(Aws::String&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }
    inline void SetOperatingSystem(const char* value) { m_operatingSystemHasBeenSet = true; m_operatingSystem.assign(value); }
    inline TemplateActionDocument& WithOperatingSystem(const Aws::String& value) { SetOperatingSystem(value); return *this;}
    inline TemplateActionDocument& WithOperatingSystem(Aws::String&& value) { SetOperatingSystem(std::move(value)); return *this;}
    inline TemplateActionDocument& WithOperatingSystem(const char* value) { SetOperatingSystem(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Template post migration custom action order.</p>
     */
    inline int GetOrder() const{ return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(int value) { m_orderHasBeenSet = true; m_order = value; }
    inline TemplateActionDocument& WithOrder(int value) { SetOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Template post migration custom action parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline TemplateActionDocument& WithParameters(const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& value) { SetParameters(value); return *this;}
    inline TemplateActionDocument& WithParameters(Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>&& value) { SetParameters(std::move(value)); return *this;}
    inline TemplateActionDocument& AddParameters(const Aws::String& key, const Aws::Vector<SsmParameterStoreParameter>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline TemplateActionDocument& AddParameters(Aws::String&& key, const Aws::Vector<SsmParameterStoreParameter>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline TemplateActionDocument& AddParameters(const Aws::String& key, Aws::Vector<SsmParameterStoreParameter>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline TemplateActionDocument& AddParameters(Aws::String&& key, Aws::Vector<SsmParameterStoreParameter>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline TemplateActionDocument& AddParameters(const char* key, Aws::Vector<SsmParameterStoreParameter>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline TemplateActionDocument& AddParameters(const char* key, const Aws::Vector<SsmParameterStoreParameter>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Template post migration custom action timeout in seconds.</p>
     */
    inline int GetTimeoutSeconds() const{ return m_timeoutSeconds; }
    inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }
    inline void SetTimeoutSeconds(int value) { m_timeoutSecondsHasBeenSet = true; m_timeoutSeconds = value; }
    inline TemplateActionDocument& WithTimeoutSeconds(int value) { SetTimeoutSeconds(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline TemplateActionDocument& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline TemplateActionDocument& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline TemplateActionDocument& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_actionID;
    bool m_actionIDHasBeenSet = false;

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;

    bool m_active;
    bool m_activeHasBeenSet = false;

    ActionCategory m_category;
    bool m_categoryHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_documentIdentifier;
    bool m_documentIdentifierHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    Aws::Map<Aws::String, SsmExternalParameter> m_externalParameters;
    bool m_externalParametersHasBeenSet = false;

    bool m_mustSucceedForCutover;
    bool m_mustSucceedForCutoverHasBeenSet = false;

    Aws::String m_operatingSystem;
    bool m_operatingSystemHasBeenSet = false;

    int m_order;
    bool m_orderHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>> m_parameters;
    bool m_parametersHasBeenSet = false;

    int m_timeoutSeconds;
    bool m_timeoutSecondsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
