/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/QSearchStatus.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class UpdateQuickSightQSearchConfigurationRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateQuickSightQSearchConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateQuickSightQSearchConfiguration"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that contains the Amazon QuickSight
     * Q Search configuration that you want to update.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline UpdateQuickSightQSearchConfigurationRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline UpdateQuickSightQSearchConfigurationRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline UpdateQuickSightQSearchConfigurationRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Amazon QuickSight Q Search configuration that the user
     * wants to update.</p>
     */
    inline const QSearchStatus& GetQSearchStatus() const{ return m_qSearchStatus; }
    inline bool QSearchStatusHasBeenSet() const { return m_qSearchStatusHasBeenSet; }
    inline void SetQSearchStatus(const QSearchStatus& value) { m_qSearchStatusHasBeenSet = true; m_qSearchStatus = value; }
    inline void SetQSearchStatus(QSearchStatus&& value) { m_qSearchStatusHasBeenSet = true; m_qSearchStatus = std::move(value); }
    inline UpdateQuickSightQSearchConfigurationRequest& WithQSearchStatus(const QSearchStatus& value) { SetQSearchStatus(value); return *this;}
    inline UpdateQuickSightQSearchConfigurationRequest& WithQSearchStatus(QSearchStatus&& value) { SetQSearchStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    QSearchStatus m_qSearchStatus;
    bool m_qSearchStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
