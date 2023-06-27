/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/OpsItemStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/OpsItemDataValue.h>
#include <aws/ssm/model/OpsItemNotification.h>
#include <aws/ssm/model/RelatedOpsItem.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class UpdateOpsItemRequest : public SSMRequest
  {
  public:
    AWS_SSM_API UpdateOpsItemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOpsItem"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Update the information about the OpsItem. Provide enough information so that
     * users reading this OpsItem for the first time understand the issue. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Update the information about the OpsItem. Provide enough information so that
     * users reading this OpsItem for the first time understand the issue. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Update the information about the OpsItem. Provide enough information so that
     * users reading this OpsItem for the first time understand the issue. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Update the information about the OpsItem. Provide enough information so that
     * users reading this OpsItem for the first time understand the issue. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Update the information about the OpsItem. Provide enough information so that
     * users reading this OpsItem for the first time understand the issue. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Update the information about the OpsItem. Provide enough information so that
     * users reading this OpsItem for the first time understand the issue. </p>
     */
    inline UpdateOpsItemRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Update the information about the OpsItem. Provide enough information so that
     * users reading this OpsItem for the first time understand the issue. </p>
     */
    inline UpdateOpsItemRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Update the information about the OpsItem. Provide enough information so that
     * users reading this OpsItem for the first time understand the issue. </p>
     */
    inline UpdateOpsItemRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Add new keys or edit existing key-value pairs of the OperationalData map in
     * the OpsItem object.</p> <p>Operational data is custom data that provides useful
     * reference details about the OpsItem. For example, you can specify log files,
     * error strings, license keys, troubleshooting tips, or other relevant data. You
     * enter operational data as key-value pairs. The key has a maximum length of 128
     * characters. The value has a maximum size of 20 KB.</p> 
     * <p>Operational data keys <i>can't</i> begin with the following:
     * <code>amazon</code>, <code>aws</code>, <code>amzn</code>, <code>ssm</code>,
     * <code>/amazon</code>, <code>/aws</code>, <code>/amzn</code>,
     * <code>/ssm</code>.</p>  <p>You can choose to make the data
     * searchable by other users in the account or you can restrict search access.
     * Searchable data means that all users with access to the OpsItem Overview page
     * (as provided by the <a>DescribeOpsItems</a> API operation) can view and search
     * on the specified data. Operational data that isn't searchable is only viewable
     * by users who have access to the OpsItem (as provided by the <a>GetOpsItem</a>
     * API operation).</p> <p>Use the <code>/aws/resources</code> key in
     * OperationalData to specify a related resource in the request. Use the
     * <code>/aws/automations</code> key in OperationalData to associate an Automation
     * runbook with the OpsItem. To view Amazon Web Services CLI example commands that
     * use these keys, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-manually-create-OpsItems.html">Creating
     * OpsItems manually</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, OpsItemDataValue>& GetOperationalData() const{ return m_operationalData; }

    /**
     * <p>Add new keys or edit existing key-value pairs of the OperationalData map in
     * the OpsItem object.</p> <p>Operational data is custom data that provides useful
     * reference details about the OpsItem. For example, you can specify log files,
     * error strings, license keys, troubleshooting tips, or other relevant data. You
     * enter operational data as key-value pairs. The key has a maximum length of 128
     * characters. The value has a maximum size of 20 KB.</p> 
     * <p>Operational data keys <i>can't</i> begin with the following:
     * <code>amazon</code>, <code>aws</code>, <code>amzn</code>, <code>ssm</code>,
     * <code>/amazon</code>, <code>/aws</code>, <code>/amzn</code>,
     * <code>/ssm</code>.</p>  <p>You can choose to make the data
     * searchable by other users in the account or you can restrict search access.
     * Searchable data means that all users with access to the OpsItem Overview page
     * (as provided by the <a>DescribeOpsItems</a> API operation) can view and search
     * on the specified data. Operational data that isn't searchable is only viewable
     * by users who have access to the OpsItem (as provided by the <a>GetOpsItem</a>
     * API operation).</p> <p>Use the <code>/aws/resources</code> key in
     * OperationalData to specify a related resource in the request. Use the
     * <code>/aws/automations</code> key in OperationalData to associate an Automation
     * runbook with the OpsItem. To view Amazon Web Services CLI example commands that
     * use these keys, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-manually-create-OpsItems.html">Creating
     * OpsItems manually</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline bool OperationalDataHasBeenSet() const { return m_operationalDataHasBeenSet; }

    /**
     * <p>Add new keys or edit existing key-value pairs of the OperationalData map in
     * the OpsItem object.</p> <p>Operational data is custom data that provides useful
     * reference details about the OpsItem. For example, you can specify log files,
     * error strings, license keys, troubleshooting tips, or other relevant data. You
     * enter operational data as key-value pairs. The key has a maximum length of 128
     * characters. The value has a maximum size of 20 KB.</p> 
     * <p>Operational data keys <i>can't</i> begin with the following:
     * <code>amazon</code>, <code>aws</code>, <code>amzn</code>, <code>ssm</code>,
     * <code>/amazon</code>, <code>/aws</code>, <code>/amzn</code>,
     * <code>/ssm</code>.</p>  <p>You can choose to make the data
     * searchable by other users in the account or you can restrict search access.
     * Searchable data means that all users with access to the OpsItem Overview page
     * (as provided by the <a>DescribeOpsItems</a> API operation) can view and search
     * on the specified data. Operational data that isn't searchable is only viewable
     * by users who have access to the OpsItem (as provided by the <a>GetOpsItem</a>
     * API operation).</p> <p>Use the <code>/aws/resources</code> key in
     * OperationalData to specify a related resource in the request. Use the
     * <code>/aws/automations</code> key in OperationalData to associate an Automation
     * runbook with the OpsItem. To view Amazon Web Services CLI example commands that
     * use these keys, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-manually-create-OpsItems.html">Creating
     * OpsItems manually</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline void SetOperationalData(const Aws::Map<Aws::String, OpsItemDataValue>& value) { m_operationalDataHasBeenSet = true; m_operationalData = value; }

    /**
     * <p>Add new keys or edit existing key-value pairs of the OperationalData map in
     * the OpsItem object.</p> <p>Operational data is custom data that provides useful
     * reference details about the OpsItem. For example, you can specify log files,
     * error strings, license keys, troubleshooting tips, or other relevant data. You
     * enter operational data as key-value pairs. The key has a maximum length of 128
     * characters. The value has a maximum size of 20 KB.</p> 
     * <p>Operational data keys <i>can't</i> begin with the following:
     * <code>amazon</code>, <code>aws</code>, <code>amzn</code>, <code>ssm</code>,
     * <code>/amazon</code>, <code>/aws</code>, <code>/amzn</code>,
     * <code>/ssm</code>.</p>  <p>You can choose to make the data
     * searchable by other users in the account or you can restrict search access.
     * Searchable data means that all users with access to the OpsItem Overview page
     * (as provided by the <a>DescribeOpsItems</a> API operation) can view and search
     * on the specified data. Operational data that isn't searchable is only viewable
     * by users who have access to the OpsItem (as provided by the <a>GetOpsItem</a>
     * API operation).</p> <p>Use the <code>/aws/resources</code> key in
     * OperationalData to specify a related resource in the request. Use the
     * <code>/aws/automations</code> key in OperationalData to associate an Automation
     * runbook with the OpsItem. To view Amazon Web Services CLI example commands that
     * use these keys, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-manually-create-OpsItems.html">Creating
     * OpsItems manually</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline void SetOperationalData(Aws::Map<Aws::String, OpsItemDataValue>&& value) { m_operationalDataHasBeenSet = true; m_operationalData = std::move(value); }

    /**
     * <p>Add new keys or edit existing key-value pairs of the OperationalData map in
     * the OpsItem object.</p> <p>Operational data is custom data that provides useful
     * reference details about the OpsItem. For example, you can specify log files,
     * error strings, license keys, troubleshooting tips, or other relevant data. You
     * enter operational data as key-value pairs. The key has a maximum length of 128
     * characters. The value has a maximum size of 20 KB.</p> 
     * <p>Operational data keys <i>can't</i> begin with the following:
     * <code>amazon</code>, <code>aws</code>, <code>amzn</code>, <code>ssm</code>,
     * <code>/amazon</code>, <code>/aws</code>, <code>/amzn</code>,
     * <code>/ssm</code>.</p>  <p>You can choose to make the data
     * searchable by other users in the account or you can restrict search access.
     * Searchable data means that all users with access to the OpsItem Overview page
     * (as provided by the <a>DescribeOpsItems</a> API operation) can view and search
     * on the specified data. Operational data that isn't searchable is only viewable
     * by users who have access to the OpsItem (as provided by the <a>GetOpsItem</a>
     * API operation).</p> <p>Use the <code>/aws/resources</code> key in
     * OperationalData to specify a related resource in the request. Use the
     * <code>/aws/automations</code> key in OperationalData to associate an Automation
     * runbook with the OpsItem. To view Amazon Web Services CLI example commands that
     * use these keys, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-manually-create-OpsItems.html">Creating
     * OpsItems manually</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline UpdateOpsItemRequest& WithOperationalData(const Aws::Map<Aws::String, OpsItemDataValue>& value) { SetOperationalData(value); return *this;}

    /**
     * <p>Add new keys or edit existing key-value pairs of the OperationalData map in
     * the OpsItem object.</p> <p>Operational data is custom data that provides useful
     * reference details about the OpsItem. For example, you can specify log files,
     * error strings, license keys, troubleshooting tips, or other relevant data. You
     * enter operational data as key-value pairs. The key has a maximum length of 128
     * characters. The value has a maximum size of 20 KB.</p> 
     * <p>Operational data keys <i>can't</i> begin with the following:
     * <code>amazon</code>, <code>aws</code>, <code>amzn</code>, <code>ssm</code>,
     * <code>/amazon</code>, <code>/aws</code>, <code>/amzn</code>,
     * <code>/ssm</code>.</p>  <p>You can choose to make the data
     * searchable by other users in the account or you can restrict search access.
     * Searchable data means that all users with access to the OpsItem Overview page
     * (as provided by the <a>DescribeOpsItems</a> API operation) can view and search
     * on the specified data. Operational data that isn't searchable is only viewable
     * by users who have access to the OpsItem (as provided by the <a>GetOpsItem</a>
     * API operation).</p> <p>Use the <code>/aws/resources</code> key in
     * OperationalData to specify a related resource in the request. Use the
     * <code>/aws/automations</code> key in OperationalData to associate an Automation
     * runbook with the OpsItem. To view Amazon Web Services CLI example commands that
     * use these keys, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-manually-create-OpsItems.html">Creating
     * OpsItems manually</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline UpdateOpsItemRequest& WithOperationalData(Aws::Map<Aws::String, OpsItemDataValue>&& value) { SetOperationalData(std::move(value)); return *this;}

    /**
     * <p>Add new keys or edit existing key-value pairs of the OperationalData map in
     * the OpsItem object.</p> <p>Operational data is custom data that provides useful
     * reference details about the OpsItem. For example, you can specify log files,
     * error strings, license keys, troubleshooting tips, or other relevant data. You
     * enter operational data as key-value pairs. The key has a maximum length of 128
     * characters. The value has a maximum size of 20 KB.</p> 
     * <p>Operational data keys <i>can't</i> begin with the following:
     * <code>amazon</code>, <code>aws</code>, <code>amzn</code>, <code>ssm</code>,
     * <code>/amazon</code>, <code>/aws</code>, <code>/amzn</code>,
     * <code>/ssm</code>.</p>  <p>You can choose to make the data
     * searchable by other users in the account or you can restrict search access.
     * Searchable data means that all users with access to the OpsItem Overview page
     * (as provided by the <a>DescribeOpsItems</a> API operation) can view and search
     * on the specified data. Operational data that isn't searchable is only viewable
     * by users who have access to the OpsItem (as provided by the <a>GetOpsItem</a>
     * API operation).</p> <p>Use the <code>/aws/resources</code> key in
     * OperationalData to specify a related resource in the request. Use the
     * <code>/aws/automations</code> key in OperationalData to associate an Automation
     * runbook with the OpsItem. To view Amazon Web Services CLI example commands that
     * use these keys, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-manually-create-OpsItems.html">Creating
     * OpsItems manually</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline UpdateOpsItemRequest& AddOperationalData(const Aws::String& key, const OpsItemDataValue& value) { m_operationalDataHasBeenSet = true; m_operationalData.emplace(key, value); return *this; }

    /**
     * <p>Add new keys or edit existing key-value pairs of the OperationalData map in
     * the OpsItem object.</p> <p>Operational data is custom data that provides useful
     * reference details about the OpsItem. For example, you can specify log files,
     * error strings, license keys, troubleshooting tips, or other relevant data. You
     * enter operational data as key-value pairs. The key has a maximum length of 128
     * characters. The value has a maximum size of 20 KB.</p> 
     * <p>Operational data keys <i>can't</i> begin with the following:
     * <code>amazon</code>, <code>aws</code>, <code>amzn</code>, <code>ssm</code>,
     * <code>/amazon</code>, <code>/aws</code>, <code>/amzn</code>,
     * <code>/ssm</code>.</p>  <p>You can choose to make the data
     * searchable by other users in the account or you can restrict search access.
     * Searchable data means that all users with access to the OpsItem Overview page
     * (as provided by the <a>DescribeOpsItems</a> API operation) can view and search
     * on the specified data. Operational data that isn't searchable is only viewable
     * by users who have access to the OpsItem (as provided by the <a>GetOpsItem</a>
     * API operation).</p> <p>Use the <code>/aws/resources</code> key in
     * OperationalData to specify a related resource in the request. Use the
     * <code>/aws/automations</code> key in OperationalData to associate an Automation
     * runbook with the OpsItem. To view Amazon Web Services CLI example commands that
     * use these keys, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-manually-create-OpsItems.html">Creating
     * OpsItems manually</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline UpdateOpsItemRequest& AddOperationalData(Aws::String&& key, const OpsItemDataValue& value) { m_operationalDataHasBeenSet = true; m_operationalData.emplace(std::move(key), value); return *this; }

    /**
     * <p>Add new keys or edit existing key-value pairs of the OperationalData map in
     * the OpsItem object.</p> <p>Operational data is custom data that provides useful
     * reference details about the OpsItem. For example, you can specify log files,
     * error strings, license keys, troubleshooting tips, or other relevant data. You
     * enter operational data as key-value pairs. The key has a maximum length of 128
     * characters. The value has a maximum size of 20 KB.</p> 
     * <p>Operational data keys <i>can't</i> begin with the following:
     * <code>amazon</code>, <code>aws</code>, <code>amzn</code>, <code>ssm</code>,
     * <code>/amazon</code>, <code>/aws</code>, <code>/amzn</code>,
     * <code>/ssm</code>.</p>  <p>You can choose to make the data
     * searchable by other users in the account or you can restrict search access.
     * Searchable data means that all users with access to the OpsItem Overview page
     * (as provided by the <a>DescribeOpsItems</a> API operation) can view and search
     * on the specified data. Operational data that isn't searchable is only viewable
     * by users who have access to the OpsItem (as provided by the <a>GetOpsItem</a>
     * API operation).</p> <p>Use the <code>/aws/resources</code> key in
     * OperationalData to specify a related resource in the request. Use the
     * <code>/aws/automations</code> key in OperationalData to associate an Automation
     * runbook with the OpsItem. To view Amazon Web Services CLI example commands that
     * use these keys, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-manually-create-OpsItems.html">Creating
     * OpsItems manually</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline UpdateOpsItemRequest& AddOperationalData(const Aws::String& key, OpsItemDataValue&& value) { m_operationalDataHasBeenSet = true; m_operationalData.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Add new keys or edit existing key-value pairs of the OperationalData map in
     * the OpsItem object.</p> <p>Operational data is custom data that provides useful
     * reference details about the OpsItem. For example, you can specify log files,
     * error strings, license keys, troubleshooting tips, or other relevant data. You
     * enter operational data as key-value pairs. The key has a maximum length of 128
     * characters. The value has a maximum size of 20 KB.</p> 
     * <p>Operational data keys <i>can't</i> begin with the following:
     * <code>amazon</code>, <code>aws</code>, <code>amzn</code>, <code>ssm</code>,
     * <code>/amazon</code>, <code>/aws</code>, <code>/amzn</code>,
     * <code>/ssm</code>.</p>  <p>You can choose to make the data
     * searchable by other users in the account or you can restrict search access.
     * Searchable data means that all users with access to the OpsItem Overview page
     * (as provided by the <a>DescribeOpsItems</a> API operation) can view and search
     * on the specified data. Operational data that isn't searchable is only viewable
     * by users who have access to the OpsItem (as provided by the <a>GetOpsItem</a>
     * API operation).</p> <p>Use the <code>/aws/resources</code> key in
     * OperationalData to specify a related resource in the request. Use the
     * <code>/aws/automations</code> key in OperationalData to associate an Automation
     * runbook with the OpsItem. To view Amazon Web Services CLI example commands that
     * use these keys, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-manually-create-OpsItems.html">Creating
     * OpsItems manually</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline UpdateOpsItemRequest& AddOperationalData(Aws::String&& key, OpsItemDataValue&& value) { m_operationalDataHasBeenSet = true; m_operationalData.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Add new keys or edit existing key-value pairs of the OperationalData map in
     * the OpsItem object.</p> <p>Operational data is custom data that provides useful
     * reference details about the OpsItem. For example, you can specify log files,
     * error strings, license keys, troubleshooting tips, or other relevant data. You
     * enter operational data as key-value pairs. The key has a maximum length of 128
     * characters. The value has a maximum size of 20 KB.</p> 
     * <p>Operational data keys <i>can't</i> begin with the following:
     * <code>amazon</code>, <code>aws</code>, <code>amzn</code>, <code>ssm</code>,
     * <code>/amazon</code>, <code>/aws</code>, <code>/amzn</code>,
     * <code>/ssm</code>.</p>  <p>You can choose to make the data
     * searchable by other users in the account or you can restrict search access.
     * Searchable data means that all users with access to the OpsItem Overview page
     * (as provided by the <a>DescribeOpsItems</a> API operation) can view and search
     * on the specified data. Operational data that isn't searchable is only viewable
     * by users who have access to the OpsItem (as provided by the <a>GetOpsItem</a>
     * API operation).</p> <p>Use the <code>/aws/resources</code> key in
     * OperationalData to specify a related resource in the request. Use the
     * <code>/aws/automations</code> key in OperationalData to associate an Automation
     * runbook with the OpsItem. To view Amazon Web Services CLI example commands that
     * use these keys, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-manually-create-OpsItems.html">Creating
     * OpsItems manually</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline UpdateOpsItemRequest& AddOperationalData(const char* key, OpsItemDataValue&& value) { m_operationalDataHasBeenSet = true; m_operationalData.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Add new keys or edit existing key-value pairs of the OperationalData map in
     * the OpsItem object.</p> <p>Operational data is custom data that provides useful
     * reference details about the OpsItem. For example, you can specify log files,
     * error strings, license keys, troubleshooting tips, or other relevant data. You
     * enter operational data as key-value pairs. The key has a maximum length of 128
     * characters. The value has a maximum size of 20 KB.</p> 
     * <p>Operational data keys <i>can't</i> begin with the following:
     * <code>amazon</code>, <code>aws</code>, <code>amzn</code>, <code>ssm</code>,
     * <code>/amazon</code>, <code>/aws</code>, <code>/amzn</code>,
     * <code>/ssm</code>.</p>  <p>You can choose to make the data
     * searchable by other users in the account or you can restrict search access.
     * Searchable data means that all users with access to the OpsItem Overview page
     * (as provided by the <a>DescribeOpsItems</a> API operation) can view and search
     * on the specified data. Operational data that isn't searchable is only viewable
     * by users who have access to the OpsItem (as provided by the <a>GetOpsItem</a>
     * API operation).</p> <p>Use the <code>/aws/resources</code> key in
     * OperationalData to specify a related resource in the request. Use the
     * <code>/aws/automations</code> key in OperationalData to associate an Automation
     * runbook with the OpsItem. To view Amazon Web Services CLI example commands that
     * use these keys, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-manually-create-OpsItems.html">Creating
     * OpsItems manually</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline UpdateOpsItemRequest& AddOperationalData(const char* key, const OpsItemDataValue& value) { m_operationalDataHasBeenSet = true; m_operationalData.emplace(key, value); return *this; }


    /**
     * <p>Keys that you want to remove from the OperationalData map.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOperationalDataToDelete() const{ return m_operationalDataToDelete; }

    /**
     * <p>Keys that you want to remove from the OperationalData map.</p>
     */
    inline bool OperationalDataToDeleteHasBeenSet() const { return m_operationalDataToDeleteHasBeenSet; }

    /**
     * <p>Keys that you want to remove from the OperationalData map.</p>
     */
    inline void SetOperationalDataToDelete(const Aws::Vector<Aws::String>& value) { m_operationalDataToDeleteHasBeenSet = true; m_operationalDataToDelete = value; }

    /**
     * <p>Keys that you want to remove from the OperationalData map.</p>
     */
    inline void SetOperationalDataToDelete(Aws::Vector<Aws::String>&& value) { m_operationalDataToDeleteHasBeenSet = true; m_operationalDataToDelete = std::move(value); }

    /**
     * <p>Keys that you want to remove from the OperationalData map.</p>
     */
    inline UpdateOpsItemRequest& WithOperationalDataToDelete(const Aws::Vector<Aws::String>& value) { SetOperationalDataToDelete(value); return *this;}

    /**
     * <p>Keys that you want to remove from the OperationalData map.</p>
     */
    inline UpdateOpsItemRequest& WithOperationalDataToDelete(Aws::Vector<Aws::String>&& value) { SetOperationalDataToDelete(std::move(value)); return *this;}

    /**
     * <p>Keys that you want to remove from the OperationalData map.</p>
     */
    inline UpdateOpsItemRequest& AddOperationalDataToDelete(const Aws::String& value) { m_operationalDataToDeleteHasBeenSet = true; m_operationalDataToDelete.push_back(value); return *this; }

    /**
     * <p>Keys that you want to remove from the OperationalData map.</p>
     */
    inline UpdateOpsItemRequest& AddOperationalDataToDelete(Aws::String&& value) { m_operationalDataToDeleteHasBeenSet = true; m_operationalDataToDelete.push_back(std::move(value)); return *this; }

    /**
     * <p>Keys that you want to remove from the OperationalData map.</p>
     */
    inline UpdateOpsItemRequest& AddOperationalDataToDelete(const char* value) { m_operationalDataToDeleteHasBeenSet = true; m_operationalDataToDelete.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of an SNS topic where notifications are sent
     * when this OpsItem is edited or changed.</p>
     */
    inline const Aws::Vector<OpsItemNotification>& GetNotifications() const{ return m_notifications; }

    /**
     * <p>The Amazon Resource Name (ARN) of an SNS topic where notifications are sent
     * when this OpsItem is edited or changed.</p>
     */
    inline bool NotificationsHasBeenSet() const { return m_notificationsHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an SNS topic where notifications are sent
     * when this OpsItem is edited or changed.</p>
     */
    inline void SetNotifications(const Aws::Vector<OpsItemNotification>& value) { m_notificationsHasBeenSet = true; m_notifications = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an SNS topic where notifications are sent
     * when this OpsItem is edited or changed.</p>
     */
    inline void SetNotifications(Aws::Vector<OpsItemNotification>&& value) { m_notificationsHasBeenSet = true; m_notifications = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an SNS topic where notifications are sent
     * when this OpsItem is edited or changed.</p>
     */
    inline UpdateOpsItemRequest& WithNotifications(const Aws::Vector<OpsItemNotification>& value) { SetNotifications(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an SNS topic where notifications are sent
     * when this OpsItem is edited or changed.</p>
     */
    inline UpdateOpsItemRequest& WithNotifications(Aws::Vector<OpsItemNotification>&& value) { SetNotifications(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an SNS topic where notifications are sent
     * when this OpsItem is edited or changed.</p>
     */
    inline UpdateOpsItemRequest& AddNotifications(const OpsItemNotification& value) { m_notificationsHasBeenSet = true; m_notifications.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of an SNS topic where notifications are sent
     * when this OpsItem is edited or changed.</p>
     */
    inline UpdateOpsItemRequest& AddNotifications(OpsItemNotification&& value) { m_notificationsHasBeenSet = true; m_notifications.push_back(std::move(value)); return *this; }


    /**
     * <p>The importance of this OpsItem in relation to other OpsItems in the
     * system.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The importance of this OpsItem in relation to other OpsItems in the
     * system.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The importance of this OpsItem in relation to other OpsItems in the
     * system.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The importance of this OpsItem in relation to other OpsItems in the
     * system.</p>
     */
    inline UpdateOpsItemRequest& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>One or more OpsItems that share something in common with the current
     * OpsItems. For example, related OpsItems can include OpsItems with similar error
     * messages, impacted resources, or statuses for the impacted resource.</p>
     */
    inline const Aws::Vector<RelatedOpsItem>& GetRelatedOpsItems() const{ return m_relatedOpsItems; }

    /**
     * <p>One or more OpsItems that share something in common with the current
     * OpsItems. For example, related OpsItems can include OpsItems with similar error
     * messages, impacted resources, or statuses for the impacted resource.</p>
     */
    inline bool RelatedOpsItemsHasBeenSet() const { return m_relatedOpsItemsHasBeenSet; }

    /**
     * <p>One or more OpsItems that share something in common with the current
     * OpsItems. For example, related OpsItems can include OpsItems with similar error
     * messages, impacted resources, or statuses for the impacted resource.</p>
     */
    inline void SetRelatedOpsItems(const Aws::Vector<RelatedOpsItem>& value) { m_relatedOpsItemsHasBeenSet = true; m_relatedOpsItems = value; }

    /**
     * <p>One or more OpsItems that share something in common with the current
     * OpsItems. For example, related OpsItems can include OpsItems with similar error
     * messages, impacted resources, or statuses for the impacted resource.</p>
     */
    inline void SetRelatedOpsItems(Aws::Vector<RelatedOpsItem>&& value) { m_relatedOpsItemsHasBeenSet = true; m_relatedOpsItems = std::move(value); }

    /**
     * <p>One or more OpsItems that share something in common with the current
     * OpsItems. For example, related OpsItems can include OpsItems with similar error
     * messages, impacted resources, or statuses for the impacted resource.</p>
     */
    inline UpdateOpsItemRequest& WithRelatedOpsItems(const Aws::Vector<RelatedOpsItem>& value) { SetRelatedOpsItems(value); return *this;}

    /**
     * <p>One or more OpsItems that share something in common with the current
     * OpsItems. For example, related OpsItems can include OpsItems with similar error
     * messages, impacted resources, or statuses for the impacted resource.</p>
     */
    inline UpdateOpsItemRequest& WithRelatedOpsItems(Aws::Vector<RelatedOpsItem>&& value) { SetRelatedOpsItems(std::move(value)); return *this;}

    /**
     * <p>One or more OpsItems that share something in common with the current
     * OpsItems. For example, related OpsItems can include OpsItems with similar error
     * messages, impacted resources, or statuses for the impacted resource.</p>
     */
    inline UpdateOpsItemRequest& AddRelatedOpsItems(const RelatedOpsItem& value) { m_relatedOpsItemsHasBeenSet = true; m_relatedOpsItems.push_back(value); return *this; }

    /**
     * <p>One or more OpsItems that share something in common with the current
     * OpsItems. For example, related OpsItems can include OpsItems with similar error
     * messages, impacted resources, or statuses for the impacted resource.</p>
     */
    inline UpdateOpsItemRequest& AddRelatedOpsItems(RelatedOpsItem&& value) { m_relatedOpsItemsHasBeenSet = true; m_relatedOpsItems.push_back(std::move(value)); return *this; }


    /**
     * <p>The OpsItem status. Status can be <code>Open</code>, <code>In
     * Progress</code>, or <code>Resolved</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-working-with-OpsItems-editing-details.html">Editing
     * OpsItem details</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline const OpsItemStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The OpsItem status. Status can be <code>Open</code>, <code>In
     * Progress</code>, or <code>Resolved</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-working-with-OpsItems-editing-details.html">Editing
     * OpsItem details</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The OpsItem status. Status can be <code>Open</code>, <code>In
     * Progress</code>, or <code>Resolved</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-working-with-OpsItems-editing-details.html">Editing
     * OpsItem details</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline void SetStatus(const OpsItemStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The OpsItem status. Status can be <code>Open</code>, <code>In
     * Progress</code>, or <code>Resolved</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-working-with-OpsItems-editing-details.html">Editing
     * OpsItem details</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline void SetStatus(OpsItemStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The OpsItem status. Status can be <code>Open</code>, <code>In
     * Progress</code>, or <code>Resolved</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-working-with-OpsItems-editing-details.html">Editing
     * OpsItem details</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline UpdateOpsItemRequest& WithStatus(const OpsItemStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The OpsItem status. Status can be <code>Open</code>, <code>In
     * Progress</code>, or <code>Resolved</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/OpsCenter-working-with-OpsItems-editing-details.html">Editing
     * OpsItem details</a> in the <i>Amazon Web Services Systems Manager User
     * Guide</i>.</p>
     */
    inline UpdateOpsItemRequest& WithStatus(OpsItemStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline const Aws::String& GetOpsItemId() const{ return m_opsItemId; }

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline bool OpsItemIdHasBeenSet() const { return m_opsItemIdHasBeenSet; }

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline void SetOpsItemId(const Aws::String& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = value; }

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline void SetOpsItemId(Aws::String&& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = std::move(value); }

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline void SetOpsItemId(const char* value) { m_opsItemIdHasBeenSet = true; m_opsItemId.assign(value); }

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline UpdateOpsItemRequest& WithOpsItemId(const Aws::String& value) { SetOpsItemId(value); return *this;}

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline UpdateOpsItemRequest& WithOpsItemId(Aws::String&& value) { SetOpsItemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline UpdateOpsItemRequest& WithOpsItemId(const char* value) { SetOpsItemId(value); return *this;}


    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline UpdateOpsItemRequest& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline UpdateOpsItemRequest& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>A short heading that describes the nature of the OpsItem and the impacted
     * resource.</p>
     */
    inline UpdateOpsItemRequest& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>Specify a new category for an OpsItem.</p>
     */
    inline const Aws::String& GetCategory() const{ return m_category; }

    /**
     * <p>Specify a new category for an OpsItem.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>Specify a new category for an OpsItem.</p>
     */
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>Specify a new category for an OpsItem.</p>
     */
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>Specify a new category for an OpsItem.</p>
     */
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }

    /**
     * <p>Specify a new category for an OpsItem.</p>
     */
    inline UpdateOpsItemRequest& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}

    /**
     * <p>Specify a new category for an OpsItem.</p>
     */
    inline UpdateOpsItemRequest& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}

    /**
     * <p>Specify a new category for an OpsItem.</p>
     */
    inline UpdateOpsItemRequest& WithCategory(const char* value) { SetCategory(value); return *this;}


    /**
     * <p>Specify a new severity for an OpsItem.</p>
     */
    inline const Aws::String& GetSeverity() const{ return m_severity; }

    /**
     * <p>Specify a new severity for an OpsItem.</p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p>Specify a new severity for an OpsItem.</p>
     */
    inline void SetSeverity(const Aws::String& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>Specify a new severity for an OpsItem.</p>
     */
    inline void SetSeverity(Aws::String&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p>Specify a new severity for an OpsItem.</p>
     */
    inline void SetSeverity(const char* value) { m_severityHasBeenSet = true; m_severity.assign(value); }

    /**
     * <p>Specify a new severity for an OpsItem.</p>
     */
    inline UpdateOpsItemRequest& WithSeverity(const Aws::String& value) { SetSeverity(value); return *this;}

    /**
     * <p>Specify a new severity for an OpsItem.</p>
     */
    inline UpdateOpsItemRequest& WithSeverity(Aws::String&& value) { SetSeverity(std::move(value)); return *this;}

    /**
     * <p>Specify a new severity for an OpsItem.</p>
     */
    inline UpdateOpsItemRequest& WithSeverity(const char* value) { SetSeverity(value); return *this;}


    /**
     * <p>The time a runbook workflow started. Currently reported only for the OpsItem
     * type <code>/aws/changerequest</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetActualStartTime() const{ return m_actualStartTime; }

    /**
     * <p>The time a runbook workflow started. Currently reported only for the OpsItem
     * type <code>/aws/changerequest</code>.</p>
     */
    inline bool ActualStartTimeHasBeenSet() const { return m_actualStartTimeHasBeenSet; }

    /**
     * <p>The time a runbook workflow started. Currently reported only for the OpsItem
     * type <code>/aws/changerequest</code>.</p>
     */
    inline void SetActualStartTime(const Aws::Utils::DateTime& value) { m_actualStartTimeHasBeenSet = true; m_actualStartTime = value; }

    /**
     * <p>The time a runbook workflow started. Currently reported only for the OpsItem
     * type <code>/aws/changerequest</code>.</p>
     */
    inline void SetActualStartTime(Aws::Utils::DateTime&& value) { m_actualStartTimeHasBeenSet = true; m_actualStartTime = std::move(value); }

    /**
     * <p>The time a runbook workflow started. Currently reported only for the OpsItem
     * type <code>/aws/changerequest</code>.</p>
     */
    inline UpdateOpsItemRequest& WithActualStartTime(const Aws::Utils::DateTime& value) { SetActualStartTime(value); return *this;}

    /**
     * <p>The time a runbook workflow started. Currently reported only for the OpsItem
     * type <code>/aws/changerequest</code>.</p>
     */
    inline UpdateOpsItemRequest& WithActualStartTime(Aws::Utils::DateTime&& value) { SetActualStartTime(std::move(value)); return *this;}


    /**
     * <p>The time a runbook workflow ended. Currently reported only for the OpsItem
     * type <code>/aws/changerequest</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetActualEndTime() const{ return m_actualEndTime; }

    /**
     * <p>The time a runbook workflow ended. Currently reported only for the OpsItem
     * type <code>/aws/changerequest</code>.</p>
     */
    inline bool ActualEndTimeHasBeenSet() const { return m_actualEndTimeHasBeenSet; }

    /**
     * <p>The time a runbook workflow ended. Currently reported only for the OpsItem
     * type <code>/aws/changerequest</code>.</p>
     */
    inline void SetActualEndTime(const Aws::Utils::DateTime& value) { m_actualEndTimeHasBeenSet = true; m_actualEndTime = value; }

    /**
     * <p>The time a runbook workflow ended. Currently reported only for the OpsItem
     * type <code>/aws/changerequest</code>.</p>
     */
    inline void SetActualEndTime(Aws::Utils::DateTime&& value) { m_actualEndTimeHasBeenSet = true; m_actualEndTime = std::move(value); }

    /**
     * <p>The time a runbook workflow ended. Currently reported only for the OpsItem
     * type <code>/aws/changerequest</code>.</p>
     */
    inline UpdateOpsItemRequest& WithActualEndTime(const Aws::Utils::DateTime& value) { SetActualEndTime(value); return *this;}

    /**
     * <p>The time a runbook workflow ended. Currently reported only for the OpsItem
     * type <code>/aws/changerequest</code>.</p>
     */
    inline UpdateOpsItemRequest& WithActualEndTime(Aws::Utils::DateTime&& value) { SetActualEndTime(std::move(value)); return *this;}


    /**
     * <p>The time specified in a change request for a runbook workflow to start.
     * Currently supported only for the OpsItem type
     * <code>/aws/changerequest</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetPlannedStartTime() const{ return m_plannedStartTime; }

    /**
     * <p>The time specified in a change request for a runbook workflow to start.
     * Currently supported only for the OpsItem type
     * <code>/aws/changerequest</code>.</p>
     */
    inline bool PlannedStartTimeHasBeenSet() const { return m_plannedStartTimeHasBeenSet; }

    /**
     * <p>The time specified in a change request for a runbook workflow to start.
     * Currently supported only for the OpsItem type
     * <code>/aws/changerequest</code>.</p>
     */
    inline void SetPlannedStartTime(const Aws::Utils::DateTime& value) { m_plannedStartTimeHasBeenSet = true; m_plannedStartTime = value; }

    /**
     * <p>The time specified in a change request for a runbook workflow to start.
     * Currently supported only for the OpsItem type
     * <code>/aws/changerequest</code>.</p>
     */
    inline void SetPlannedStartTime(Aws::Utils::DateTime&& value) { m_plannedStartTimeHasBeenSet = true; m_plannedStartTime = std::move(value); }

    /**
     * <p>The time specified in a change request for a runbook workflow to start.
     * Currently supported only for the OpsItem type
     * <code>/aws/changerequest</code>.</p>
     */
    inline UpdateOpsItemRequest& WithPlannedStartTime(const Aws::Utils::DateTime& value) { SetPlannedStartTime(value); return *this;}

    /**
     * <p>The time specified in a change request for a runbook workflow to start.
     * Currently supported only for the OpsItem type
     * <code>/aws/changerequest</code>.</p>
     */
    inline UpdateOpsItemRequest& WithPlannedStartTime(Aws::Utils::DateTime&& value) { SetPlannedStartTime(std::move(value)); return *this;}


    /**
     * <p>The time specified in a change request for a runbook workflow to end.
     * Currently supported only for the OpsItem type
     * <code>/aws/changerequest</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetPlannedEndTime() const{ return m_plannedEndTime; }

    /**
     * <p>The time specified in a change request for a runbook workflow to end.
     * Currently supported only for the OpsItem type
     * <code>/aws/changerequest</code>.</p>
     */
    inline bool PlannedEndTimeHasBeenSet() const { return m_plannedEndTimeHasBeenSet; }

    /**
     * <p>The time specified in a change request for a runbook workflow to end.
     * Currently supported only for the OpsItem type
     * <code>/aws/changerequest</code>.</p>
     */
    inline void SetPlannedEndTime(const Aws::Utils::DateTime& value) { m_plannedEndTimeHasBeenSet = true; m_plannedEndTime = value; }

    /**
     * <p>The time specified in a change request for a runbook workflow to end.
     * Currently supported only for the OpsItem type
     * <code>/aws/changerequest</code>.</p>
     */
    inline void SetPlannedEndTime(Aws::Utils::DateTime&& value) { m_plannedEndTimeHasBeenSet = true; m_plannedEndTime = std::move(value); }

    /**
     * <p>The time specified in a change request for a runbook workflow to end.
     * Currently supported only for the OpsItem type
     * <code>/aws/changerequest</code>.</p>
     */
    inline UpdateOpsItemRequest& WithPlannedEndTime(const Aws::Utils::DateTime& value) { SetPlannedEndTime(value); return *this;}

    /**
     * <p>The time specified in a change request for a runbook workflow to end.
     * Currently supported only for the OpsItem type
     * <code>/aws/changerequest</code>.</p>
     */
    inline UpdateOpsItemRequest& WithPlannedEndTime(Aws::Utils::DateTime&& value) { SetPlannedEndTime(std::move(value)); return *this;}


    /**
     * <p>The OpsItem Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetOpsItemArn() const{ return m_opsItemArn; }

    /**
     * <p>The OpsItem Amazon Resource Name (ARN).</p>
     */
    inline bool OpsItemArnHasBeenSet() const { return m_opsItemArnHasBeenSet; }

    /**
     * <p>The OpsItem Amazon Resource Name (ARN).</p>
     */
    inline void SetOpsItemArn(const Aws::String& value) { m_opsItemArnHasBeenSet = true; m_opsItemArn = value; }

    /**
     * <p>The OpsItem Amazon Resource Name (ARN).</p>
     */
    inline void SetOpsItemArn(Aws::String&& value) { m_opsItemArnHasBeenSet = true; m_opsItemArn = std::move(value); }

    /**
     * <p>The OpsItem Amazon Resource Name (ARN).</p>
     */
    inline void SetOpsItemArn(const char* value) { m_opsItemArnHasBeenSet = true; m_opsItemArn.assign(value); }

    /**
     * <p>The OpsItem Amazon Resource Name (ARN).</p>
     */
    inline UpdateOpsItemRequest& WithOpsItemArn(const Aws::String& value) { SetOpsItemArn(value); return *this;}

    /**
     * <p>The OpsItem Amazon Resource Name (ARN).</p>
     */
    inline UpdateOpsItemRequest& WithOpsItemArn(Aws::String&& value) { SetOpsItemArn(std::move(value)); return *this;}

    /**
     * <p>The OpsItem Amazon Resource Name (ARN).</p>
     */
    inline UpdateOpsItemRequest& WithOpsItemArn(const char* value) { SetOpsItemArn(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, OpsItemDataValue> m_operationalData;
    bool m_operationalDataHasBeenSet = false;

    Aws::Vector<Aws::String> m_operationalDataToDelete;
    bool m_operationalDataToDeleteHasBeenSet = false;

    Aws::Vector<OpsItemNotification> m_notifications;
    bool m_notificationsHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::Vector<RelatedOpsItem> m_relatedOpsItems;
    bool m_relatedOpsItemsHasBeenSet = false;

    OpsItemStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_opsItemId;
    bool m_opsItemIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;

    Aws::String m_severity;
    bool m_severityHasBeenSet = false;

    Aws::Utils::DateTime m_actualStartTime;
    bool m_actualStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_actualEndTime;
    bool m_actualEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_plannedStartTime;
    bool m_plannedStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_plannedEndTime;
    bool m_plannedEndTimeHasBeenSet = false;

    Aws::String m_opsItemArn;
    bool m_opsItemArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
