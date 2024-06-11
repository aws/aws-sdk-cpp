/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class DeleteIAMPolicyAssignmentRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API DeleteIAMPolicyAssignmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteIAMPolicyAssignment"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID where you want to delete the IAM policy
     * assignment.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline DeleteIAMPolicyAssignmentRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline DeleteIAMPolicyAssignmentRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline DeleteIAMPolicyAssignmentRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the assignment. </p>
     */
    inline const Aws::String& GetAssignmentName() const{ return m_assignmentName; }
    inline bool AssignmentNameHasBeenSet() const { return m_assignmentNameHasBeenSet; }
    inline void SetAssignmentName(const Aws::String& value) { m_assignmentNameHasBeenSet = true; m_assignmentName = value; }
    inline void SetAssignmentName(Aws::String&& value) { m_assignmentNameHasBeenSet = true; m_assignmentName = std::move(value); }
    inline void SetAssignmentName(const char* value) { m_assignmentNameHasBeenSet = true; m_assignmentName.assign(value); }
    inline DeleteIAMPolicyAssignmentRequest& WithAssignmentName(const Aws::String& value) { SetAssignmentName(value); return *this;}
    inline DeleteIAMPolicyAssignmentRequest& WithAssignmentName(Aws::String&& value) { SetAssignmentName(std::move(value)); return *this;}
    inline DeleteIAMPolicyAssignmentRequest& WithAssignmentName(const char* value) { SetAssignmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace that contains the assignment.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }
    inline DeleteIAMPolicyAssignmentRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline DeleteIAMPolicyAssignmentRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline DeleteIAMPolicyAssignmentRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_assignmentName;
    bool m_assignmentNameHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
