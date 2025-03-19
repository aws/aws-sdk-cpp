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
  class DescribeMultiRegionAccessPointOperationRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API DescribeMultiRegionAccessPointOperationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeMultiRegionAccessPointOperation"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    AWS_S3CONTROL_API inline bool ShouldComputeContentMd5() const override { return true; }

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The Amazon Web Services account ID for the owner of the Multi-Region Access
     * Point.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    DescribeMultiRegionAccessPointOperationRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request token associated with the request you want to know about. This
     * request token is returned as part of the response when you make an asynchronous
     * request. You provide this token to query about the status of the asynchronous
     * action.</p>
     */
    inline const Aws::String& GetRequestTokenARN() const { return m_requestTokenARN; }
    inline bool RequestTokenARNHasBeenSet() const { return m_requestTokenARNHasBeenSet; }
    template<typename RequestTokenARNT = Aws::String>
    void SetRequestTokenARN(RequestTokenARNT&& value) { m_requestTokenARNHasBeenSet = true; m_requestTokenARN = std::forward<RequestTokenARNT>(value); }
    template<typename RequestTokenARNT = Aws::String>
    DescribeMultiRegionAccessPointOperationRequest& WithRequestTokenARN(RequestTokenARNT&& value) { SetRequestTokenARN(std::forward<RequestTokenARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_requestTokenARN;
    bool m_requestTokenARNHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
