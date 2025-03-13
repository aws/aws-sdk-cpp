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
    AWS_SECURITYHUB_API DisableImportFindingsForProductRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisableImportFindingsForProduct"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the integrated product to disable the integration for.</p>
     */
    inline const Aws::String& GetProductSubscriptionArn() const { return m_productSubscriptionArn; }
    inline bool ProductSubscriptionArnHasBeenSet() const { return m_productSubscriptionArnHasBeenSet; }
    template<typename ProductSubscriptionArnT = Aws::String>
    void SetProductSubscriptionArn(ProductSubscriptionArnT&& value) { m_productSubscriptionArnHasBeenSet = true; m_productSubscriptionArn = std::forward<ProductSubscriptionArnT>(value); }
    template<typename ProductSubscriptionArnT = Aws::String>
    DisableImportFindingsForProductRequest& WithProductSubscriptionArn(ProductSubscriptionArnT&& value) { SetProductSubscriptionArn(std::forward<ProductSubscriptionArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_productSubscriptionArn;
    bool m_productSubscriptionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
