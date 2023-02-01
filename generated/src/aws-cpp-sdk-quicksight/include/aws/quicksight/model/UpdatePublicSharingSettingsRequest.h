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
  class UpdatePublicSharingSettingsRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdatePublicSharingSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePublicSharingSettings"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Web Services account ID associated with your Amazon QuickSight
     * subscription.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The Amazon Web Services account ID associated with your Amazon QuickSight
     * subscription.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID associated with your Amazon QuickSight
     * subscription.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID associated with your Amazon QuickSight
     * subscription.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID associated with your Amazon QuickSight
     * subscription.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID associated with your Amazon QuickSight
     * subscription.</p>
     */
    inline UpdatePublicSharingSettingsRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID associated with your Amazon QuickSight
     * subscription.</p>
     */
    inline UpdatePublicSharingSettingsRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID associated with your Amazon QuickSight
     * subscription.</p>
     */
    inline UpdatePublicSharingSettingsRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>A Boolean value that indicates whether public sharing is turned on for an
     * Amazon QuickSight account.</p>
     */
    inline bool GetPublicSharingEnabled() const{ return m_publicSharingEnabled; }

    /**
     * <p>A Boolean value that indicates whether public sharing is turned on for an
     * Amazon QuickSight account.</p>
     */
    inline bool PublicSharingEnabledHasBeenSet() const { return m_publicSharingEnabledHasBeenSet; }

    /**
     * <p>A Boolean value that indicates whether public sharing is turned on for an
     * Amazon QuickSight account.</p>
     */
    inline void SetPublicSharingEnabled(bool value) { m_publicSharingEnabledHasBeenSet = true; m_publicSharingEnabled = value; }

    /**
     * <p>A Boolean value that indicates whether public sharing is turned on for an
     * Amazon QuickSight account.</p>
     */
    inline UpdatePublicSharingSettingsRequest& WithPublicSharingEnabled(bool value) { SetPublicSharingEnabled(value); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    bool m_publicSharingEnabled;
    bool m_publicSharingEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
