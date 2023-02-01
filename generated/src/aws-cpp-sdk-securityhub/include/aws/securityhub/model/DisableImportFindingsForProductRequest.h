/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class DisableImportFindingsForProductRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API DisableImportFindingsForProductRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisableImportFindingsForProduct"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the integrated product to disable the integration for.</p>
     */
    inline const Aws::String& GetProductSubscriptionArn() const{ return m_productSubscriptionArn; }

    /**
     * <p>The ARN of the integrated product to disable the integration for.</p>
     */
    inline bool ProductSubscriptionArnHasBeenSet() const { return m_productSubscriptionArnHasBeenSet; }

    /**
     * <p>The ARN of the integrated product to disable the integration for.</p>
     */
    inline void SetProductSubscriptionArn(const Aws::String& value) { m_productSubscriptionArnHasBeenSet = true; m_productSubscriptionArn = value; }

    /**
     * <p>The ARN of the integrated product to disable the integration for.</p>
     */
    inline void SetProductSubscriptionArn(Aws::String&& value) { m_productSubscriptionArnHasBeenSet = true; m_productSubscriptionArn = std::move(value); }

    /**
     * <p>The ARN of the integrated product to disable the integration for.</p>
     */
    inline void SetProductSubscriptionArn(const char* value) { m_productSubscriptionArnHasBeenSet = true; m_productSubscriptionArn.assign(value); }

    /**
     * <p>The ARN of the integrated product to disable the integration for.</p>
     */
    inline DisableImportFindingsForProductRequest& WithProductSubscriptionArn(const Aws::String& value) { SetProductSubscriptionArn(value); return *this;}

    /**
     * <p>The ARN of the integrated product to disable the integration for.</p>
     */
    inline DisableImportFindingsForProductRequest& WithProductSubscriptionArn(Aws::String&& value) { SetProductSubscriptionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the integrated product to disable the integration for.</p>
     */
    inline DisableImportFindingsForProductRequest& WithProductSubscriptionArn(const char* value) { SetProductSubscriptionArn(value); return *this;}

  private:

    Aws::String m_productSubscriptionArn;
    bool m_productSubscriptionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
