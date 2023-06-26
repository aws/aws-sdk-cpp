/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/DomainConfig.h>
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
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p>Contains the configuration information of the requested domain.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeDomainConfigResponse">AWS
   * API Reference</a></p>
   */
  class DescribeDomainConfigResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API DescribeDomainConfigResult();
    AWS_OPENSEARCHSERVICE_API DescribeDomainConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API DescribeDomainConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Container for the configuration of the OpenSearch Service domain.</p>
     */
    inline const DomainConfig& GetDomainConfig() const{ return m_domainConfig; }

    /**
     * <p>Container for the configuration of the OpenSearch Service domain.</p>
     */
    inline void SetDomainConfig(const DomainConfig& value) { m_domainConfig = value; }

    /**
     * <p>Container for the configuration of the OpenSearch Service domain.</p>
     */
    inline void SetDomainConfig(DomainConfig&& value) { m_domainConfig = std::move(value); }

    /**
     * <p>Container for the configuration of the OpenSearch Service domain.</p>
     */
    inline DescribeDomainConfigResult& WithDomainConfig(const DomainConfig& value) { SetDomainConfig(value); return *this;}

    /**
     * <p>Container for the configuration of the OpenSearch Service domain.</p>
     */
    inline DescribeDomainConfigResult& WithDomainConfig(DomainConfig&& value) { SetDomainConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeDomainConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeDomainConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeDomainConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DomainConfig m_domainConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
