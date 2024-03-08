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
    AWS_VERIFIEDPERMISSIONS_API BatchIsAuthorizedInputItem();
    AWS_VERIFIEDPERMISSIONS_API BatchIsAuthorizedInputItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API BatchIsAuthorizedInputItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the principal for which the authorization decision is to be
     * made.</p>
     */
    inline const EntityIdentifier& GetPrincipal() const{ return m_principal; }

    /**
     * <p>Specifies the principal for which the authorization decision is to be
     * made.</p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>Specifies the principal for which the authorization decision is to be
     * made.</p>
     */
    inline void SetPrincipal(const EntityIdentifier& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>Specifies the principal for which the authorization decision is to be
     * made.</p>
     */
    inline void SetPrincipal(EntityIdentifier&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>Specifies the principal for which the authorization decision is to be
     * made.</p>
     */
    inline BatchIsAuthorizedInputItem& WithPrincipal(const EntityIdentifier& value) { SetPrincipal(value); return *this;}

    /**
     * <p>Specifies the principal for which the authorization decision is to be
     * made.</p>
     */
    inline BatchIsAuthorizedInputItem& WithPrincipal(EntityIdentifier&& value) { SetPrincipal(std::move(value)); return *this;}


    /**
     * <p>Specifies the requested action to be authorized. For example, is the
     * principal authorized to perform this action on the resource?</p>
     */
    inline const ActionIdentifier& GetAction() const{ return m_action; }

    /**
     * <p>Specifies the requested action to be authorized. For example, is the
     * principal authorized to perform this action on the resource?</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Specifies the requested action to be authorized. For example, is the
     * principal authorized to perform this action on the resource?</p>
     */
    inline void SetAction(const ActionIdentifier& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Specifies the requested action to be authorized. For example, is the
     * principal authorized to perform this action on the resource?</p>
     */
    inline void SetAction(ActionIdentifier&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Specifies the requested action to be authorized. For example, is the
     * principal authorized to perform this action on the resource?</p>
     */
    inline BatchIsAuthorizedInputItem& WithAction(const ActionIdentifier& value) { SetAction(value); return *this;}

    /**
     * <p>Specifies the requested action to be authorized. For example, is the
     * principal authorized to perform this action on the resource?</p>
     */
    inline BatchIsAuthorizedInputItem& WithAction(ActionIdentifier&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>Specifies the resource for which the authorization decision is to be
     * made.</p>
     */
    inline const EntityIdentifier& GetResource() const{ return m_resource; }

    /**
     * <p>Specifies the resource for which the authorization decision is to be
     * made.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>Specifies the resource for which the authorization decision is to be
     * made.</p>
     */
    inline void SetResource(const EntityIdentifier& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>Specifies the resource for which the authorization decision is to be
     * made.</p>
     */
    inline void SetResource(EntityIdentifier&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>Specifies the resource for which the authorization decision is to be
     * made.</p>
     */
    inline BatchIsAuthorizedInputItem& WithResource(const EntityIdentifier& value) { SetResource(value); return *this;}

    /**
     * <p>Specifies the resource for which the authorization decision is to be
     * made.</p>
     */
    inline BatchIsAuthorizedInputItem& WithResource(EntityIdentifier&& value) { SetResource(std::move(value)); return *this;}


    /**
     * <p>Specifies additional context that can be used to make more granular
     * authorization decisions.</p>
     */
    inline const ContextDefinition& GetContext() const{ return m_context; }

    /**
     * <p>Specifies additional context that can be used to make more granular
     * authorization decisions.</p>
     */
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }

    /**
     * <p>Specifies additional context that can be used to make more granular
     * authorization decisions.</p>
     */
    inline void SetContext(const ContextDefinition& value) { m_contextHasBeenSet = true; m_context = value; }

    /**
     * <p>Specifies additional context that can be used to make more granular
     * authorization decisions.</p>
     */
    inline void SetContext(ContextDefinition&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }

    /**
     * <p>Specifies additional context that can be used to make more granular
     * authorization decisions.</p>
     */
    inline BatchIsAuthorizedInputItem& WithContext(const ContextDefinition& value) { SetContext(value); return *this;}

    /**
     * <p>Specifies additional context that can be used to make more granular
     * authorization decisions.</p>
     */
    inline BatchIsAuthorizedInputItem& WithContext(ContextDefinition&& value) { SetContext(std::move(value)); return *this;}

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
