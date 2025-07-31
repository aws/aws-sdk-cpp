/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/ResourceTenantMetadata.h>
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
   * <p>Information about tenants associated with a specific resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListResourceTenantsResponse">AWS
   * API Reference</a></p>
   */
  class ListResourceTenantsResult
  {
  public:
    AWS_SESV2_API ListResourceTenantsResult() = default;
    AWS_SESV2_API ListResourceTenantsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API ListResourceTenantsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array that contains information about each tenant associated with the
     * resource.</p>
     */
    inline const Aws::Vector<ResourceTenantMetadata>& GetResourceTenants() const { return m_resourceTenants; }
    template<typename ResourceTenantsT = Aws::Vector<ResourceTenantMetadata>>
    void SetResourceTenants(ResourceTenantsT&& value) { m_resourceTenantsHasBeenSet = true; m_resourceTenants = std::forward<ResourceTenantsT>(value); }
    template<typename ResourceTenantsT = Aws::Vector<ResourceTenantMetadata>>
    ListResourceTenantsResult& WithResourceTenants(ResourceTenantsT&& value) { SetResourceTenants(std::forward<ResourceTenantsT>(value)); return *this;}
    template<typename ResourceTenantsT = ResourceTenantMetadata>
    ListResourceTenantsResult& AddResourceTenants(ResourceTenantsT&& value) { m_resourceTenantsHasBeenSet = true; m_resourceTenants.emplace_back(std::forward<ResourceTenantsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates that there are additional tenants to list. To view
     * additional tenants, issue another request to <code>ListResourceTenants</code>,
     * and pass this token in the <code>NextToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResourceTenantsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResourceTenantsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceTenantMetadata> m_resourceTenants;
    bool m_resourceTenantsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
