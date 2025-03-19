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
   * <p>Describes a core network policy version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CoreNetworkPolicyVersion">AWS
   * API Reference</a></p>
   */
  class CoreNetworkPolicyVersion
  {
  public:
    AWS_NETWORKMANAGER_API CoreNetworkPolicyVersion() = default;
    AWS_NETWORKMANAGER_API CoreNetworkPolicyVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API CoreNetworkPolicyVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    CoreNetworkPolicyVersion& WithCoreNetworkId(CoreNetworkIdT&& value) { SetCoreNetworkId(std::forward<CoreNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the policy version.</p>
     */
    inline int GetPolicyVersionId() const { return m_policyVersionId; }
    inline bool PolicyVersionIdHasBeenSet() const { return m_policyVersionIdHasBeenSet; }
    inline void SetPolicyVersionId(int value) { m_policyVersionIdHasBeenSet = true; m_policyVersionId = value; }
    inline CoreNetworkPolicyVersion& WithPolicyVersionId(int value) { SetPolicyVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether a core network policy is the current policy or the most recently
     * submitted policy.</p>
     */
    inline CoreNetworkPolicyAlias GetAlias() const { return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    inline void SetAlias(CoreNetworkPolicyAlias value) { m_aliasHasBeenSet = true; m_alias = value; }
    inline CoreNetworkPolicyVersion& WithAlias(CoreNetworkPolicyAlias value) { SetAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of a core network policy version.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CoreNetworkPolicyVersion& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when a core network policy version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CoreNetworkPolicyVersion& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the policy version change set.</p>
     */
    inline ChangeSetState GetChangeSetState() const { return m_changeSetState; }
    inline bool ChangeSetStateHasBeenSet() const { return m_changeSetStateHasBeenSet; }
    inline void SetChangeSetState(ChangeSetState value) { m_changeSetStateHasBeenSet = true; m_changeSetState = value; }
    inline CoreNetworkPolicyVersion& WithChangeSetState(ChangeSetState value) { SetChangeSetState(value); return *this;}
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
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
