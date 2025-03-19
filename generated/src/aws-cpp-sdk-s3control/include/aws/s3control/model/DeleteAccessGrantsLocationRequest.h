/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
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
  class DeleteAccessGrantsLocationRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API DeleteAccessGrantsLocationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAccessGrantsLocation"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    AWS_S3CONTROL_API inline bool ShouldComputeContentMd5() const override { return true; }

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the S3 Access Grants instance.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    DeleteAccessGrantsLocationRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the registered location that you are deregistering from your S3
     * Access Grants instance. S3 Access Grants assigned this ID when you registered
     * the location. S3 Access Grants assigns the ID <code>default</code> to the
     * default location <code>s3://</code> and assigns an auto-generated ID to other
     * locations that you register. </p>
     */
    inline const Aws::String& GetAccessGrantsLocationId() const { return m_accessGrantsLocationId; }
    inline bool AccessGrantsLocationIdHasBeenSet() const { return m_accessGrantsLocationIdHasBeenSet; }
    template<typename AccessGrantsLocationIdT = Aws::String>
    void SetAccessGrantsLocationId(AccessGrantsLocationIdT&& value) { m_accessGrantsLocationIdHasBeenSet = true; m_accessGrantsLocationId = std::forward<AccessGrantsLocationIdT>(value); }
    template<typename AccessGrantsLocationIdT = Aws::String>
    DeleteAccessGrantsLocationRequest& WithAccessGrantsLocationId(AccessGrantsLocationIdT&& value) { SetAccessGrantsLocationId(std::forward<AccessGrantsLocationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_accessGrantsLocationId;
    bool m_accessGrantsLocationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
