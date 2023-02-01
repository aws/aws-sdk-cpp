/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/ResilienceHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

  /**
   */
  class DeleteResiliencyPolicyRequest : public ResilienceHubRequest
  {
  public:
    AWS_RESILIENCEHUB_API DeleteResiliencyPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteResiliencyPolicy"; }

    AWS_RESILIENCEHUB_API Aws::String SerializePayload() const override;


    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline DeleteResiliencyPolicyRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline DeleteResiliencyPolicyRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline DeleteResiliencyPolicyRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the resiliency policy. The format for this
     * ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resiliency policy. The format for this
     * ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resiliency policy. The format for this
     * ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetPolicyArn(const Aws::String& value) { m_policyArnHasBeenSet = true; m_policyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resiliency policy. The format for this
     * ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetPolicyArn(Aws::String&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resiliency policy. The format for this
     * ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetPolicyArn(const char* value) { m_policyArnHasBeenSet = true; m_policyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resiliency policy. The format for this
     * ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline DeleteResiliencyPolicyRequest& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resiliency policy. The format for this
     * ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline DeleteResiliencyPolicyRequest& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resiliency policy. The format for this
     * ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:resiliency-policy/<code>policy-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i>.</p>
     */
    inline DeleteResiliencyPolicyRequest& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
