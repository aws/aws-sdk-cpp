/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/s3control/model/PublicAccessBlockConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace S3Control
{
namespace Model
{

  /**
   */
  class PutPublicAccessBlockRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API PutPublicAccessBlockRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutPublicAccessBlock"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The <code>PublicAccessBlock</code> configuration that you want to apply to
     * the specified Amazon Web Services account.</p>
     */
    inline const PublicAccessBlockConfiguration& GetPublicAccessBlockConfiguration() const { return m_publicAccessBlockConfiguration; }
    inline bool PublicAccessBlockConfigurationHasBeenSet() const { return m_publicAccessBlockConfigurationHasBeenSet; }
    template<typename PublicAccessBlockConfigurationT = PublicAccessBlockConfiguration>
    void SetPublicAccessBlockConfiguration(PublicAccessBlockConfigurationT&& value) { m_publicAccessBlockConfigurationHasBeenSet = true; m_publicAccessBlockConfiguration = std::forward<PublicAccessBlockConfigurationT>(value); }
    template<typename PublicAccessBlockConfigurationT = PublicAccessBlockConfiguration>
    PutPublicAccessBlockRequest& WithPublicAccessBlockConfiguration(PublicAccessBlockConfigurationT&& value) { SetPublicAccessBlockConfiguration(std::forward<PublicAccessBlockConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID for the Amazon Web Services account whose
     * <code>PublicAccessBlock</code> configuration you want to set.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    PutPublicAccessBlockRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}
  private:

    PublicAccessBlockConfiguration m_publicAccessBlockConfiguration;
    bool m_publicAccessBlockConfigurationHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
