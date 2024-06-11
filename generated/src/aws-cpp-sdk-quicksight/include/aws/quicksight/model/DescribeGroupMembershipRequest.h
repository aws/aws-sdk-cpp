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
  class DescribeGroupMembershipRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API DescribeGroupMembershipRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeGroupMembership"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The user name of the user that you want to search for.</p>
     */
    inline const Aws::String& GetMemberName() const{ return m_memberName; }
    inline bool MemberNameHasBeenSet() const { return m_memberNameHasBeenSet; }
    inline void SetMemberName(const Aws::String& value) { m_memberNameHasBeenSet = true; m_memberName = value; }
    inline void SetMemberName(Aws::String&& value) { m_memberNameHasBeenSet = true; m_memberName = std::move(value); }
    inline void SetMemberName(const char* value) { m_memberNameHasBeenSet = true; m_memberName.assign(value); }
    inline DescribeGroupMembershipRequest& WithMemberName(const Aws::String& value) { SetMemberName(value); return *this;}
    inline DescribeGroupMembershipRequest& WithMemberName(Aws::String&& value) { SetMemberName(std::move(value)); return *this;}
    inline DescribeGroupMembershipRequest& WithMemberName(const char* value) { SetMemberName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the group that you want to search.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }
    inline DescribeGroupMembershipRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}
    inline DescribeGroupMembershipRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}
    inline DescribeGroupMembershipRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the Amazon Web Services account that the group is in. Currently,
     * you use the ID for the Amazon Web Services account that contains your Amazon
     * QuickSight account.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline DescribeGroupMembershipRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline DescribeGroupMembershipRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline DescribeGroupMembershipRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace that includes the group you are searching within.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }
    inline DescribeGroupMembershipRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline DescribeGroupMembershipRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline DescribeGroupMembershipRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}
  private:

    Aws::String m_memberName;
    bool m_memberNameHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
