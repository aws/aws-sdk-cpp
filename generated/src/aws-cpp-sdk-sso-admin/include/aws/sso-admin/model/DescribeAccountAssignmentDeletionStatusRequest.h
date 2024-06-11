/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

  /**
   */
  class DescribeAccountAssignmentDeletionStatusRequest : public SSOAdminRequest
  {
  public:
    AWS_SSOADMIN_API DescribeAccountAssignmentDeletionStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAccountAssignmentDeletionStatus"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier that is used to track the request operation progress.</p>
     */
    inline const Aws::String& GetAccountAssignmentDeletionRequestId() const{ return m_accountAssignmentDeletionRequestId; }
    inline bool AccountAssignmentDeletionRequestIdHasBeenSet() const { return m_accountAssignmentDeletionRequestIdHasBeenSet; }
    inline void SetAccountAssignmentDeletionRequestId(const Aws::String& value) { m_accountAssignmentDeletionRequestIdHasBeenSet = true; m_accountAssignmentDeletionRequestId = value; }
    inline void SetAccountAssignmentDeletionRequestId(Aws::String&& value) { m_accountAssignmentDeletionRequestIdHasBeenSet = true; m_accountAssignmentDeletionRequestId = std::move(value); }
    inline void SetAccountAssignmentDeletionRequestId(const char* value) { m_accountAssignmentDeletionRequestIdHasBeenSet = true; m_accountAssignmentDeletionRequestId.assign(value); }
    inline DescribeAccountAssignmentDeletionStatusRequest& WithAccountAssignmentDeletionRequestId(const Aws::String& value) { SetAccountAssignmentDeletionRequestId(value); return *this;}
    inline DescribeAccountAssignmentDeletionStatusRequest& WithAccountAssignmentDeletionRequestId(Aws::String&& value) { SetAccountAssignmentDeletionRequestId(std::move(value)); return *this;}
    inline DescribeAccountAssignmentDeletionStatusRequest& WithAccountAssignmentDeletionRequestId(const char* value) { SetAccountAssignmentDeletionRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM Identity Center instance under which the operation will be
     * executed. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::move(value); }
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }
    inline DescribeAccountAssignmentDeletionStatusRequest& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}
    inline DescribeAccountAssignmentDeletionStatusRequest& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}
    inline DescribeAccountAssignmentDeletionStatusRequest& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}
    ///@}
  private:

    Aws::String m_accountAssignmentDeletionRequestId;
    bool m_accountAssignmentDeletionRequestIdHasBeenSet = false;

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
