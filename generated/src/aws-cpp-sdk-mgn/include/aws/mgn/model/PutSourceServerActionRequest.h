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


    ///@{
    /**
     * <p>Source server post migration custom account ID.</p>
     */
    inline const Aws::String& GetAccountID() const{ return m_accountID; }
    inline bool AccountIDHasBeenSet() const { return m_accountIDHasBeenSet; }
    inline void SetAccountID(const Aws::String& value) { m_accountIDHasBeenSet = true; m_accountID = value; }
    inline void SetAccountID(Aws::String&& value) { m_accountIDHasBeenSet = true; m_accountID = std::move(value); }
    inline void SetAccountID(const char* value) { m_accountIDHasBeenSet = true; m_accountID.assign(value); }
    inline PutSourceServerActionRequest& WithAccountID(const Aws::String& value) { SetAccountID(value); return *this;}
    inline PutSourceServerActionRequest& WithAccountID(Aws::String&& value) { SetAccountID(std::move(value)); return *this;}
    inline PutSourceServerActionRequest& WithAccountID(const char* value) { SetAccountID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action ID.</p>
     */
    inline const Aws::String& GetActionID() const{ return m_actionID; }
    inline bool ActionIDHasBeenSet() const { return m_actionIDHasBeenSet; }
    inline void SetActionID(const Aws::String& value) { m_actionIDHasBeenSet = true; m_actionID = value; }
    inline void SetActionID(Aws::String&& value) { m_actionIDHasBeenSet = true; m_actionID = std::move(value); }
    inline void SetActionID(const char* value) { m_actionIDHasBeenSet = true; m_actionID.assign(value); }
    inline PutSourceServerActionRequest& WithActionID(const Aws::String& value) { SetActionID(value); return *this;}
    inline PutSourceServerActionRequest& WithActionID(Aws::String&& value) { SetActionID(std::move(value)); return *this;}
    inline PutSourceServerActionRequest& WithActionID(const char* value) { SetActionID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action name.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }
    inline PutSourceServerActionRequest& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}
    inline PutSourceServerActionRequest& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}
    inline PutSourceServerActionRequest& WithActionName(const char* value) { SetActionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action active status.</p>
     */
    inline bool GetActive() const{ return m_active; }
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }
    inline PutSourceServerActionRequest& WithActive(bool value) { SetActive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action category.</p>
     */
    inline const ActionCategory& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const ActionCategory& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(ActionCategory&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline PutSourceServerActionRequest& WithCategory(const ActionCategory& value) { SetCategory(value); return *this;}
    inline PutSourceServerActionRequest& WithCategory(ActionCategory&& value) { SetCategory(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline PutSourceServerActionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline PutSourceServerActionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline PutSourceServerActionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action document identifier.</p>
     */
    inline const Aws::String& GetDocumentIdentifier() const{ return m_documentIdentifier; }
    inline bool DocumentIdentifierHasBeenSet() const { return m_documentIdentifierHasBeenSet; }
    inline void SetDocumentIdentifier(const Aws::String& value) { m_documentIdentifierHasBeenSet = true; m_documentIdentifier = value; }
    inline void SetDocumentIdentifier(Aws::String&& value) { m_documentIdentifierHasBeenSet = true; m_documentIdentifier = std::move(value); }
    inline void SetDocumentIdentifier(const char* value) { m_documentIdentifierHasBeenSet = true; m_documentIdentifier.assign(value); }
    inline PutSourceServerActionRequest& WithDocumentIdentifier(const Aws::String& value) { SetDocumentIdentifier(value); return *this;}
    inline PutSourceServerActionRequest& WithDocumentIdentifier(Aws::String&& value) { SetDocumentIdentifier(std::move(value)); return *this;}
    inline PutSourceServerActionRequest& WithDocumentIdentifier(const char* value) { SetDocumentIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action document version.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }
    inline PutSourceServerActionRequest& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}
    inline PutSourceServerActionRequest& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}
    inline PutSourceServerActionRequest& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action external parameters.</p>
     */
    inline const Aws::Map<Aws::String, SsmExternalParameter>& GetExternalParameters() const{ return m_externalParameters; }
    inline bool ExternalParametersHasBeenSet() const { return m_externalParametersHasBeenSet; }
    inline void SetExternalParameters(const Aws::Map<Aws::String, SsmExternalParameter>& value) { m_externalParametersHasBeenSet = true; m_externalParameters = value; }
    inline void SetExternalParameters(Aws::Map<Aws::String, SsmExternalParameter>&& value) { m_externalParametersHasBeenSet = true; m_externalParameters = std::move(value); }
    inline PutSourceServerActionRequest& WithExternalParameters(const Aws::Map<Aws::String, SsmExternalParameter>& value) { SetExternalParameters(value); return *this;}
    inline PutSourceServerActionRequest& WithExternalParameters(Aws::Map<Aws::String, SsmExternalParameter>&& value) { SetExternalParameters(std::move(value)); return *this;}
    inline PutSourceServerActionRequest& AddExternalParameters(const Aws::String& key, const SsmExternalParameter& value) { m_externalParametersHasBeenSet = true; m_externalParameters.emplace(key, value); return *this; }
    inline PutSourceServerActionRequest& AddExternalParameters(Aws::String&& key, const SsmExternalParameter& value) { m_externalParametersHasBeenSet = true; m_externalParameters.emplace(std::move(key), value); return *this; }
    inline PutSourceServerActionRequest& AddExternalParameters(const Aws::String& key, SsmExternalParameter&& value) { m_externalParametersHasBeenSet = true; m_externalParameters.emplace(key, std::move(value)); return *this; }
    inline PutSourceServerActionRequest& AddExternalParameters(Aws::String&& key, SsmExternalParameter&& value) { m_externalParametersHasBeenSet = true; m_externalParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline PutSourceServerActionRequest& AddExternalParameters(const char* key, SsmExternalParameter&& value) { m_externalParametersHasBeenSet = true; m_externalParameters.emplace(key, std::move(value)); return *this; }
    inline PutSourceServerActionRequest& AddExternalParameters(const char* key, const SsmExternalParameter& value) { m_externalParametersHasBeenSet = true; m_externalParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action must succeed for cutover.</p>
     */
    inline bool GetMustSucceedForCutover() const{ return m_mustSucceedForCutover; }
    inline bool MustSucceedForCutoverHasBeenSet() const { return m_mustSucceedForCutoverHasBeenSet; }
    inline void SetMustSucceedForCutover(bool value) { m_mustSucceedForCutoverHasBeenSet = true; m_mustSucceedForCutover = value; }
    inline PutSourceServerActionRequest& WithMustSucceedForCutover(bool value) { SetMustSucceedForCutover(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action order.</p>
     */
    inline int GetOrder() const{ return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(int value) { m_orderHasBeenSet = true; m_order = value; }
    inline PutSourceServerActionRequest& WithOrder(int value) { SetOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline PutSourceServerActionRequest& WithParameters(const Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>& value) { SetParameters(value); return *this;}
    inline PutSourceServerActionRequest& WithParameters(Aws::Map<Aws::String, Aws::Vector<SsmParameterStoreParameter>>&& value) { SetParameters(std::move(value)); return *this;}
    inline PutSourceServerActionRequest& AddParameters(const Aws::String& key, const Aws::Vector<SsmParameterStoreParameter>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline PutSourceServerActionRequest& AddParameters(Aws::String&& key, const Aws::Vector<SsmParameterStoreParameter>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline PutSourceServerActionRequest& AddParameters(const Aws::String& key, Aws::Vector<SsmParameterStoreParameter>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline PutSourceServerActionRequest& AddParameters(Aws::String&& key, Aws::Vector<SsmParameterStoreParameter>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline PutSourceServerActionRequest& AddParameters(const char* key, Aws::Vector<SsmParameterStoreParameter>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline PutSourceServerActionRequest& AddParameters(const char* key, const Aws::Vector<SsmParameterStoreParameter>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Source server ID.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = value; }
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::move(value); }
    inline void SetSourceServerID(const char* value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID.assign(value); }
    inline PutSourceServerActionRequest& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}
    inline PutSourceServerActionRequest& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}
    inline PutSourceServerActionRequest& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action timeout in seconds.</p>
     */
    inline int GetTimeoutSeconds() const{ return m_timeoutSeconds; }
    inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }
    inline void SetTimeoutSeconds(int value) { m_timeoutSecondsHasBeenSet = true; m_timeoutSeconds = value; }
    inline PutSourceServerActionRequest& WithTimeoutSeconds(int value) { SetTimeoutSeconds(value); return *this;}
    ///@}
  private:

    Aws::String m_accountID;
    bool m_accountIDHasBeenSet = false;

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

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet = false;

    int m_timeoutSeconds;
    bool m_timeoutSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
