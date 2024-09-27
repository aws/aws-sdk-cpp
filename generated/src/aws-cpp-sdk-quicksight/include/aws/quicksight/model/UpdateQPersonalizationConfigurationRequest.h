/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/PersonalizationMode.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class UpdateQPersonalizationConfigurationRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateQPersonalizationConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateQPersonalizationConfiguration"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account account that contains the
     * personalization configuration that the user wants to update.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline UpdateQPersonalizationConfigurationRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline UpdateQPersonalizationConfigurationRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline UpdateQPersonalizationConfigurationRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An option to allow Amazon QuickSight to customize data stories with user
     * specific metadata, specifically location and job information, in your IAM
     * Identity Center instance.</p>
     */
    inline const PersonalizationMode& GetPersonalizationMode() const{ return m_personalizationMode; }
    inline bool PersonalizationModeHasBeenSet() const { return m_personalizationModeHasBeenSet; }
    inline void SetPersonalizationMode(const PersonalizationMode& value) { m_personalizationModeHasBeenSet = true; m_personalizationMode = value; }
    inline void SetPersonalizationMode(PersonalizationMode&& value) { m_personalizationModeHasBeenSet = true; m_personalizationMode = std::move(value); }
    inline UpdateQPersonalizationConfigurationRequest& WithPersonalizationMode(const PersonalizationMode& value) { SetPersonalizationMode(value); return *this;}
    inline UpdateQPersonalizationConfigurationRequest& WithPersonalizationMode(PersonalizationMode&& value) { SetPersonalizationMode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    PersonalizationMode m_personalizationMode;
    bool m_personalizationModeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
