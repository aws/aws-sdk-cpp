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
  class GetAccessGrantRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API GetAccessGrantRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAccessGrant"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    AWS_S3CONTROL_API inline bool ShouldComputeContentMd5() const override { return true; }

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline GetAccessGrantRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline GetAccessGrantRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline GetAccessGrantRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The ID of the access grant. S3 Access Grants auto-generates this ID when you
     * create the access grant.</p>
     */
    inline const Aws::String& GetAccessGrantId() const{ return m_accessGrantId; }

    /**
     * <p>The ID of the access grant. S3 Access Grants auto-generates this ID when you
     * create the access grant.</p>
     */
    inline bool AccessGrantIdHasBeenSet() const { return m_accessGrantIdHasBeenSet; }

    /**
     * <p>The ID of the access grant. S3 Access Grants auto-generates this ID when you
     * create the access grant.</p>
     */
    inline void SetAccessGrantId(const Aws::String& value) { m_accessGrantIdHasBeenSet = true; m_accessGrantId = value; }

    /**
     * <p>The ID of the access grant. S3 Access Grants auto-generates this ID when you
     * create the access grant.</p>
     */
    inline void SetAccessGrantId(Aws::String&& value) { m_accessGrantIdHasBeenSet = true; m_accessGrantId = std::move(value); }

    /**
     * <p>The ID of the access grant. S3 Access Grants auto-generates this ID when you
     * create the access grant.</p>
     */
    inline void SetAccessGrantId(const char* value) { m_accessGrantIdHasBeenSet = true; m_accessGrantId.assign(value); }

    /**
     * <p>The ID of the access grant. S3 Access Grants auto-generates this ID when you
     * create the access grant.</p>
     */
    inline GetAccessGrantRequest& WithAccessGrantId(const Aws::String& value) { SetAccessGrantId(value); return *this;}

    /**
     * <p>The ID of the access grant. S3 Access Grants auto-generates this ID when you
     * create the access grant.</p>
     */
    inline GetAccessGrantRequest& WithAccessGrantId(Aws::String&& value) { SetAccessGrantId(std::move(value)); return *this;}

    /**
     * <p>The ID of the access grant. S3 Access Grants auto-generates this ID when you
     * create the access grant.</p>
     */
    inline GetAccessGrantRequest& WithAccessGrantId(const char* value) { SetAccessGrantId(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_accessGrantId;
    bool m_accessGrantIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
