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
    AWS_NETWORKMANAGER_API CoreNetworkPolicy();
    AWS_NETWORKMANAGER_API CoreNetworkPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API CoreNetworkPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline CoreNetworkPolicy& WithCoreNetworkId(const Aws::String& value) { SetCoreNetworkId(value); return *this;}

    /**
     * <p>The ID of a core network.</p>
     */
    inline CoreNetworkPolicy& WithCoreNetworkId(Aws::String&& value) { SetCoreNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of a core network.</p>
     */
    inline CoreNetworkPolicy& WithCoreNetworkId(const char* value) { SetCoreNetworkId(value); return *this;}


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
    inline CoreNetworkPolicy& WithPolicyVersionId(int value) { SetPolicyVersionId(value); return *this;}


    /**
     * <p>Whether a core network policy is the current LIVE policy or the most recently
     * submitted policy.</p>
     */
    inline const CoreNetworkPolicyAlias& GetAlias() const{ return m_alias; }

    /**
     * <p>Whether a core network policy is the current LIVE policy or the most recently
     * submitted policy.</p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p>Whether a core network policy is the current LIVE policy or the most recently
     * submitted policy.</p>
     */
    inline void SetAlias(const CoreNetworkPolicyAlias& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>Whether a core network policy is the current LIVE policy or the most recently
     * submitted policy.</p>
     */
    inline void SetAlias(CoreNetworkPolicyAlias&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p>Whether a core network policy is the current LIVE policy or the most recently
     * submitted policy.</p>
     */
    inline CoreNetworkPolicy& WithAlias(const CoreNetworkPolicyAlias& value) { SetAlias(value); return *this;}

    /**
     * <p>Whether a core network policy is the current LIVE policy or the most recently
     * submitted policy.</p>
     */
    inline CoreNetworkPolicy& WithAlias(CoreNetworkPolicyAlias&& value) { SetAlias(std::move(value)); return *this;}


    /**
     * <p>The description of a core network policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of a core network policy.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of a core network policy.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of a core network policy.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of a core network policy.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of a core network policy.</p>
     */
    inline CoreNetworkPolicy& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of a core network policy.</p>
     */
    inline CoreNetworkPolicy& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of a core network policy.</p>
     */
    inline CoreNetworkPolicy& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The timestamp when a core network policy was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp when a core network policy was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp when a core network policy was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp when a core network policy was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp when a core network policy was created.</p>
     */
    inline CoreNetworkPolicy& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp when a core network policy was created.</p>
     */
    inline CoreNetworkPolicy& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The state of a core network policy.</p>
     */
    inline const ChangeSetState& GetChangeSetState() const{ return m_changeSetState; }

    /**
     * <p>The state of a core network policy.</p>
     */
    inline bool ChangeSetStateHasBeenSet() const { return m_changeSetStateHasBeenSet; }

    /**
     * <p>The state of a core network policy.</p>
     */
    inline void SetChangeSetState(const ChangeSetState& value) { m_changeSetStateHasBeenSet = true; m_changeSetState = value; }

    /**
     * <p>The state of a core network policy.</p>
     */
    inline void SetChangeSetState(ChangeSetState&& value) { m_changeSetStateHasBeenSet = true; m_changeSetState = std::move(value); }

    /**
     * <p>The state of a core network policy.</p>
     */
    inline CoreNetworkPolicy& WithChangeSetState(const ChangeSetState& value) { SetChangeSetState(value); return *this;}

    /**
     * <p>The state of a core network policy.</p>
     */
    inline CoreNetworkPolicy& WithChangeSetState(ChangeSetState&& value) { SetChangeSetState(std::move(value)); return *this;}


    /**
     * <p>Describes any errors in a core network policy.</p>
     */
    inline const Aws::Vector<CoreNetworkPolicyError>& GetPolicyErrors() const{ return m_policyErrors; }

    /**
     * <p>Describes any errors in a core network policy.</p>
     */
    inline bool PolicyErrorsHasBeenSet() const { return m_policyErrorsHasBeenSet; }

    /**
     * <p>Describes any errors in a core network policy.</p>
     */
    inline void SetPolicyErrors(const Aws::Vector<CoreNetworkPolicyError>& value) { m_policyErrorsHasBeenSet = true; m_policyErrors = value; }

    /**
     * <p>Describes any errors in a core network policy.</p>
     */
    inline void SetPolicyErrors(Aws::Vector<CoreNetworkPolicyError>&& value) { m_policyErrorsHasBeenSet = true; m_policyErrors = std::move(value); }

    /**
     * <p>Describes any errors in a core network policy.</p>
     */
    inline CoreNetworkPolicy& WithPolicyErrors(const Aws::Vector<CoreNetworkPolicyError>& value) { SetPolicyErrors(value); return *this;}

    /**
     * <p>Describes any errors in a core network policy.</p>
     */
    inline CoreNetworkPolicy& WithPolicyErrors(Aws::Vector<CoreNetworkPolicyError>&& value) { SetPolicyErrors(std::move(value)); return *this;}

    /**
     * <p>Describes any errors in a core network policy.</p>
     */
    inline CoreNetworkPolicy& AddPolicyErrors(const CoreNetworkPolicyError& value) { m_policyErrorsHasBeenSet = true; m_policyErrors.push_back(value); return *this; }

    /**
     * <p>Describes any errors in a core network policy.</p>
     */
    inline CoreNetworkPolicy& AddPolicyErrors(CoreNetworkPolicyError&& value) { m_policyErrorsHasBeenSet = true; m_policyErrors.push_back(std::move(value)); return *this; }


    /**
     * <p>Describes a core network policy.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p>Describes a core network policy.</p>
     */
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }

    /**
     * <p>Describes a core network policy.</p>
     */
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p>Describes a core network policy.</p>
     */
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::move(value); }

    /**
     * <p>Describes a core network policy.</p>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }

    /**
     * <p>Describes a core network policy.</p>
     */
    inline CoreNetworkPolicy& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>Describes a core network policy.</p>
     */
    inline CoreNetworkPolicy& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}

    /**
     * <p>Describes a core network policy.</p>
     */
    inline CoreNetworkPolicy& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}

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

    Aws::Vector<CoreNetworkPolicyError> m_policyErrors;
    bool m_policyErrorsHasBeenSet = false;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
