/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class PutSourceServerActionRequest : public MgnRequest
  {
  public:
    AWS_MGN_API PutSourceServerActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutSourceServerAction"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


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
    inline PutSourceServerActionRequest& WithActionID(const Aws::String& value) { SetActionID(value); return *this;}

    /**
     * <p>Source server post migration custom action ID.</p>
     */
    inline PutSourceServerActionRequest& WithActionID(Aws::String&& value) { SetActionID(std::move(value)); return *this;}

    /**
     * <p>Source server post migration custom action ID.</p>
     */
    inline PutSourceServerActionRequest& WithActionID(const char* value) { SetActionID(value); return *this;}


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
    inline PutSourceServerActionRequest& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}

    /**
     * <p>Source server post migration custom action name.</p>
     */
    inline PutSourceServerActionRequest& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}

    /**
     * <p>Source server post migration custom action name.</p>
     */
    inline PutSourceServerActionRequest& WithActionName(const char* value) { SetActionName(value); return *this;}


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
    inline PutSourceServerActionRequest& WithActive(bool value) { SetActive(value); return *this;}


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
    inline PutSourceServerActionRequest& WithDocumentIdentifier(const Aws::String& value) { SetDocumentIdentifier(value); return *this;}

    /**
     * <p>Source server post migration custom action document identifier.</p>
     */
    inline PutSourceServerActionRequest& WithDocumentIdentifier(Aws::String&& value) { SetDocumentIdentifier(std::move(value)); return *this;}

    /**
     * <p>Source server post migration custom action document identifier.</p>
     */
    inline PutSourceServerActionRequest& WithDocumentIdentifier(const char* value) { SetDocumentIdentifier(value); return *this;}


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
    inline PutSourceServerActionRequest& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}

    /**
     * <p>Source server post migration custom action document version.</p>
     */
    inline PutSourceServerActionRequest& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}

    /**
     * <p>Source server post migration custom action document version.</p>
     */
    inline PutSourceServerActionRequest& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}


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
    inline PutSourceServerActionRequest& WithMustSucceedForCutover(bool value) { SetMustSucceedForCutover(value); return *this;}


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
    inline PutSourceServerActionRequest& WithOrder(int value) { SetOrder(value); return *this;}


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
    inline PutSourceServerActionRequest& WithParameters(const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& value) { SetParameters(value); return *this;}

    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline PutSourceServerActionRequest& WithParameters(Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline PutSourceServerActionRequest& AddParameters(const Aws::String& key, const Aws::Vector<SsmParameterStoreParameter>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline PutSourceServerActionRequest& AddParameters(Aws::String&& key, const Aws::Vector<SsmParameterStoreParameter>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline PutSourceServerActionRequest& AddParameters(const Aws::String& key, Aws::Vector<SsmParameterStoreParameter>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline PutSourceServerActionRequest& AddParameters(Aws::String&& key, Aws::Vector<SsmParameterStoreParameter>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline PutSourceServerActionRequest& AddParameters(const char* key, Aws::Vector<SsmParameterStoreParameter>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline PutSourceServerActionRequest& AddParameters(const char* key, const Aws::Vector<SsmParameterStoreParameter>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>Source server ID.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }

    /**
     * <p>Source server ID.</p>
     */
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }

    /**
     * <p>Source server ID.</p>
     */
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = value; }

    /**
     * <p>Source server ID.</p>
     */
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::move(value); }

    /**
     * <p>Source server ID.</p>
     */
    inline void SetSourceServerID(const char* value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID.assign(value); }

    /**
     * <p>Source server ID.</p>
     */
    inline PutSourceServerActionRequest& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}

    /**
     * <p>Source server ID.</p>
     */
    inline PutSourceServerActionRequest& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}

    /**
     * <p>Source server ID.</p>
     */
    inline PutSourceServerActionRequest& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}


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
    inline PutSourceServerActionRequest& WithTimeoutSeconds(int value) { SetTimeoutSeconds(value); return *this;}

  private:

    Aws::String m_actionID;
    bool m_actionIDHasBeenSet = false;

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;

    bool m_active;
    bool m_activeHasBeenSet = false;

    Aws::String m_documentIdentifier;
    bool m_documentIdentifierHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    bool m_mustSucceedForCutover;
    bool m_mustSucceedForCutoverHasBeenSet = false;

    int m_order;
    bool m_orderHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet = false;

    int m_timeoutSeconds;
    bool m_timeoutSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
