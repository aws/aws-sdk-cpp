/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/XRayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace XRay
{
namespace Model
{

  /**
   */
  class DeleteResourcePolicyRequest : public XRayRequest
  {
  public:
    AWS_XRAY_API DeleteResourcePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteResourcePolicy"; }

    AWS_XRAY_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the resource policy to delete.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the resource policy to delete.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>The name of the resource policy to delete.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the resource policy to delete.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The name of the resource policy to delete.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the resource policy to delete.</p>
     */
    inline DeleteResourcePolicyRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the resource policy to delete.</p>
     */
    inline DeleteResourcePolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource policy to delete.</p>
     */
    inline DeleteResourcePolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>Specifies a specific policy revision to delete. Provide a
     * <code>PolicyRevisionId</code> to ensure an atomic delete operation. If the
     * provided revision id does not match the latest policy revision id, an
     * <code>InvalidPolicyRevisionIdException</code> exception is returned. </p>
     */
    inline const Aws::String& GetPolicyRevisionId() const{ return m_policyRevisionId; }

    /**
     * <p>Specifies a specific policy revision to delete. Provide a
     * <code>PolicyRevisionId</code> to ensure an atomic delete operation. If the
     * provided revision id does not match the latest policy revision id, an
     * <code>InvalidPolicyRevisionIdException</code> exception is returned. </p>
     */
    inline bool PolicyRevisionIdHasBeenSet() const { return m_policyRevisionIdHasBeenSet; }

    /**
     * <p>Specifies a specific policy revision to delete. Provide a
     * <code>PolicyRevisionId</code> to ensure an atomic delete operation. If the
     * provided revision id does not match the latest policy revision id, an
     * <code>InvalidPolicyRevisionIdException</code> exception is returned. </p>
     */
    inline void SetPolicyRevisionId(const Aws::String& value) { m_policyRevisionIdHasBeenSet = true; m_policyRevisionId = value; }

    /**
     * <p>Specifies a specific policy revision to delete. Provide a
     * <code>PolicyRevisionId</code> to ensure an atomic delete operation. If the
     * provided revision id does not match the latest policy revision id, an
     * <code>InvalidPolicyRevisionIdException</code> exception is returned. </p>
     */
    inline void SetPolicyRevisionId(Aws::String&& value) { m_policyRevisionIdHasBeenSet = true; m_policyRevisionId = std::move(value); }

    /**
     * <p>Specifies a specific policy revision to delete. Provide a
     * <code>PolicyRevisionId</code> to ensure an atomic delete operation. If the
     * provided revision id does not match the latest policy revision id, an
     * <code>InvalidPolicyRevisionIdException</code> exception is returned. </p>
     */
    inline void SetPolicyRevisionId(const char* value) { m_policyRevisionIdHasBeenSet = true; m_policyRevisionId.assign(value); }

    /**
     * <p>Specifies a specific policy revision to delete. Provide a
     * <code>PolicyRevisionId</code> to ensure an atomic delete operation. If the
     * provided revision id does not match the latest policy revision id, an
     * <code>InvalidPolicyRevisionIdException</code> exception is returned. </p>
     */
    inline DeleteResourcePolicyRequest& WithPolicyRevisionId(const Aws::String& value) { SetPolicyRevisionId(value); return *this;}

    /**
     * <p>Specifies a specific policy revision to delete. Provide a
     * <code>PolicyRevisionId</code> to ensure an atomic delete operation. If the
     * provided revision id does not match the latest policy revision id, an
     * <code>InvalidPolicyRevisionIdException</code> exception is returned. </p>
     */
    inline DeleteResourcePolicyRequest& WithPolicyRevisionId(Aws::String&& value) { SetPolicyRevisionId(std::move(value)); return *this;}

    /**
     * <p>Specifies a specific policy revision to delete. Provide a
     * <code>PolicyRevisionId</code> to ensure an atomic delete operation. If the
     * provided revision id does not match the latest policy revision id, an
     * <code>InvalidPolicyRevisionIdException</code> exception is returned. </p>
     */
    inline DeleteResourcePolicyRequest& WithPolicyRevisionId(const char* value) { SetPolicyRevisionId(value); return *this;}

  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::String m_policyRevisionId;
    bool m_policyRevisionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
