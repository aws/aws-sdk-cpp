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
    AWS_QUICKSIGHT_API UpdatePublicSharingSettingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePublicSharingSettings"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with your QuickSight
     * subscription.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    UpdatePublicSharingSettingsRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that indicates whether public sharing is turned on for an
     * QuickSight account.</p>
     */
    inline bool GetPublicSharingEnabled() const { return m_publicSharingEnabled; }
    inline bool PublicSharingEnabledHasBeenSet() const { return m_publicSharingEnabledHasBeenSet; }
    inline void SetPublicSharingEnabled(bool value) { m_publicSharingEnabledHasBeenSet = true; m_publicSharingEnabled = value; }
    inline UpdatePublicSharingSettingsRequest& WithPublicSharingEnabled(bool value) { SetPublicSharingEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    bool m_publicSharingEnabled{false};
    bool m_publicSharingEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
