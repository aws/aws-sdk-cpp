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
    AWS_S3CONTROL_API DescribeMultiRegionAccessPointOperationRequest();

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

    /**
     * <p>The Amazon Web Services account ID for the owner of the Multi-Region Access
     * Point.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID for the owner of the Multi-Region Access
     * Point.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID for the owner of the Multi-Region Access
     * Point.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID for the owner of the Multi-Region Access
     * Point.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID for the owner of the Multi-Region Access
     * Point.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID for the owner of the Multi-Region Access
     * Point.</p>
     */
    inline DescribeMultiRegionAccessPointOperationRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID for the owner of the Multi-Region Access
     * Point.</p>
     */
    inline DescribeMultiRegionAccessPointOperationRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID for the owner of the Multi-Region Access
     * Point.</p>
     */
    inline DescribeMultiRegionAccessPointOperationRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The request token associated with the request you want to know about. This
     * request token is returned as part of the response when you make an asynchronous
     * request. You provide this token to query about the status of the asynchronous
     * action.</p>
     */
    inline const Aws::String& GetRequestTokenARN() const{ return m_requestTokenARN; }

    /**
     * <p>The request token associated with the request you want to know about. This
     * request token is returned as part of the response when you make an asynchronous
     * request. You provide this token to query about the status of the asynchronous
     * action.</p>
     */
    inline bool RequestTokenARNHasBeenSet() const { return m_requestTokenARNHasBeenSet; }

    /**
     * <p>The request token associated with the request you want to know about. This
     * request token is returned as part of the response when you make an asynchronous
     * request. You provide this token to query about the status of the asynchronous
     * action.</p>
     */
    inline void SetRequestTokenARN(const Aws::String& value) { m_requestTokenARNHasBeenSet = true; m_requestTokenARN = value; }

    /**
     * <p>The request token associated with the request you want to know about. This
     * request token is returned as part of the response when you make an asynchronous
     * request. You provide this token to query about the status of the asynchronous
     * action.</p>
     */
    inline void SetRequestTokenARN(Aws::String&& value) { m_requestTokenARNHasBeenSet = true; m_requestTokenARN = std::move(value); }

    /**
     * <p>The request token associated with the request you want to know about. This
     * request token is returned as part of the response when you make an asynchronous
     * request. You provide this token to query about the status of the asynchronous
     * action.</p>
     */
    inline void SetRequestTokenARN(const char* value) { m_requestTokenARNHasBeenSet = true; m_requestTokenARN.assign(value); }

    /**
     * <p>The request token associated with the request you want to know about. This
     * request token is returned as part of the response when you make an asynchronous
     * request. You provide this token to query about the status of the asynchronous
     * action.</p>
     */
    inline DescribeMultiRegionAccessPointOperationRequest& WithRequestTokenARN(const Aws::String& value) { SetRequestTokenARN(value); return *this;}

    /**
     * <p>The request token associated with the request you want to know about. This
     * request token is returned as part of the response when you make an asynchronous
     * request. You provide this token to query about the status of the asynchronous
     * action.</p>
     */
    inline DescribeMultiRegionAccessPointOperationRequest& WithRequestTokenARN(Aws::String&& value) { SetRequestTokenARN(std::move(value)); return *this;}

    /**
     * <p>The request token associated with the request you want to know about. This
     * request token is returned as part of the response when you make an asynchronous
     * request. You provide this token to query about the status of the asynchronous
     * action.</p>
     */
    inline DescribeMultiRegionAccessPointOperationRequest& WithRequestTokenARN(const char* value) { SetRequestTokenARN(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_requestTokenARN;
    bool m_requestTokenARNHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
