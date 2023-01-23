/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A managed policy that is attached to an IAM principal.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsIamAttachedManagedPolicy">AWS
   * API Reference</a></p>
   */
  class AwsIamAttachedManagedPolicy
  {
  public:
    AWS_SECURITYHUB_API AwsIamAttachedManagedPolicy();
    AWS_SECURITYHUB_API AwsIamAttachedManagedPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsIamAttachedManagedPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the policy.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the policy.</p>
     */
    inline AwsIamAttachedManagedPolicy& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the policy.</p>
     */
    inline AwsIamAttachedManagedPolicy& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The name of the policy.</p>
     */
    inline AwsIamAttachedManagedPolicy& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>The ARN of the policy.</p>
     */
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }

    /**
     * <p>The ARN of the policy.</p>
     */
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }

    /**
     * <p>The ARN of the policy.</p>
     */
    inline void SetPolicyArn(const Aws::String& value) { m_policyArnHasBeenSet = true; m_policyArn = value; }

    /**
     * <p>The ARN of the policy.</p>
     */
    inline void SetPolicyArn(Aws::String&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::move(value); }

    /**
     * <p>The ARN of the policy.</p>
     */
    inline void SetPolicyArn(const char* value) { m_policyArnHasBeenSet = true; m_policyArn.assign(value); }

    /**
     * <p>The ARN of the policy.</p>
     */
    inline AwsIamAttachedManagedPolicy& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}

    /**
     * <p>The ARN of the policy.</p>
     */
    inline AwsIamAttachedManagedPolicy& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the policy.</p>
     */
    inline AwsIamAttachedManagedPolicy& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}

  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
