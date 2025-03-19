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
  class EnableImportFindingsForProductRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API EnableImportFindingsForProductRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableImportFindingsForProduct"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the product to enable the integration for.</p>
     */
    inline const Aws::String& GetProductArn() const { return m_productArn; }
    inline bool ProductArnHasBeenSet() const { return m_productArnHasBeenSet; }
    template<typename ProductArnT = Aws::String>
    void SetProductArn(ProductArnT&& value) { m_productArnHasBeenSet = true; m_productArn = std::forward<ProductArnT>(value); }
    template<typename ProductArnT = Aws::String>
    EnableImportFindingsForProductRequest& WithProductArn(ProductArnT&& value) { SetProductArn(std::forward<ProductArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_productArn;
    bool m_productArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
