/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/TenantResource.h>
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
   * <p>Information about resources associated with a specific tenant.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListTenantResourcesResponse">AWS
   * API Reference</a></p>
   */
  class ListTenantResourcesResult
  {
  public:
    AWS_SESV2_API ListTenantResourcesResult() = default;
    AWS_SESV2_API ListTenantResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API ListTenantResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array that contains information about each resource associated with the
     * tenant.</p>
     */
    inline const Aws::Vector<TenantResource>& GetTenantResources() const { return m_tenantResources; }
    template<typename TenantResourcesT = Aws::Vector<TenantResource>>
    void SetTenantResources(TenantResourcesT&& value) { m_tenantResourcesHasBeenSet = true; m_tenantResources = std::forward<TenantResourcesT>(value); }
    template<typename TenantResourcesT = Aws::Vector<TenantResource>>
    ListTenantResourcesResult& WithTenantResources(TenantResourcesT&& value) { SetTenantResources(std::forward<TenantResourcesT>(value)); return *this;}
    template<typename TenantResourcesT = TenantResource>
    ListTenantResourcesResult& AddTenantResources(TenantResourcesT&& value) { m_tenantResourcesHasBeenSet = true; m_tenantResources.emplace_back(std::forward<TenantResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates that there are additional resources to list. To view
     * additional resources, issue another request to <code>ListTenantResources</code>,
     * and pass this token in the <code>NextToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTenantResourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTenantResourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TenantResource> m_tenantResources;
    bool m_tenantResourcesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
