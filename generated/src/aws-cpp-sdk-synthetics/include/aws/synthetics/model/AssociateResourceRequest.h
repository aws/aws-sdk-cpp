/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/SyntheticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Synthetics
{
namespace Model
{

  /**
   */
  class AssociateResourceRequest : public SyntheticsRequest
  {
  public:
    AWS_SYNTHETICS_API AssociateResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateResource"; }

    AWS_SYNTHETICS_API Aws::String SerializePayload() const override;


    /**
     * <p>Specifies the group. You can specify the group name, the ARN, or the group ID
     * as the <code>GroupIdentifier</code>.</p>
     */
    inline const Aws::String& GetGroupIdentifier() const{ return m_groupIdentifier; }

    /**
     * <p>Specifies the group. You can specify the group name, the ARN, or the group ID
     * as the <code>GroupIdentifier</code>.</p>
     */
    inline bool GroupIdentifierHasBeenSet() const { return m_groupIdentifierHasBeenSet; }

    /**
     * <p>Specifies the group. You can specify the group name, the ARN, or the group ID
     * as the <code>GroupIdentifier</code>.</p>
     */
    inline void SetGroupIdentifier(const Aws::String& value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier = value; }

    /**
     * <p>Specifies the group. You can specify the group name, the ARN, or the group ID
     * as the <code>GroupIdentifier</code>.</p>
     */
    inline void SetGroupIdentifier(Aws::String&& value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier = std::move(value); }

    /**
     * <p>Specifies the group. You can specify the group name, the ARN, or the group ID
     * as the <code>GroupIdentifier</code>.</p>
     */
    inline void SetGroupIdentifier(const char* value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier.assign(value); }

    /**
     * <p>Specifies the group. You can specify the group name, the ARN, or the group ID
     * as the <code>GroupIdentifier</code>.</p>
     */
    inline AssociateResourceRequest& WithGroupIdentifier(const Aws::String& value) { SetGroupIdentifier(value); return *this;}

    /**
     * <p>Specifies the group. You can specify the group name, the ARN, or the group ID
     * as the <code>GroupIdentifier</code>.</p>
     */
    inline AssociateResourceRequest& WithGroupIdentifier(Aws::String&& value) { SetGroupIdentifier(std::move(value)); return *this;}

    /**
     * <p>Specifies the group. You can specify the group name, the ARN, or the group ID
     * as the <code>GroupIdentifier</code>.</p>
     */
    inline AssociateResourceRequest& WithGroupIdentifier(const char* value) { SetGroupIdentifier(value); return *this;}


    /**
     * <p>The ARN of the canary that you want to associate with the specified
     * group.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN of the canary that you want to associate with the specified
     * group.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The ARN of the canary that you want to associate with the specified
     * group.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The ARN of the canary that you want to associate with the specified
     * group.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The ARN of the canary that you want to associate with the specified
     * group.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The ARN of the canary that you want to associate with the specified
     * group.</p>
     */
    inline AssociateResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN of the canary that you want to associate with the specified
     * group.</p>
     */
    inline AssociateResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the canary that you want to associate with the specified
     * group.</p>
     */
    inline AssociateResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_groupIdentifier;
    bool m_groupIdentifierHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
