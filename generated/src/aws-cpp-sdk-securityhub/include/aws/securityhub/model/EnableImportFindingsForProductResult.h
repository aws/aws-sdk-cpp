/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{
  class EnableImportFindingsForProductResult
  {
  public:
    AWS_SECURITYHUB_API EnableImportFindingsForProductResult() = default;
    AWS_SECURITYHUB_API EnableImportFindingsForProductResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API EnableImportFindingsForProductResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of your subscription to the product to enable integrations for.</p>
     */
    inline const Aws::String& GetProductSubscriptionArn() const { return m_productSubscriptionArn; }
    template<typename ProductSubscriptionArnT = Aws::String>
    void SetProductSubscriptionArn(ProductSubscriptionArnT&& value) { m_productSubscriptionArnHasBeenSet = true; m_productSubscriptionArn = std::forward<ProductSubscriptionArnT>(value); }
    template<typename ProductSubscriptionArnT = Aws::String>
    EnableImportFindingsForProductResult& WithProductSubscriptionArn(ProductSubscriptionArnT&& value) { SetProductSubscriptionArn(std::forward<ProductSubscriptionArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    EnableImportFindingsForProductResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_productSubscriptionArn;
    bool m_productSubscriptionArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
