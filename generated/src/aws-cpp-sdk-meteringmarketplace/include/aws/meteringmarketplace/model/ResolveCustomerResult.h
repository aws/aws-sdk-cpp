/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/meteringmarketplace/MarketplaceMetering_EXPORTS.h>
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
namespace MarketplaceMetering
{
namespace Model
{
  /**
   * <p>The result of the <code>ResolveCustomer</code> operation. Contains the
   * <code>CustomerIdentifier</code> along with the <code>CustomerAWSAccountId</code>
   * and <code>ProductCode</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/ResolveCustomerResult">AWS
   * API Reference</a></p>
   */
  class ResolveCustomerResult
  {
  public:
    AWS_MARKETPLACEMETERING_API ResolveCustomerResult() = default;
    AWS_MARKETPLACEMETERING_API ResolveCustomerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MARKETPLACEMETERING_API ResolveCustomerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>CustomerIdentifier</code> is used to identify an individual
     * customer in your application. Calls to <code>BatchMeterUsage</code> require
     * <code>CustomerIdentifiers</code> for each <code>UsageRecord</code>.</p>
     */
    inline const Aws::String& GetCustomerIdentifier() const { return m_customerIdentifier; }
    template<typename CustomerIdentifierT = Aws::String>
    void SetCustomerIdentifier(CustomerIdentifierT&& value) { m_customerIdentifierHasBeenSet = true; m_customerIdentifier = std::forward<CustomerIdentifierT>(value); }
    template<typename CustomerIdentifierT = Aws::String>
    ResolveCustomerResult& WithCustomerIdentifier(CustomerIdentifierT&& value) { SetCustomerIdentifier(std::forward<CustomerIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product code is returned to confirm that the buyer is registering for
     * your product. Subsequent <code>BatchMeterUsage</code> calls should be made using
     * this product code.</p>
     */
    inline const Aws::String& GetProductCode() const { return m_productCode; }
    template<typename ProductCodeT = Aws::String>
    void SetProductCode(ProductCodeT&& value) { m_productCodeHasBeenSet = true; m_productCode = std::forward<ProductCodeT>(value); }
    template<typename ProductCodeT = Aws::String>
    ResolveCustomerResult& WithProductCode(ProductCodeT&& value) { SetProductCode(std::forward<ProductCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>CustomerAWSAccountId</code> provides the Amazon Web Services
     * account ID associated with the <code>CustomerIdentifier</code> for the
     * individual customer.</p>
     */
    inline const Aws::String& GetCustomerAWSAccountId() const { return m_customerAWSAccountId; }
    template<typename CustomerAWSAccountIdT = Aws::String>
    void SetCustomerAWSAccountId(CustomerAWSAccountIdT&& value) { m_customerAWSAccountIdHasBeenSet = true; m_customerAWSAccountId = std::forward<CustomerAWSAccountIdT>(value); }
    template<typename CustomerAWSAccountIdT = Aws::String>
    ResolveCustomerResult& WithCustomerAWSAccountId(CustomerAWSAccountIdT&& value) { SetCustomerAWSAccountId(std::forward<CustomerAWSAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ResolveCustomerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_customerIdentifier;
    bool m_customerIdentifierHasBeenSet = false;

    Aws::String m_productCode;
    bool m_productCodeHasBeenSet = false;

    Aws::String m_customerAWSAccountId;
    bool m_customerAWSAccountIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws
