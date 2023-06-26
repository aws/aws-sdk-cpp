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
  class DescribeIAMPolicyAssignmentRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API DescribeIAMPolicyAssignmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeIAMPolicyAssignment"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Amazon Web Services account that contains the assignment that
     * you want to describe.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the assignment that
     * you want to describe.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the assignment that
     * you want to describe.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the assignment that
     * you want to describe.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the assignment that
     * you want to describe.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the assignment that
     * you want to describe.</p>
     */
    inline DescribeIAMPolicyAssignmentRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the assignment that
     * you want to describe.</p>
     */
    inline DescribeIAMPolicyAssignmentRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the assignment that
     * you want to describe.</p>
     */
    inline DescribeIAMPolicyAssignmentRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The name of the assignment, also called a rule.</p>
     */
    inline const Aws::String& GetAssignmentName() const{ return m_assignmentName; }

    /**
     * <p>The name of the assignment, also called a rule.</p>
     */
    inline bool AssignmentNameHasBeenSet() const { return m_assignmentNameHasBeenSet; }

    /**
     * <p>The name of the assignment, also called a rule.</p>
     */
    inline void SetAssignmentName(const Aws::String& value) { m_assignmentNameHasBeenSet = true; m_assignmentName = value; }

    /**
     * <p>The name of the assignment, also called a rule.</p>
     */
    inline void SetAssignmentName(Aws::String&& value) { m_assignmentNameHasBeenSet = true; m_assignmentName = std::move(value); }

    /**
     * <p>The name of the assignment, also called a rule.</p>
     */
    inline void SetAssignmentName(const char* value) { m_assignmentNameHasBeenSet = true; m_assignmentName.assign(value); }

    /**
     * <p>The name of the assignment, also called a rule.</p>
     */
    inline DescribeIAMPolicyAssignmentRequest& WithAssignmentName(const Aws::String& value) { SetAssignmentName(value); return *this;}

    /**
     * <p>The name of the assignment, also called a rule.</p>
     */
    inline DescribeIAMPolicyAssignmentRequest& WithAssignmentName(Aws::String&& value) { SetAssignmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the assignment, also called a rule.</p>
     */
    inline DescribeIAMPolicyAssignmentRequest& WithAssignmentName(const char* value) { SetAssignmentName(value); return *this;}


    /**
     * <p>The namespace that contains the assignment.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace that contains the assignment.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace that contains the assignment.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace that contains the assignment.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace that contains the assignment.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace that contains the assignment.</p>
     */
    inline DescribeIAMPolicyAssignmentRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace that contains the assignment.</p>
     */
    inline DescribeIAMPolicyAssignmentRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace that contains the assignment.</p>
     */
    inline DescribeIAMPolicyAssignmentRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}

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
