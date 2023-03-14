/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/DomainStatus.h>
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
   * <p>Contains the status of the specified domains or all domains owned by the
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeDomainsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeDomainsResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API DescribeDomainsResult();
    AWS_OPENSEARCHSERVICE_API DescribeDomainsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API DescribeDomainsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the requested domains.</p>
     */
    inline const Aws::Vector<DomainStatus>& GetDomainStatusList() const{ return m_domainStatusList; }

    /**
     * <p>The status of the requested domains.</p>
     */
    inline void SetDomainStatusList(const Aws::Vector<DomainStatus>& value) { m_domainStatusList = value; }

    /**
     * <p>The status of the requested domains.</p>
     */
    inline void SetDomainStatusList(Aws::Vector<DomainStatus>&& value) { m_domainStatusList = std::move(value); }

    /**
     * <p>The status of the requested domains.</p>
     */
    inline DescribeDomainsResult& WithDomainStatusList(const Aws::Vector<DomainStatus>& value) { SetDomainStatusList(value); return *this;}

    /**
     * <p>The status of the requested domains.</p>
     */
    inline DescribeDomainsResult& WithDomainStatusList(Aws::Vector<DomainStatus>&& value) { SetDomainStatusList(std::move(value)); return *this;}

    /**
     * <p>The status of the requested domains.</p>
     */
    inline DescribeDomainsResult& AddDomainStatusList(const DomainStatus& value) { m_domainStatusList.push_back(value); return *this; }

    /**
     * <p>The status of the requested domains.</p>
     */
    inline DescribeDomainsResult& AddDomainStatusList(DomainStatus&& value) { m_domainStatusList.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeDomainsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeDomainsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeDomainsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DomainStatus> m_domainStatusList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
