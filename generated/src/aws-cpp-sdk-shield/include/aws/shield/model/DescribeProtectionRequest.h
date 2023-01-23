/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/ShieldRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Shield
{
namespace Model
{

  /**
   */
  class DescribeProtectionRequest : public ShieldRequest
  {
  public:
    AWS_SHIELD_API DescribeProtectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeProtection"; }

    AWS_SHIELD_API Aws::String SerializePayload() const override;

    AWS_SHIELD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier (ID) for the <a>Protection</a> object to describe. You
     * must provide either the <code>ResourceArn</code> of the protected resource or
     * the <code>ProtectionID</code> of the protection, but not both.</p>
     */
    inline const Aws::String& GetProtectionId() const{ return m_protectionId; }

    /**
     * <p>The unique identifier (ID) for the <a>Protection</a> object to describe. You
     * must provide either the <code>ResourceArn</code> of the protected resource or
     * the <code>ProtectionID</code> of the protection, but not both.</p>
     */
    inline bool ProtectionIdHasBeenSet() const { return m_protectionIdHasBeenSet; }

    /**
     * <p>The unique identifier (ID) for the <a>Protection</a> object to describe. You
     * must provide either the <code>ResourceArn</code> of the protected resource or
     * the <code>ProtectionID</code> of the protection, but not both.</p>
     */
    inline void SetProtectionId(const Aws::String& value) { m_protectionIdHasBeenSet = true; m_protectionId = value; }

    /**
     * <p>The unique identifier (ID) for the <a>Protection</a> object to describe. You
     * must provide either the <code>ResourceArn</code> of the protected resource or
     * the <code>ProtectionID</code> of the protection, but not both.</p>
     */
    inline void SetProtectionId(Aws::String&& value) { m_protectionIdHasBeenSet = true; m_protectionId = std::move(value); }

    /**
     * <p>The unique identifier (ID) for the <a>Protection</a> object to describe. You
     * must provide either the <code>ResourceArn</code> of the protected resource or
     * the <code>ProtectionID</code> of the protection, but not both.</p>
     */
    inline void SetProtectionId(const char* value) { m_protectionIdHasBeenSet = true; m_protectionId.assign(value); }

    /**
     * <p>The unique identifier (ID) for the <a>Protection</a> object to describe. You
     * must provide either the <code>ResourceArn</code> of the protected resource or
     * the <code>ProtectionID</code> of the protection, but not both.</p>
     */
    inline DescribeProtectionRequest& WithProtectionId(const Aws::String& value) { SetProtectionId(value); return *this;}

    /**
     * <p>The unique identifier (ID) for the <a>Protection</a> object to describe. You
     * must provide either the <code>ResourceArn</code> of the protected resource or
     * the <code>ProtectionID</code> of the protection, but not both.</p>
     */
    inline DescribeProtectionRequest& WithProtectionId(Aws::String&& value) { SetProtectionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) for the <a>Protection</a> object to describe. You
     * must provide either the <code>ResourceArn</code> of the protected resource or
     * the <code>ProtectionID</code> of the protection, but not both.</p>
     */
    inline DescribeProtectionRequest& WithProtectionId(const char* value) { SetProtectionId(value); return *this;}


    /**
     * <p>The ARN (Amazon Resource Name) of the protected Amazon Web Services resource.
     * You must provide either the <code>ResourceArn</code> of the protected resource
     * or the <code>ProtectionID</code> of the protection, but not both.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN (Amazon Resource Name) of the protected Amazon Web Services resource.
     * You must provide either the <code>ResourceArn</code> of the protected resource
     * or the <code>ProtectionID</code> of the protection, but not both.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The ARN (Amazon Resource Name) of the protected Amazon Web Services resource.
     * You must provide either the <code>ResourceArn</code> of the protected resource
     * or the <code>ProtectionID</code> of the protection, but not both.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The ARN (Amazon Resource Name) of the protected Amazon Web Services resource.
     * You must provide either the <code>ResourceArn</code> of the protected resource
     * or the <code>ProtectionID</code> of the protection, but not both.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the protected Amazon Web Services resource.
     * You must provide either the <code>ResourceArn</code> of the protected resource
     * or the <code>ProtectionID</code> of the protection, but not both.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the protected Amazon Web Services resource.
     * You must provide either the <code>ResourceArn</code> of the protected resource
     * or the <code>ProtectionID</code> of the protection, but not both.</p>
     */
    inline DescribeProtectionRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the protected Amazon Web Services resource.
     * You must provide either the <code>ResourceArn</code> of the protected resource
     * or the <code>ProtectionID</code> of the protection, but not both.</p>
     */
    inline DescribeProtectionRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the protected Amazon Web Services resource.
     * You must provide either the <code>ResourceArn</code> of the protected resource
     * or the <code>ProtectionID</code> of the protection, but not both.</p>
     */
    inline DescribeProtectionRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_protectionId;
    bool m_protectionIdHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
