/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-entitlement/MarketplaceEntitlementService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-entitlement/model/Entitlement.h>
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
namespace MarketplaceEntitlementService
{
namespace Model
{
  /**
   * <p>The GetEntitlementsRequest contains results from the GetEntitlements
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entitlement.marketplace-2017-01-11/GetEntitlementsResult">AWS
   * API Reference</a></p>
   */
  class GetEntitlementsResult
  {
  public:
    AWS_MARKETPLACEENTITLEMENTSERVICE_API GetEntitlementsResult() = default;
    AWS_MARKETPLACEENTITLEMENTSERVICE_API GetEntitlementsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MARKETPLACEENTITLEMENTSERVICE_API GetEntitlementsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The set of entitlements found through the GetEntitlements operation. If the
     * result contains an empty set of entitlements, NextToken might still be present
     * and should be used.</p>
     */
    inline const Aws::Vector<Entitlement>& GetEntitlements() const { return m_entitlements; }
    template<typename EntitlementsT = Aws::Vector<Entitlement>>
    void SetEntitlements(EntitlementsT&& value) { m_entitlementsHasBeenSet = true; m_entitlements = std::forward<EntitlementsT>(value); }
    template<typename EntitlementsT = Aws::Vector<Entitlement>>
    GetEntitlementsResult& WithEntitlements(EntitlementsT&& value) { SetEntitlements(std::forward<EntitlementsT>(value)); return *this;}
    template<typename EntitlementsT = Entitlement>
    GetEntitlementsResult& AddEntitlements(EntitlementsT&& value) { m_entitlementsHasBeenSet = true; m_entitlements.emplace_back(std::forward<EntitlementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>For paginated results, use NextToken in subsequent calls to GetEntitlements.
     * If the result contains an empty set of entitlements, NextToken might still be
     * present and should be used.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetEntitlementsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEntitlementsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Entitlement> m_entitlements;
    bool m_entitlementsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceEntitlementService
} // namespace Aws
