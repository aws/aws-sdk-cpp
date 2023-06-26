/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class BatchGetSecurityControlsRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API BatchGetSecurityControlsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetSecurityControls"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    /**
     * <p> A list of security controls (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters). The security
     * control ID or Amazon Resource Name (ARN) is the same across standards. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityControlIds() const{ return m_securityControlIds; }

    /**
     * <p> A list of security controls (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters). The security
     * control ID or Amazon Resource Name (ARN) is the same across standards. </p>
     */
    inline bool SecurityControlIdsHasBeenSet() const { return m_securityControlIdsHasBeenSet; }

    /**
     * <p> A list of security controls (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters). The security
     * control ID or Amazon Resource Name (ARN) is the same across standards. </p>
     */
    inline void SetSecurityControlIds(const Aws::Vector<Aws::String>& value) { m_securityControlIdsHasBeenSet = true; m_securityControlIds = value; }

    /**
     * <p> A list of security controls (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters). The security
     * control ID or Amazon Resource Name (ARN) is the same across standards. </p>
     */
    inline void SetSecurityControlIds(Aws::Vector<Aws::String>&& value) { m_securityControlIdsHasBeenSet = true; m_securityControlIds = std::move(value); }

    /**
     * <p> A list of security controls (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters). The security
     * control ID or Amazon Resource Name (ARN) is the same across standards. </p>
     */
    inline BatchGetSecurityControlsRequest& WithSecurityControlIds(const Aws::Vector<Aws::String>& value) { SetSecurityControlIds(value); return *this;}

    /**
     * <p> A list of security controls (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters). The security
     * control ID or Amazon Resource Name (ARN) is the same across standards. </p>
     */
    inline BatchGetSecurityControlsRequest& WithSecurityControlIds(Aws::Vector<Aws::String>&& value) { SetSecurityControlIds(std::move(value)); return *this;}

    /**
     * <p> A list of security controls (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters). The security
     * control ID or Amazon Resource Name (ARN) is the same across standards. </p>
     */
    inline BatchGetSecurityControlsRequest& AddSecurityControlIds(const Aws::String& value) { m_securityControlIdsHasBeenSet = true; m_securityControlIds.push_back(value); return *this; }

    /**
     * <p> A list of security controls (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters). The security
     * control ID or Amazon Resource Name (ARN) is the same across standards. </p>
     */
    inline BatchGetSecurityControlsRequest& AddSecurityControlIds(Aws::String&& value) { m_securityControlIdsHasBeenSet = true; m_securityControlIds.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of security controls (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters). The security
     * control ID or Amazon Resource Name (ARN) is the same across standards. </p>
     */
    inline BatchGetSecurityControlsRequest& AddSecurityControlIds(const char* value) { m_securityControlIdsHasBeenSet = true; m_securityControlIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_securityControlIds;
    bool m_securityControlIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
