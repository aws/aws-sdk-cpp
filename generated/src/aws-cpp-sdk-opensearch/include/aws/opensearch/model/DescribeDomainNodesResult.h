/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/DomainNodesStatus.h>
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
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p>The result of a <code>DescribeDomainNodes</code> request. Contains
   * information about the nodes on the requested domain. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeDomainNodesResponse">AWS
   * API Reference</a></p>
   */
  class DescribeDomainNodesResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API DescribeDomainNodesResult();
    AWS_OPENSEARCHSERVICE_API DescribeDomainNodesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API DescribeDomainNodesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains nodes information list <code>DomainNodesStatusList</code> with
     * details about the all nodes on the requested domain.</p>
     */
    inline const Aws::Vector<DomainNodesStatus>& GetDomainNodesStatusList() const{ return m_domainNodesStatusList; }

    /**
     * <p>Contains nodes information list <code>DomainNodesStatusList</code> with
     * details about the all nodes on the requested domain.</p>
     */
    inline void SetDomainNodesStatusList(const Aws::Vector<DomainNodesStatus>& value) { m_domainNodesStatusList = value; }

    /**
     * <p>Contains nodes information list <code>DomainNodesStatusList</code> with
     * details about the all nodes on the requested domain.</p>
     */
    inline void SetDomainNodesStatusList(Aws::Vector<DomainNodesStatus>&& value) { m_domainNodesStatusList = std::move(value); }

    /**
     * <p>Contains nodes information list <code>DomainNodesStatusList</code> with
     * details about the all nodes on the requested domain.</p>
     */
    inline DescribeDomainNodesResult& WithDomainNodesStatusList(const Aws::Vector<DomainNodesStatus>& value) { SetDomainNodesStatusList(value); return *this;}

    /**
     * <p>Contains nodes information list <code>DomainNodesStatusList</code> with
     * details about the all nodes on the requested domain.</p>
     */
    inline DescribeDomainNodesResult& WithDomainNodesStatusList(Aws::Vector<DomainNodesStatus>&& value) { SetDomainNodesStatusList(std::move(value)); return *this;}

    /**
     * <p>Contains nodes information list <code>DomainNodesStatusList</code> with
     * details about the all nodes on the requested domain.</p>
     */
    inline DescribeDomainNodesResult& AddDomainNodesStatusList(const DomainNodesStatus& value) { m_domainNodesStatusList.push_back(value); return *this; }

    /**
     * <p>Contains nodes information list <code>DomainNodesStatusList</code> with
     * details about the all nodes on the requested domain.</p>
     */
    inline DescribeDomainNodesResult& AddDomainNodesStatusList(DomainNodesStatus&& value) { m_domainNodesStatusList.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeDomainNodesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeDomainNodesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeDomainNodesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DomainNodesStatus> m_domainNodesStatusList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
