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
    AWS_SHIELD_API DescribeProtectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeProtection"; }

    AWS_SHIELD_API Aws::String SerializePayload() const override;

    AWS_SHIELD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier (ID) for the <a>Protection</a> object to describe. You
     * must provide either the <code>ResourceArn</code> of the protected resource or
     * the <code>ProtectionID</code> of the protection, but not both.</p>
     */
    inline const Aws::String& GetProtectionId() const { return m_protectionId; }
    inline bool ProtectionIdHasBeenSet() const { return m_protectionIdHasBeenSet; }
    template<typename ProtectionIdT = Aws::String>
    void SetProtectionId(ProtectionIdT&& value) { m_protectionIdHasBeenSet = true; m_protectionId = std::forward<ProtectionIdT>(value); }
    template<typename ProtectionIdT = Aws::String>
    DescribeProtectionRequest& WithProtectionId(ProtectionIdT&& value) { SetProtectionId(std::forward<ProtectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the protected Amazon Web Services resource.
     * You must provide either the <code>ResourceArn</code> of the protected resource
     * or the <code>ProtectionID</code> of the protection, but not both.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    DescribeProtectionRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_protectionId;
    bool m_protectionIdHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
