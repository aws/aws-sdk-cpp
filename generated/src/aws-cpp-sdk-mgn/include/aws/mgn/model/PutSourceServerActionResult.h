﻿/**
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
    AWS_MGN_API PutSourceServerActionResult();
    AWS_MGN_API PutSourceServerActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API PutSourceServerActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Source server post migration custom action ID.</p>
     */
    inline const Aws::String& GetActionID() const{ return m_actionID; }
    inline void SetActionID(const Aws::String& value) { m_actionID = value; }
    inline void SetActionID(Aws::String&& value) { m_actionID = std::move(value); }
    inline void SetActionID(const char* value) { m_actionID.assign(value); }
    inline PutSourceServerActionResult& WithActionID(const Aws::String& value) { SetActionID(value); return *this;}
    inline PutSourceServerActionResult& WithActionID(Aws::String&& value) { SetActionID(std::move(value)); return *this;}
    inline PutSourceServerActionResult& WithActionID(const char* value) { SetActionID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action name.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }
    inline void SetActionName(const Aws::String& value) { m_actionName = value; }
    inline void SetActionName(Aws::String&& value) { m_actionName = std::move(value); }
    inline void SetActionName(const char* value) { m_actionName.assign(value); }
    inline PutSourceServerActionResult& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}
    inline PutSourceServerActionResult& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}
    inline PutSourceServerActionResult& WithActionName(const char* value) { SetActionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action active status.</p>
     */
    inline bool GetActive() const{ return m_active; }
    inline void SetActive(bool value) { m_active = value; }
    inline PutSourceServerActionResult& WithActive(bool value) { SetActive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action category.</p>
     */
    inline const ActionCategory& GetCategory() const{ return m_category; }
    inline void SetCategory(const ActionCategory& value) { m_category = value; }
    inline void SetCategory(ActionCategory&& value) { m_category = std::move(value); }
    inline PutSourceServerActionResult& WithCategory(const ActionCategory& value) { SetCategory(value); return *this;}
    inline PutSourceServerActionResult& WithCategory(ActionCategory&& value) { SetCategory(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline PutSourceServerActionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline PutSourceServerActionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline PutSourceServerActionResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action document identifier.</p>
     */
    inline const Aws::String& GetDocumentIdentifier() const{ return m_documentIdentifier; }
    inline void SetDocumentIdentifier(const Aws::String& value) { m_documentIdentifier = value; }
    inline void SetDocumentIdentifier(Aws::String&& value) { m_documentIdentifier = std::move(value); }
    inline void SetDocumentIdentifier(const char* value) { m_documentIdentifier.assign(value); }
    inline PutSourceServerActionResult& WithDocumentIdentifier(const Aws::String& value) { SetDocumentIdentifier(value); return *this;}
    inline PutSourceServerActionResult& WithDocumentIdentifier(Aws::String&& value) { SetDocumentIdentifier(std::move(value)); return *this;}
    inline PutSourceServerActionResult& WithDocumentIdentifier(const char* value) { SetDocumentIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action document version.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersion = value; }
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersion = std::move(value); }
    inline void SetDocumentVersion(const char* value) { m_documentVersion.assign(value); }
    inline PutSourceServerActionResult& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}
    inline PutSourceServerActionResult& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}
    inline PutSourceServerActionResult& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action external parameters.</p>
     */
    inline const Aws::Map<Aws::String, SsmExternalParameter>& GetExternalParameters() const{ return m_externalParameters; }
    inline void SetExternalParameters(const Aws::Map<Aws::String, SsmExternalParameter>& value) { m_externalParameters = value; }
    inline void SetExternalParameters(Aws::Map<Aws::String, SsmExternalParameter>&& value) { m_externalParameters = std::move(value); }
    inline PutSourceServerActionResult& WithExternalParameters(const Aws::Map<Aws::String, SsmExternalParameter>& value) { SetExternalParameters(value); return *this;}
    inline PutSourceServerActionResult& WithExternalParameters(Aws::Map<Aws::String, SsmExternalParameter>&& value) { SetExternalParameters(std::move(value)); return *this;}
    inline PutSourceServerActionResult& AddExternalParameters(const Aws::String& key, const SsmExternalParameter& value) { m_externalParameters.emplace(key, value); return *this; }
    inline PutSourceServerActionResult& AddExternalParameters(Aws::String&& key, const SsmExternalParameter& value) { m_externalParameters.emplace(std::move(key), value); return *this; }
    inline PutSourceServerActionResult& AddExternalParameters(const Aws::String& key, SsmExternalParameter&& value) { m_externalParameters.emplace(key, std::move(value)); return *this; }
    inline PutSourceServerActionResult& AddExternalParameters(Aws::String&& key, SsmExternalParameter&& value) { m_externalParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline PutSourceServerActionResult& AddExternalParameters(const char* key, SsmExternalParameter&& value) { m_externalParameters.emplace(key, std::move(value)); return *this; }
    inline PutSourceServerActionResult& AddExternalParameters(const char* key, const SsmExternalParameter& value) { m_externalParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action must succeed for cutover.</p>
     */
    inline bool GetMustSucceedForCutover() const{ return m_mustSucceedForCutover; }
    inline void SetMustSucceedForCutover(bool value) { m_mustSucceedForCutover = value; }
    inline PutSourceServerActionResult& WithMustSucceedForCutover(bool value) { SetMustSucceedForCutover(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action order.</p>
     */
    inline int GetOrder() const{ return m_order; }
    inline void SetOrder(int value) { m_order = value; }
    inline PutSourceServerActionResult& WithOrder(int value) { SetOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& GetParameters() const{ return m_parameters; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& value) { m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>&& value) { m_parameters = std::move(value); }
    inline PutSourceServerActionResult& WithParameters(const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& value) { SetParameters(value); return *this;}
    inline PutSourceServerActionResult& WithParameters(Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>&& value) { SetParameters(std::move(value)); return *this;}
    inline PutSourceServerActionResult& AddParameters(const Aws::String& key, const Aws::Vector<SsmParameterStoreParameter>& value) { m_parameters.emplace(key, value); return *this; }
    inline PutSourceServerActionResult& AddParameters(Aws::String&& key, const Aws::Vector<SsmParameterStoreParameter>& value) { m_parameters.emplace(std::move(key), value); return *this; }
    inline PutSourceServerActionResult& AddParameters(const Aws::String& key, Aws::Vector<SsmParameterStoreParameter>&& value) { m_parameters.emplace(key, std::move(value)); return *this; }
    inline PutSourceServerActionResult& AddParameters(Aws::String&& key, Aws::Vector<SsmParameterStoreParameter>&& value) { m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline PutSourceServerActionResult& AddParameters(const char* key, Aws::Vector<SsmParameterStoreParameter>&& value) { m_parameters.emplace(key, std::move(value)); return *this; }
    inline PutSourceServerActionResult& AddParameters(const char* key, const Aws::Vector<SsmParameterStoreParameter>& value) { m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action timeout in seconds.</p>
     */
    inline int GetTimeoutSeconds() const{ return m_timeoutSeconds; }
    inline void SetTimeoutSeconds(int value) { m_timeoutSeconds = value; }
    inline PutSourceServerActionResult& WithTimeoutSeconds(int value) { SetTimeoutSeconds(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutSourceServerActionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutSourceServerActionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutSourceServerActionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_actionID;

    Aws::String m_actionName;

    bool m_active;

    ActionCategory m_category;

    Aws::String m_description;

    Aws::String m_documentIdentifier;

    Aws::String m_documentVersion;

    Aws::Map<Aws::String, SsmExternalParameter> m_externalParameters;

    bool m_mustSucceedForCutover;

    int m_order;

    Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>> m_parameters;

    int m_timeoutSeconds;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
