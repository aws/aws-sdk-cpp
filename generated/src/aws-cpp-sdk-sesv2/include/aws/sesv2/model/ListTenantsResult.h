/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/TenantInfo.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>Information about tenants associated with your account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListTenantsResponse">AWS
   * API Reference</a></p>
   */
  class ListTenantsResult
  {
  public:
    AWS_SESV2_API ListTenantsResult() = default;
    AWS_SESV2_API ListTenantsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API ListTenantsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array that contains basic information about each tenant.</p>
     */
    inline const Aws::Vector<TenantInfo>& GetTenants() const { return m_tenants; }
    template<typename TenantsT = Aws::Vector<TenantInfo>>
    void SetTenants(TenantsT&& value) { m_tenantsHasBeenSet = true; m_tenants = std::forward<TenantsT>(value); }
    template<typename TenantsT = Aws::Vector<TenantInfo>>
    ListTenantsResult& WithTenants(TenantsT&& value) { SetTenants(std::forward<TenantsT>(value)); return *this;}
    template<typename TenantsT = TenantInfo>
    ListTenantsResult& AddTenants(TenantsT&& value) { m_tenantsHasBeenSet = true; m_tenants.emplace_back(std::forward<TenantsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates that there are additional tenants to list. To view
     * additional tenants, issue another request to <code>ListTenants</code>, and pass
     * this token in the <code>NextToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTenantsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTenantsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TenantInfo> m_tenants;
    bool m_tenantsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
