/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>Represents a request to update a sending authorization policy for an
   * identity. Sending authorization is an Amazon SES feature that enables you to
   * authorize other senders to use your identities. For information, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-identity-owner-tasks-management.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/UpdateEmailIdentityPolicyRequest">AWS
   * API Reference</a></p>
   */
  class UpdateEmailIdentityPolicyRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API UpdateEmailIdentityPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEmailIdentityPolicy"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The email identity.</p>
     */
    inline const Aws::String& GetEmailIdentity() const{ return m_emailIdentity; }

    /**
     * <p>The email identity.</p>
     */
    inline bool EmailIdentityHasBeenSet() const { return m_emailIdentityHasBeenSet; }

    /**
     * <p>The email identity.</p>
     */
    inline void SetEmailIdentity(const Aws::String& value) { m_emailIdentityHasBeenSet = true; m_emailIdentity = value; }

    /**
     * <p>The email identity.</p>
     */
    inline void SetEmailIdentity(Aws::String&& value) { m_emailIdentityHasBeenSet = true; m_emailIdentity = std::move(value); }

    /**
     * <p>The email identity.</p>
     */
    inline void SetEmailIdentity(const char* value) { m_emailIdentityHasBeenSet = true; m_emailIdentity.assign(value); }

    /**
     * <p>The email identity.</p>
     */
    inline UpdateEmailIdentityPolicyRequest& WithEmailIdentity(const Aws::String& value) { SetEmailIdentity(value); return *this;}

    /**
     * <p>The email identity.</p>
     */
    inline UpdateEmailIdentityPolicyRequest& WithEmailIdentity(Aws::String&& value) { SetEmailIdentity(std::move(value)); return *this;}

    /**
     * <p>The email identity.</p>
     */
    inline UpdateEmailIdentityPolicyRequest& WithEmailIdentity(const char* value) { SetEmailIdentity(value); return *this;}


    /**
     * <p>The name of the policy.</p> <p>The policy name cannot exceed 64 characters
     * and can only include alphanumeric characters, dashes, and underscores.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the policy.</p> <p>The policy name cannot exceed 64 characters
     * and can only include alphanumeric characters, dashes, and underscores.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>The name of the policy.</p> <p>The policy name cannot exceed 64 characters
     * and can only include alphanumeric characters, dashes, and underscores.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the policy.</p> <p>The policy name cannot exceed 64 characters
     * and can only include alphanumeric characters, dashes, and underscores.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The name of the policy.</p> <p>The policy name cannot exceed 64 characters
     * and can only include alphanumeric characters, dashes, and underscores.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the policy.</p> <p>The policy name cannot exceed 64 characters
     * and can only include alphanumeric characters, dashes, and underscores.</p>
     */
    inline UpdateEmailIdentityPolicyRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the policy.</p> <p>The policy name cannot exceed 64 characters
     * and can only include alphanumeric characters, dashes, and underscores.</p>
     */
    inline UpdateEmailIdentityPolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The name of the policy.</p> <p>The policy name cannot exceed 64 characters
     * and can only include alphanumeric characters, dashes, and underscores.</p>
     */
    inline UpdateEmailIdentityPolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>The text of the policy in JSON format. The policy cannot exceed 4 KB.</p> <p>
     * For information about the syntax of sending authorization policies, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-policies.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The text of the policy in JSON format. The policy cannot exceed 4 KB.</p> <p>
     * For information about the syntax of sending authorization policies, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-policies.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>The text of the policy in JSON format. The policy cannot exceed 4 KB.</p> <p>
     * For information about the syntax of sending authorization policies, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-policies.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The text of the policy in JSON format. The policy cannot exceed 4 KB.</p> <p>
     * For information about the syntax of sending authorization policies, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-policies.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>The text of the policy in JSON format. The policy cannot exceed 4 KB.</p> <p>
     * For information about the syntax of sending authorization policies, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-policies.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>The text of the policy in JSON format. The policy cannot exceed 4 KB.</p> <p>
     * For information about the syntax of sending authorization policies, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-policies.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline UpdateEmailIdentityPolicyRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The text of the policy in JSON format. The policy cannot exceed 4 KB.</p> <p>
     * For information about the syntax of sending authorization policies, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-policies.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline UpdateEmailIdentityPolicyRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The text of the policy in JSON format. The policy cannot exceed 4 KB.</p> <p>
     * For information about the syntax of sending authorization policies, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization-policies.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline UpdateEmailIdentityPolicyRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}

  private:

    Aws::String m_emailIdentity;
    bool m_emailIdentityHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
