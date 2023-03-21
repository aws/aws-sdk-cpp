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

  class SourceServerActionDocument
  {
  public:
    AWS_MGN_API SourceServerActionDocument();
    AWS_MGN_API SourceServerActionDocument(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API SourceServerActionDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Source server post migration custom action ID.</p>
     */
    inline const Aws::String& GetActionID() const{ return m_actionID; }

    /**
     * <p>Source server post migration custom action ID.</p>
     */
    inline bool ActionIDHasBeenSet() const { return m_actionIDHasBeenSet; }

    /**
     * <p>Source server post migration custom action ID.</p>
     */
    inline void SetActionID(const Aws::String& value) { m_actionIDHasBeenSet = true; m_actionID = value; }

    /**
     * <p>Source server post migration custom action ID.</p>
     */
    inline void SetActionID(Aws::String&& value) { m_actionIDHasBeenSet = true; m_actionID = std::move(value); }

    /**
     * <p>Source server post migration custom action ID.</p>
     */
    inline void SetActionID(const char* value) { m_actionIDHasBeenSet = true; m_actionID.assign(value); }

    /**
     * <p>Source server post migration custom action ID.</p>
     */
    inline SourceServerActionDocument& WithActionID(const Aws::String& value) { SetActionID(value); return *this;}

    /**
     * <p>Source server post migration custom action ID.</p>
     */
    inline SourceServerActionDocument& WithActionID(Aws::String&& value) { SetActionID(std::move(value)); return *this;}

    /**
     * <p>Source server post migration custom action ID.</p>
     */
    inline SourceServerActionDocument& WithActionID(const char* value) { SetActionID(value); return *this;}


    /**
     * <p>Source server post migration custom action name.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }

    /**
     * <p>Source server post migration custom action name.</p>
     */
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }

    /**
     * <p>Source server post migration custom action name.</p>
     */
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }

    /**
     * <p>Source server post migration custom action name.</p>
     */
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }

    /**
     * <p>Source server post migration custom action name.</p>
     */
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }

    /**
     * <p>Source server post migration custom action name.</p>
     */
    inline SourceServerActionDocument& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}

    /**
     * <p>Source server post migration custom action name.</p>
     */
    inline SourceServerActionDocument& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}

    /**
     * <p>Source server post migration custom action name.</p>
     */
    inline SourceServerActionDocument& WithActionName(const char* value) { SetActionName(value); return *this;}


    /**
     * <p>Source server post migration custom action active status.</p>
     */
    inline bool GetActive() const{ return m_active; }

    /**
     * <p>Source server post migration custom action active status.</p>
     */
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }

    /**
     * <p>Source server post migration custom action active status.</p>
     */
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }

    /**
     * <p>Source server post migration custom action active status.</p>
     */
    inline SourceServerActionDocument& WithActive(bool value) { SetActive(value); return *this;}


    /**
     * <p>Source server post migration custom action category.</p>
     */
    inline const ActionCategory& GetCategory() const{ return m_category; }

    /**
     * <p>Source server post migration custom action category.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>Source server post migration custom action category.</p>
     */
    inline void SetCategory(const ActionCategory& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>Source server post migration custom action category.</p>
     */
    inline void SetCategory(ActionCategory&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>Source server post migration custom action category.</p>
     */
    inline SourceServerActionDocument& WithCategory(const ActionCategory& value) { SetCategory(value); return *this;}

    /**
     * <p>Source server post migration custom action category.</p>
     */
    inline SourceServerActionDocument& WithCategory(ActionCategory&& value) { SetCategory(std::move(value)); return *this;}


    /**
     * <p>Source server post migration custom action description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Source server post migration custom action description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Source server post migration custom action description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Source server post migration custom action description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Source server post migration custom action description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Source server post migration custom action description.</p>
     */
    inline SourceServerActionDocument& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Source server post migration custom action description.</p>
     */
    inline SourceServerActionDocument& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Source server post migration custom action description.</p>
     */
    inline SourceServerActionDocument& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Source server post migration custom action document identifier.</p>
     */
    inline const Aws::String& GetDocumentIdentifier() const{ return m_documentIdentifier; }

    /**
     * <p>Source server post migration custom action document identifier.</p>
     */
    inline bool DocumentIdentifierHasBeenSet() const { return m_documentIdentifierHasBeenSet; }

    /**
     * <p>Source server post migration custom action document identifier.</p>
     */
    inline void SetDocumentIdentifier(const Aws::String& value) { m_documentIdentifierHasBeenSet = true; m_documentIdentifier = value; }

    /**
     * <p>Source server post migration custom action document identifier.</p>
     */
    inline void SetDocumentIdentifier(Aws::String&& value) { m_documentIdentifierHasBeenSet = true; m_documentIdentifier = std::move(value); }

    /**
     * <p>Source server post migration custom action document identifier.</p>
     */
    inline void SetDocumentIdentifier(const char* value) { m_documentIdentifierHasBeenSet = true; m_documentIdentifier.assign(value); }

    /**
     * <p>Source server post migration custom action document identifier.</p>
     */
    inline SourceServerActionDocument& WithDocumentIdentifier(const Aws::String& value) { SetDocumentIdentifier(value); return *this;}

    /**
     * <p>Source server post migration custom action document identifier.</p>
     */
    inline SourceServerActionDocument& WithDocumentIdentifier(Aws::String&& value) { SetDocumentIdentifier(std::move(value)); return *this;}

    /**
     * <p>Source server post migration custom action document identifier.</p>
     */
    inline SourceServerActionDocument& WithDocumentIdentifier(const char* value) { SetDocumentIdentifier(value); return *this;}


    /**
     * <p>Source server post migration custom action document version.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }

    /**
     * <p>Source server post migration custom action document version.</p>
     */
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }

    /**
     * <p>Source server post migration custom action document version.</p>
     */
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }

    /**
     * <p>Source server post migration custom action document version.</p>
     */
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }

    /**
     * <p>Source server post migration custom action document version.</p>
     */
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }

    /**
     * <p>Source server post migration custom action document version.</p>
     */
    inline SourceServerActionDocument& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>Source server post migration custom action document version.</p>
     */
    inline SourceServerActionDocument& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>Source server post migration custom action document version.</p>
     */
    inline SourceServerActionDocument& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}


    /**
     * <p>Source server post migration custom action external parameters.</p>
     */
    inline const Aws::Map<Aws::String, SsmExternalParameter>& GetExternalParameters() const{ return m_externalParameters; }

    /**
     * <p>Source server post migration custom action external parameters.</p>
     */
    inline bool ExternalParametersHasBeenSet() const { return m_externalParametersHasBeenSet; }

    /**
     * <p>Source server post migration custom action external parameters.</p>
     */
    inline void SetExternalParameters(const Aws::Map<Aws::String, SsmExternalParameter>& value) { m_externalParametersHasBeenSet = true; m_externalParameters = value; }

    /**
     * <p>Source server post migration custom action external parameters.</p>
     */
    inline void SetExternalParameters(Aws::Map<Aws::String, SsmExternalParameter>&& value) { m_externalParametersHasBeenSet = true; m_externalParameters = std::move(value); }

    /**
     * <p>Source server post migration custom action external parameters.</p>
     */
    inline SourceServerActionDocument& WithExternalParameters(const Aws::Map<Aws::String, SsmExternalParameter>& value) { SetExternalParameters(value); return *this;}

    /**
     * <p>Source server post migration custom action external parameters.</p>
     */
    inline SourceServerActionDocument& WithExternalParameters(Aws::Map<Aws::String, SsmExternalParameter>&& value) { SetExternalParameters(std::move(value)); return *this;}

    /**
     * <p>Source server post migration custom action external parameters.</p>
     */
    inline SourceServerActionDocument& AddExternalParameters(const Aws::String& key, const SsmExternalParameter& value) { m_externalParametersHasBeenSet = true; m_externalParameters.emplace(key, value); return *this; }

    /**
     * <p>Source server post migration custom action external parameters.</p>
     */
    inline SourceServerActionDocument& AddExternalParameters(Aws::String&& key, const SsmExternalParameter& value) { m_externalParametersHasBeenSet = true; m_externalParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Source server post migration custom action external parameters.</p>
     */
    inline SourceServerActionDocument& AddExternalParameters(const Aws::String& key, SsmExternalParameter&& value) { m_externalParametersHasBeenSet = true; m_externalParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Source server post migration custom action external parameters.</p>
     */
    inline SourceServerActionDocument& AddExternalParameters(Aws::String&& key, SsmExternalParameter&& value) { m_externalParametersHasBeenSet = true; m_externalParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Source server post migration custom action external parameters.</p>
     */
    inline SourceServerActionDocument& AddExternalParameters(const char* key, SsmExternalParameter&& value) { m_externalParametersHasBeenSet = true; m_externalParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Source server post migration custom action external parameters.</p>
     */
    inline SourceServerActionDocument& AddExternalParameters(const char* key, const SsmExternalParameter& value) { m_externalParametersHasBeenSet = true; m_externalParameters.emplace(key, value); return *this; }


    /**
     * <p>Source server post migration custom action must succeed for cutover.</p>
     */
    inline bool GetMustSucceedForCutover() const{ return m_mustSucceedForCutover; }

    /**
     * <p>Source server post migration custom action must succeed for cutover.</p>
     */
    inline bool MustSucceedForCutoverHasBeenSet() const { return m_mustSucceedForCutoverHasBeenSet; }

    /**
     * <p>Source server post migration custom action must succeed for cutover.</p>
     */
    inline void SetMustSucceedForCutover(bool value) { m_mustSucceedForCutoverHasBeenSet = true; m_mustSucceedForCutover = value; }

    /**
     * <p>Source server post migration custom action must succeed for cutover.</p>
     */
    inline SourceServerActionDocument& WithMustSucceedForCutover(bool value) { SetMustSucceedForCutover(value); return *this;}


    /**
     * <p>Source server post migration custom action order.</p>
     */
    inline int GetOrder() const{ return m_order; }

    /**
     * <p>Source server post migration custom action order.</p>
     */
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }

    /**
     * <p>Source server post migration custom action order.</p>
     */
    inline void SetOrder(int value) { m_orderHasBeenSet = true; m_order = value; }

    /**
     * <p>Source server post migration custom action order.</p>
     */
    inline SourceServerActionDocument& WithOrder(int value) { SetOrder(value); return *this;}


    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& GetParameters() const{ return m_parameters; }

    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline SourceServerActionDocument& WithParameters(const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& value) { SetParameters(value); return *this;}

    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline SourceServerActionDocument& WithParameters(Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline SourceServerActionDocument& AddParameters(const Aws::String& key, const Aws::Vector<SsmParameterStoreParameter>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline SourceServerActionDocument& AddParameters(Aws::String&& key, const Aws::Vector<SsmParameterStoreParameter>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline SourceServerActionDocument& AddParameters(const Aws::String& key, Aws::Vector<SsmParameterStoreParameter>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline SourceServerActionDocument& AddParameters(Aws::String&& key, Aws::Vector<SsmParameterStoreParameter>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline SourceServerActionDocument& AddParameters(const char* key, Aws::Vector<SsmParameterStoreParameter>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline SourceServerActionDocument& AddParameters(const char* key, const Aws::Vector<SsmParameterStoreParameter>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>Source server post migration custom action timeout in seconds.</p>
     */
    inline int GetTimeoutSeconds() const{ return m_timeoutSeconds; }

    /**
     * <p>Source server post migration custom action timeout in seconds.</p>
     */
    inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }

    /**
     * <p>Source server post migration custom action timeout in seconds.</p>
     */
    inline void SetTimeoutSeconds(int value) { m_timeoutSecondsHasBeenSet = true; m_timeoutSeconds = value; }

    /**
     * <p>Source server post migration custom action timeout in seconds.</p>
     */
    inline SourceServerActionDocument& WithTimeoutSeconds(int value) { SetTimeoutSeconds(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    
    inline SourceServerActionDocument& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SourceServerActionDocument& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SourceServerActionDocument& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
