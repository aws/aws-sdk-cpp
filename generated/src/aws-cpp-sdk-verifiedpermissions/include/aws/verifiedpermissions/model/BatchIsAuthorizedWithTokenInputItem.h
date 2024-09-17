/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/ActionIdentifier.h>
#include <aws/verifiedpermissions/model/EntityIdentifier.h>
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
   * <p>An authorization request that you include in a
   * <code>BatchIsAuthorizedWithToken</code> API request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/BatchIsAuthorizedWithTokenInputItem">AWS
   * API Reference</a></p>
   */
  class BatchIsAuthorizedWithTokenInputItem
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API BatchIsAuthorizedWithTokenInputItem();
    AWS_VERIFIEDPERMISSIONS_API BatchIsAuthorizedWithTokenInputItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API BatchIsAuthorizedWithTokenInputItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the requested action to be authorized. For example,
     * <code>PhotoFlash::ReadPhoto</code>.</p>
     */
    inline const ActionIdentifier& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const ActionIdentifier& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(ActionIdentifier&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline BatchIsAuthorizedWithTokenInputItem& WithAction(const ActionIdentifier& value) { SetAction(value); return *this;}
    inline BatchIsAuthorizedWithTokenInputItem& WithAction(ActionIdentifier&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the resource that you want an authorization decision for. For
     * example, <code>PhotoFlash::Photo</code>.</p>
     */
    inline const EntityIdentifier& GetResource() const{ return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    inline void SetResource(const EntityIdentifier& value) { m_resourceHasBeenSet = true; m_resource = value; }
    inline void SetResource(EntityIdentifier&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }
    inline BatchIsAuthorizedWithTokenInputItem& WithResource(const EntityIdentifier& value) { SetResource(value); return *this;}
    inline BatchIsAuthorizedWithTokenInputItem& WithResource(EntityIdentifier&& value) { SetResource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies additional context that can be used to make more granular
     * authorization decisions.</p>
     */
    inline const ContextDefinition& GetContext() const{ return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    inline void SetContext(const ContextDefinition& value) { m_contextHasBeenSet = true; m_context = value; }
    inline void SetContext(ContextDefinition&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }
    inline BatchIsAuthorizedWithTokenInputItem& WithContext(const ContextDefinition& value) { SetContext(value); return *this;}
    inline BatchIsAuthorizedWithTokenInputItem& WithContext(ContextDefinition&& value) { SetContext(std::move(value)); return *this;}
    ///@}
  private:

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
