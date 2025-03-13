/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/CoreNetworkPolicyAlias.h>
#include <aws/core/utils/DateTime.h>
#include <aws/networkmanager/model/ChangeSetState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/CoreNetworkPolicyError.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a core network policy. You can have only one LIVE Core
   * Policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CoreNetworkPolicy">AWS
   * API Reference</a></p>
   */
  class CoreNetworkPolicy
  {
  public:
    AWS_NETWORKMANAGER_API CoreNetworkPolicy() = default;
    AWS_NETWORKMANAGER_API CoreNetworkPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API CoreNetworkPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of a core network.</p>
     */
    inline const Aws::String& GetCoreNetworkId() const { return m_coreNetworkId; }
    inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }
    template<typename CoreNetworkIdT = Aws::String>
    void SetCoreNetworkId(CoreNetworkIdT&& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = std::forward<CoreNetworkIdT>(value); }
    template<typename CoreNetworkIdT = Aws::String>
    CoreNetworkPolicy& WithCoreNetworkId(CoreNetworkIdT&& value) { SetCoreNetworkId(std::forward<CoreNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the policy version.</p>
     */
    inline int GetPolicyVersionId() const { return m_policyVersionId; }
    inline bool PolicyVersionIdHasBeenSet() const { return m_policyVersionIdHasBeenSet; }
    inline void SetPolicyVersionId(int value) { m_policyVersionIdHasBeenSet = true; m_policyVersionId = value; }
    inline CoreNetworkPolicy& WithPolicyVersionId(int value) { SetPolicyVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether a core network policy is the current LIVE policy or the most recently
     * submitted policy.</p>
     */
    inline CoreNetworkPolicyAlias GetAlias() const { return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    inline void SetAlias(CoreNetworkPolicyAlias value) { m_aliasHasBeenSet = true; m_alias = value; }
    inline CoreNetworkPolicy& WithAlias(CoreNetworkPolicyAlias value) { SetAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of a core network policy.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CoreNetworkPolicy& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when a core network policy was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CoreNetworkPolicy& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of a core network policy.</p>
     */
    inline ChangeSetState GetChangeSetState() const { return m_changeSetState; }
    inline bool ChangeSetStateHasBeenSet() const { return m_changeSetStateHasBeenSet; }
    inline void SetChangeSetState(ChangeSetState value) { m_changeSetStateHasBeenSet = true; m_changeSetState = value; }
    inline CoreNetworkPolicy& WithChangeSetState(ChangeSetState value) { SetChangeSetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes any errors in a core network policy.</p>
     */
    inline const Aws::Vector<CoreNetworkPolicyError>& GetPolicyErrors() const { return m_policyErrors; }
    inline bool PolicyErrorsHasBeenSet() const { return m_policyErrorsHasBeenSet; }
    template<typename PolicyErrorsT = Aws::Vector<CoreNetworkPolicyError>>
    void SetPolicyErrors(PolicyErrorsT&& value) { m_policyErrorsHasBeenSet = true; m_policyErrors = std::forward<PolicyErrorsT>(value); }
    template<typename PolicyErrorsT = Aws::Vector<CoreNetworkPolicyError>>
    CoreNetworkPolicy& WithPolicyErrors(PolicyErrorsT&& value) { SetPolicyErrors(std::forward<PolicyErrorsT>(value)); return *this;}
    template<typename PolicyErrorsT = CoreNetworkPolicyError>
    CoreNetworkPolicy& AddPolicyErrors(PolicyErrorsT&& value) { m_policyErrorsHasBeenSet = true; m_policyErrors.emplace_back(std::forward<PolicyErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes a core network policy.</p>
     */
    inline const Aws::String& GetPolicyDocument() const { return m_policyDocument; }
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }
    template<typename PolicyDocumentT = Aws::String>
    void SetPolicyDocument(PolicyDocumentT&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::forward<PolicyDocumentT>(value); }
    template<typename PolicyDocumentT = Aws::String>
    CoreNetworkPolicy& WithPolicyDocument(PolicyDocumentT&& value) { SetPolicyDocument(std::forward<PolicyDocumentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_coreNetworkId;
    bool m_coreNetworkIdHasBeenSet = false;

    int m_policyVersionId{0};
    bool m_policyVersionIdHasBeenSet = false;

    CoreNetworkPolicyAlias m_alias{CoreNetworkPolicyAlias::NOT_SET};
    bool m_aliasHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    ChangeSetState m_changeSetState{ChangeSetState::NOT_SET};
    bool m_changeSetStateHasBeenSet = false;

    Aws::Vector<CoreNetworkPolicyError> m_policyErrors;
    bool m_policyErrorsHasBeenSet = false;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
