﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sts/STS_EXPORTS.h>
#include <aws/sts/STSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sts/model/PolicyDescriptorType.h>
#include <utility>

namespace Aws
{
namespace STS
{
namespace Model
{

  /**
   */
  class AssumeRootRequest : public STSRequest
  {
  public:
    AWS_STS_API AssumeRootRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssumeRoot"; }

    AWS_STS_API Aws::String SerializePayload() const override;

  protected:
    AWS_STS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The member account principal ARN or account ID.</p>
     */
    inline const Aws::String& GetTargetPrincipal() const{ return m_targetPrincipal; }
    inline bool TargetPrincipalHasBeenSet() const { return m_targetPrincipalHasBeenSet; }
    inline void SetTargetPrincipal(const Aws::String& value) { m_targetPrincipalHasBeenSet = true; m_targetPrincipal = value; }
    inline void SetTargetPrincipal(Aws::String&& value) { m_targetPrincipalHasBeenSet = true; m_targetPrincipal = std::move(value); }
    inline void SetTargetPrincipal(const char* value) { m_targetPrincipalHasBeenSet = true; m_targetPrincipal.assign(value); }
    inline AssumeRootRequest& WithTargetPrincipal(const Aws::String& value) { SetTargetPrincipal(value); return *this;}
    inline AssumeRootRequest& WithTargetPrincipal(Aws::String&& value) { SetTargetPrincipal(std::move(value)); return *this;}
    inline AssumeRootRequest& WithTargetPrincipal(const char* value) { SetTargetPrincipal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identity based policy that scopes the session to the privileged tasks
     * that can be performed. You can use one of following Amazon Web Services managed
     * policies to scope root session actions.</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/security-iam-awsmanpol.html#security-iam-awsmanpol-IAMAuditRootUserCredentials">IAMAuditRootUserCredentials</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/security-iam-awsmanpol.html#security-iam-awsmanpol-IAMCreateRootUserPassword">IAMCreateRootUserPassword</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/security-iam-awsmanpol.html#security-iam-awsmanpol-IAMDeleteRootUserCredentials">IAMDeleteRootUserCredentials</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/security-iam-awsmanpol.html#security-iam-awsmanpol-S3UnlockBucketPolicy">S3UnlockBucketPolicy</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/security-iam-awsmanpol.html#security-iam-awsmanpol-SQSUnlockQueuePolicy">SQSUnlockQueuePolicy</a>
     * </p> </li> </ul>
     */
    inline const PolicyDescriptorType& GetTaskPolicyArn() const{ return m_taskPolicyArn; }
    inline bool TaskPolicyArnHasBeenSet() const { return m_taskPolicyArnHasBeenSet; }
    inline void SetTaskPolicyArn(const PolicyDescriptorType& value) { m_taskPolicyArnHasBeenSet = true; m_taskPolicyArn = value; }
    inline void SetTaskPolicyArn(PolicyDescriptorType&& value) { m_taskPolicyArnHasBeenSet = true; m_taskPolicyArn = std::move(value); }
    inline AssumeRootRequest& WithTaskPolicyArn(const PolicyDescriptorType& value) { SetTaskPolicyArn(value); return *this;}
    inline AssumeRootRequest& WithTaskPolicyArn(PolicyDescriptorType&& value) { SetTaskPolicyArn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration, in seconds, of the privileged session. The value can range from
     * 0 seconds up to the maximum session duration of 900 seconds (15 minutes). If you
     * specify a value higher than this setting, the operation fails.</p> <p>By
     * default, the value is set to <code>900</code> seconds.</p>
     */
    inline int GetDurationSeconds() const{ return m_durationSeconds; }
    inline bool DurationSecondsHasBeenSet() const { return m_durationSecondsHasBeenSet; }
    inline void SetDurationSeconds(int value) { m_durationSecondsHasBeenSet = true; m_durationSeconds = value; }
    inline AssumeRootRequest& WithDurationSeconds(int value) { SetDurationSeconds(value); return *this;}
    ///@}
  private:

    Aws::String m_targetPrincipal;
    bool m_targetPrincipalHasBeenSet = false;

    PolicyDescriptorType m_taskPolicyArn;
    bool m_taskPolicyArnHasBeenSet = false;

    int m_durationSeconds;
    bool m_durationSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace STS
} // namespace Aws
