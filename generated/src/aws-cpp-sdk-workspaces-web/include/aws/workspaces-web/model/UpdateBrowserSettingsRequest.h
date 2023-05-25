/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/WorkSpacesWebRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   */
  class UpdateBrowserSettingsRequest : public WorkSpacesWebRequest
  {
  public:
    AWS_WORKSPACESWEB_API UpdateBrowserSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBrowserSettings"; }

    AWS_WORKSPACESWEB_API Aws::String SerializePayload() const override;


    /**
     * <p>A JSON string containing Chrome Enterprise policies that will be applied to
     * all streaming sessions. </p>
     */
    inline const Aws::String& GetBrowserPolicy() const{ return m_browserPolicy; }

    /**
     * <p>A JSON string containing Chrome Enterprise policies that will be applied to
     * all streaming sessions. </p>
     */
    inline bool BrowserPolicyHasBeenSet() const { return m_browserPolicyHasBeenSet; }

    /**
     * <p>A JSON string containing Chrome Enterprise policies that will be applied to
     * all streaming sessions. </p>
     */
    inline void SetBrowserPolicy(const Aws::String& value) { m_browserPolicyHasBeenSet = true; m_browserPolicy = value; }

    /**
     * <p>A JSON string containing Chrome Enterprise policies that will be applied to
     * all streaming sessions. </p>
     */
    inline void SetBrowserPolicy(Aws::String&& value) { m_browserPolicyHasBeenSet = true; m_browserPolicy = std::move(value); }

    /**
     * <p>A JSON string containing Chrome Enterprise policies that will be applied to
     * all streaming sessions. </p>
     */
    inline void SetBrowserPolicy(const char* value) { m_browserPolicyHasBeenSet = true; m_browserPolicy.assign(value); }

    /**
     * <p>A JSON string containing Chrome Enterprise policies that will be applied to
     * all streaming sessions. </p>
     */
    inline UpdateBrowserSettingsRequest& WithBrowserPolicy(const Aws::String& value) { SetBrowserPolicy(value); return *this;}

    /**
     * <p>A JSON string containing Chrome Enterprise policies that will be applied to
     * all streaming sessions. </p>
     */
    inline UpdateBrowserSettingsRequest& WithBrowserPolicy(Aws::String&& value) { SetBrowserPolicy(std::move(value)); return *this;}

    /**
     * <p>A JSON string containing Chrome Enterprise policies that will be applied to
     * all streaming sessions. </p>
     */
    inline UpdateBrowserSettingsRequest& WithBrowserPolicy(const char* value) { SetBrowserPolicy(value); return *this;}


    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline const Aws::String& GetBrowserSettingsArn() const{ return m_browserSettingsArn; }

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline bool BrowserSettingsArnHasBeenSet() const { return m_browserSettingsArnHasBeenSet; }

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline void SetBrowserSettingsArn(const Aws::String& value) { m_browserSettingsArnHasBeenSet = true; m_browserSettingsArn = value; }

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline void SetBrowserSettingsArn(Aws::String&& value) { m_browserSettingsArnHasBeenSet = true; m_browserSettingsArn = std::move(value); }

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline void SetBrowserSettingsArn(const char* value) { m_browserSettingsArnHasBeenSet = true; m_browserSettingsArn.assign(value); }

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline UpdateBrowserSettingsRequest& WithBrowserSettingsArn(const Aws::String& value) { SetBrowserSettingsArn(value); return *this;}

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline UpdateBrowserSettingsRequest& WithBrowserSettingsArn(Aws::String&& value) { SetBrowserSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline UpdateBrowserSettingsRequest& WithBrowserSettingsArn(const char* value) { SetBrowserSettingsArn(value); return *this;}


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token return the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token return the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token return the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token return the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token return the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token return the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline UpdateBrowserSettingsRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token return the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline UpdateBrowserSettingsRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, subsequent retries with the same client token return the result
     * from the original successful request. </p> <p>If you do not specify a client
     * token, one is automatically generated by the AWS SDK.</p>
     */
    inline UpdateBrowserSettingsRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_browserPolicy;
    bool m_browserPolicyHasBeenSet = false;

    Aws::String m_browserSettingsArn;
    bool m_browserSettingsArnHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
