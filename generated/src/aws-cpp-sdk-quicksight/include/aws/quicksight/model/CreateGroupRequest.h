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
   * <p>The request object for this operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateGroupRequest">AWS
   * API Reference</a></p>
   */
  class CreateGroupRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API CreateGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGroup"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>A name for the group that you want to create.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>A name for the group that you want to create.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>A name for the group that you want to create.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>A name for the group that you want to create.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>A name for the group that you want to create.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>A name for the group that you want to create.</p>
     */
    inline CreateGroupRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>A name for the group that you want to create.</p>
     */
    inline CreateGroupRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>A name for the group that you want to create.</p>
     */
    inline CreateGroupRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>A description for the group that you want to create.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the group that you want to create.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the group that you want to create.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the group that you want to create.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the group that you want to create.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the group that you want to create.</p>
     */
    inline CreateGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the group that you want to create.</p>
     */
    inline CreateGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the group that you want to create.</p>
     */
    inline CreateGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID for the Amazon Web Services account that the group is in. Currently,
     * you use the ID for the Amazon Web Services account that contains your Amazon
     * QuickSight account.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID for the Amazon Web Services account that the group is in. Currently,
     * you use the ID for the Amazon Web Services account that contains your Amazon
     * QuickSight account.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID for the Amazon Web Services account that the group is in. Currently,
     * you use the ID for the Amazon Web Services account that contains your Amazon
     * QuickSight account.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID for the Amazon Web Services account that the group is in. Currently,
     * you use the ID for the Amazon Web Services account that contains your Amazon
     * QuickSight account.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID for the Amazon Web Services account that the group is in. Currently,
     * you use the ID for the Amazon Web Services account that contains your Amazon
     * QuickSight account.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID for the Amazon Web Services account that the group is in. Currently,
     * you use the ID for the Amazon Web Services account that contains your Amazon
     * QuickSight account.</p>
     */
    inline CreateGroupRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account that the group is in. Currently,
     * you use the ID for the Amazon Web Services account that contains your Amazon
     * QuickSight account.</p>
     */
    inline CreateGroupRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account that the group is in. Currently,
     * you use the ID for the Amazon Web Services account that contains your Amazon
     * QuickSight account.</p>
     */
    inline CreateGroupRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The namespace that you want the group to be a part of.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace that you want the group to be a part of.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace that you want the group to be a part of.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace that you want the group to be a part of.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace that you want the group to be a part of.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace that you want the group to be a part of.</p>
     */
    inline CreateGroupRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace that you want the group to be a part of.</p>
     */
    inline CreateGroupRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace that you want the group to be a part of.</p>
     */
    inline CreateGroupRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}

  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
