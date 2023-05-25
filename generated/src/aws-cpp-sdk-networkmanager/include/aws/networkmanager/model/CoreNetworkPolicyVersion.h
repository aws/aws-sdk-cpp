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
    AWS_NETWORKMANAGER_API CoreNetworkPolicyVersion();
    AWS_NETWORKMANAGER_API CoreNetworkPolicyVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API CoreNetworkPolicyVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of a core network.</p>
     */
    inline const Aws::String& GetCoreNetworkId() const{ return m_coreNetworkId; }

    /**
     * <p>The ID of a core network.</p>
     */
    inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }

    /**
     * <p>The ID of a core network.</p>
     */
    inline void SetCoreNetworkId(const Aws::String& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = value; }

    /**
     * <p>The ID of a core network.</p>
     */
    inline void SetCoreNetworkId(Aws::String&& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = std::move(value); }

    /**
     * <p>The ID of a core network.</p>
     */
    inline void SetCoreNetworkId(const char* value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId.assign(value); }

    /**
     * <p>The ID of a core network.</p>
     */
    inline CoreNetworkPolicyVersion& WithCoreNetworkId(const Aws::String& value) { SetCoreNetworkId(value); return *this;}

    /**
     * <p>The ID of a core network.</p>
     */
    inline CoreNetworkPolicyVersion& WithCoreNetworkId(Aws::String&& value) { SetCoreNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of a core network.</p>
     */
    inline CoreNetworkPolicyVersion& WithCoreNetworkId(const char* value) { SetCoreNetworkId(value); return *this;}


    /**
     * <p>The ID of the policy version.</p>
     */
    inline int GetPolicyVersionId() const{ return m_policyVersionId; }

    /**
     * <p>The ID of the policy version.</p>
     */
    inline bool PolicyVersionIdHasBeenSet() const { return m_policyVersionIdHasBeenSet; }

    /**
     * <p>The ID of the policy version.</p>
     */
    inline void SetPolicyVersionId(int value) { m_policyVersionIdHasBeenSet = true; m_policyVersionId = value; }

    /**
     * <p>The ID of the policy version.</p>
     */
    inline CoreNetworkPolicyVersion& WithPolicyVersionId(int value) { SetPolicyVersionId(value); return *this;}


    /**
     * <p>Whether a core network policy is the current policy or the most recently
     * submitted policy.</p>
     */
    inline const CoreNetworkPolicyAlias& GetAlias() const{ return m_alias; }

    /**
     * <p>Whether a core network policy is the current policy or the most recently
     * submitted policy.</p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p>Whether a core network policy is the current policy or the most recently
     * submitted policy.</p>
     */
    inline void SetAlias(const CoreNetworkPolicyAlias& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>Whether a core network policy is the current policy or the most recently
     * submitted policy.</p>
     */
    inline void SetAlias(CoreNetworkPolicyAlias&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p>Whether a core network policy is the current policy or the most recently
     * submitted policy.</p>
     */
    inline CoreNetworkPolicyVersion& WithAlias(const CoreNetworkPolicyAlias& value) { SetAlias(value); return *this;}

    /**
     * <p>Whether a core network policy is the current policy or the most recently
     * submitted policy.</p>
     */
    inline CoreNetworkPolicyVersion& WithAlias(CoreNetworkPolicyAlias&& value) { SetAlias(std::move(value)); return *this;}


    /**
     * <p>The description of a core network policy version.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of a core network policy version.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of a core network policy version.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of a core network policy version.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of a core network policy version.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of a core network policy version.</p>
     */
    inline CoreNetworkPolicyVersion& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of a core network policy version.</p>
     */
    inline CoreNetworkPolicyVersion& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of a core network policy version.</p>
     */
    inline CoreNetworkPolicyVersion& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The timestamp when a core network policy version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp when a core network policy version was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp when a core network policy version was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp when a core network policy version was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp when a core network policy version was created.</p>
     */
    inline CoreNetworkPolicyVersion& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp when a core network policy version was created.</p>
     */
    inline CoreNetworkPolicyVersion& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The status of the policy version change set.</p>
     */
    inline const ChangeSetState& GetChangeSetState() const{ return m_changeSetState; }

    /**
     * <p>The status of the policy version change set.</p>
     */
    inline bool ChangeSetStateHasBeenSet() const { return m_changeSetStateHasBeenSet; }

    /**
     * <p>The status of the policy version change set.</p>
     */
    inline void SetChangeSetState(const ChangeSetState& value) { m_changeSetStateHasBeenSet = true; m_changeSetState = value; }

    /**
     * <p>The status of the policy version change set.</p>
     */
    inline void SetChangeSetState(ChangeSetState&& value) { m_changeSetStateHasBeenSet = true; m_changeSetState = std::move(value); }

    /**
     * <p>The status of the policy version change set.</p>
     */
    inline CoreNetworkPolicyVersion& WithChangeSetState(const ChangeSetState& value) { SetChangeSetState(value); return *this;}

    /**
     * <p>The status of the policy version change set.</p>
     */
    inline CoreNetworkPolicyVersion& WithChangeSetState(ChangeSetState&& value) { SetChangeSetState(std::move(value)); return *this;}

  private:

    Aws::String m_coreNetworkId;
    bool m_coreNetworkIdHasBeenSet = false;

    int m_policyVersionId;
    bool m_policyVersionIdHasBeenSet = false;

    CoreNetworkPolicyAlias m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    ChangeSetState m_changeSetState;
    bool m_changeSetStateHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
