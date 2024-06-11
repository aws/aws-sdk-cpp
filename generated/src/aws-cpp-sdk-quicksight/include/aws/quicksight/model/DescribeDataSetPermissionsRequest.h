﻿/**
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
  class DescribeDataSetPermissionsRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API DescribeDataSetPermissionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDataSetPermissions"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline DescribeDataSetPermissionsRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline DescribeDataSetPermissionsRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline DescribeDataSetPermissionsRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the dataset that you want to create. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }
    inline DescribeDataSetPermissionsRequest& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}
    inline DescribeDataSetPermissionsRequest& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}
    inline DescribeDataSetPermissionsRequest& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
