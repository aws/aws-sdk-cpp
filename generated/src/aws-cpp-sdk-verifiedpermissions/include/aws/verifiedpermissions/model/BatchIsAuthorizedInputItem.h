/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/EntityIdentifier.h>
#include <aws/verifiedpermissions/model/ActionIdentifier.h>
#include <aws/verifiedpermissions/model/ContextDefinition.h>
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
namespace VerifiedPermissions
{
namespace Model
{

  /**
   * <p>An authorization request that you include in a <code>BatchIsAuthorized</code>
   * API request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/BatchIsAuthorizedInputItem">AWS
   * API Reference</a></p>
   */
  class BatchIsAuthorizedInputItem
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API BatchIsAuthorizedInputItem() = default;
    AWS_VERIFIEDPERMISSIONS_API BatchIsAuthorizedInputItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API BatchIsAuthorizedInputItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the principal for which the authorization decision is to be
     * made.</p>
     */
    inline const EntityIdentifier& GetPrincipal() const { return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    template<typename PrincipalT = EntityIdentifier>
    void SetPrincipal(PrincipalT&& value) { m_principalHasBeenSet = true; m_principal = std::forward<PrincipalT>(value); }
    template<typename PrincipalT = EntityIdentifier>
    BatchIsAuthorizedInputItem& WithPrincipal(PrincipalT&& value) { SetPrincipal(std::forward<PrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the requested action to be authorized. For example,
     * <code>PhotoFlash::ReadPhoto</code>.</p>
     */
    inline const ActionIdentifier& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = ActionIdentifier>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = ActionIdentifier>
    BatchIsAuthorizedInputItem& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the resource that you want an authorization decision for. For
     * example, <code>PhotoFlash::Photo</code>.</p>
     */
    inline const EntityIdentifier& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = EntityIdentifier>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = EntityIdentifier>
    BatchIsAuthorizedInputItem& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies additional context that can be used to make more granular
     * authorization decisions.</p>
     */
    inline const ContextDefinition& GetContext() const { return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    template<typename ContextT = ContextDefinition>
    void SetContext(ContextT&& value) { m_contextHasBeenSet = true; m_context = std::forward<ContextT>(value); }
    template<typename ContextT = ContextDefinition>
    BatchIsAuthorizedInputItem& WithContext(ContextT&& value) { SetContext(std::forward<ContextT>(value)); return *this;}
    ///@}
  private:

    EntityIdentifier m_principal;
    bool m_principalHasBeenSet = false;

    ActionIdentifier m_action;
    bool m_actionHasBeenSet = false;

    EntityIdentifier m_resource;
    bool m_resourceHasBeenSet = false;

    ContextDefinition m_context;
    bool m_contextHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
