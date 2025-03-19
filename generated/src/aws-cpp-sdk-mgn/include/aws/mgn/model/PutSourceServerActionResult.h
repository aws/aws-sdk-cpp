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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace mgn
{
namespace Model
{
  class PutSourceServerActionResult
  {
  public:
    AWS_MGN_API PutSourceServerActionResult() = default;
    AWS_MGN_API PutSourceServerActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API PutSourceServerActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Source server post migration custom action ID.</p>
     */
    inline const Aws::String& GetActionID() const { return m_actionID; }
    template<typename ActionIDT = Aws::String>
    void SetActionID(ActionIDT&& value) { m_actionIDHasBeenSet = true; m_actionID = std::forward<ActionIDT>(value); }
    template<typename ActionIDT = Aws::String>
    PutSourceServerActionResult& WithActionID(ActionIDT&& value) { SetActionID(std::forward<ActionIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action name.</p>
     */
    inline const Aws::String& GetActionName() const { return m_actionName; }
    template<typename ActionNameT = Aws::String>
    void SetActionName(ActionNameT&& value) { m_actionNameHasBeenSet = true; m_actionName = std::forward<ActionNameT>(value); }
    template<typename ActionNameT = Aws::String>
    PutSourceServerActionResult& WithActionName(ActionNameT&& value) { SetActionName(std::forward<ActionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action active status.</p>
     */
    inline bool GetActive() const { return m_active; }
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }
    inline PutSourceServerActionResult& WithActive(bool value) { SetActive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action category.</p>
     */
    inline ActionCategory GetCategory() const { return m_category; }
    inline void SetCategory(ActionCategory value) { m_categoryHasBeenSet = true; m_category = value; }
    inline PutSourceServerActionResult& WithCategory(ActionCategory value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PutSourceServerActionResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action document identifier.</p>
     */
    inline const Aws::String& GetDocumentIdentifier() const { return m_documentIdentifier; }
    template<typename DocumentIdentifierT = Aws::String>
    void SetDocumentIdentifier(DocumentIdentifierT&& value) { m_documentIdentifierHasBeenSet = true; m_documentIdentifier = std::forward<DocumentIdentifierT>(value); }
    template<typename DocumentIdentifierT = Aws::String>
    PutSourceServerActionResult& WithDocumentIdentifier(DocumentIdentifierT&& value) { SetDocumentIdentifier(std::forward<DocumentIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action document version.</p>
     */
    inline const Aws::String& GetDocumentVersion() const { return m_documentVersion; }
    template<typename DocumentVersionT = Aws::String>
    void SetDocumentVersion(DocumentVersionT&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::forward<DocumentVersionT>(value); }
    template<typename DocumentVersionT = Aws::String>
    PutSourceServerActionResult& WithDocumentVersion(DocumentVersionT&& value) { SetDocumentVersion(std::forward<DocumentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action external parameters.</p>
     */
    inline const Aws::Map<Aws::String, SsmExternalParameter>& GetExternalParameters() const { return m_externalParameters; }
    template<typename ExternalParametersT = Aws::Map<Aws::String, SsmExternalParameter>>
    void SetExternalParameters(ExternalParametersT&& value) { m_externalParametersHasBeenSet = true; m_externalParameters = std::forward<ExternalParametersT>(value); }
    template<typename ExternalParametersT = Aws::Map<Aws::String, SsmExternalParameter>>
    PutSourceServerActionResult& WithExternalParameters(ExternalParametersT&& value) { SetExternalParameters(std::forward<ExternalParametersT>(value)); return *this;}
    template<typename ExternalParametersKeyT = Aws::String, typename ExternalParametersValueT = SsmExternalParameter>
    PutSourceServerActionResult& AddExternalParameters(ExternalParametersKeyT&& key, ExternalParametersValueT&& value) {
      m_externalParametersHasBeenSet = true; m_externalParameters.emplace(std::forward<ExternalParametersKeyT>(key), std::forward<ExternalParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action must succeed for cutover.</p>
     */
    inline bool GetMustSucceedForCutover() const { return m_mustSucceedForCutover; }
    inline void SetMustSucceedForCutover(bool value) { m_mustSucceedForCutoverHasBeenSet = true; m_mustSucceedForCutover = value; }
    inline PutSourceServerActionResult& WithMustSucceedForCutover(bool value) { SetMustSucceedForCutover(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action order.</p>
     */
    inline int GetOrder() const { return m_order; }
    inline void SetOrder(int value) { m_orderHasBeenSet = true; m_order = value; }
    inline PutSourceServerActionResult& WithOrder(int value) { SetOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& GetParameters() const { return m_parameters; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>>
    PutSourceServerActionResult& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::Vector<SsmParameterStoreParameter>>
    PutSourceServerActionResult& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action timeout in seconds.</p>
     */
    inline int GetTimeoutSeconds() const { return m_timeoutSeconds; }
    inline void SetTimeoutSeconds(int value) { m_timeoutSecondsHasBeenSet = true; m_timeoutSeconds = value; }
    inline PutSourceServerActionResult& WithTimeoutSeconds(int value) { SetTimeoutSeconds(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutSourceServerActionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    bool m_mustSucceedForCutover{false};
    bool m_mustSucceedForCutoverHasBeenSet = false;

    int m_order{0};
    bool m_orderHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>> m_parameters;
    bool m_parametersHasBeenSet = false;

    int m_timeoutSeconds{0};
    bool m_timeoutSecondsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
