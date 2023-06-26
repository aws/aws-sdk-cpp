/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/ChangeProgressStatusDetails.h>
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
   * <p>The result of a <code>DescribeDomainChangeProgress</code> request. Contains
   * progress information for the requested domain change.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeDomainChangeProgressResponse">AWS
   * API Reference</a></p>
   */
  class DescribeDomainChangeProgressResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API DescribeDomainChangeProgressResult();
    AWS_OPENSEARCHSERVICE_API DescribeDomainChangeProgressResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API DescribeDomainChangeProgressResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Container for information about the stages of a configuration change
     * happening on a domain.</p>
     */
    inline const ChangeProgressStatusDetails& GetChangeProgressStatus() const{ return m_changeProgressStatus; }

    /**
     * <p>Container for information about the stages of a configuration change
     * happening on a domain.</p>
     */
    inline void SetChangeProgressStatus(const ChangeProgressStatusDetails& value) { m_changeProgressStatus = value; }

    /**
     * <p>Container for information about the stages of a configuration change
     * happening on a domain.</p>
     */
    inline void SetChangeProgressStatus(ChangeProgressStatusDetails&& value) { m_changeProgressStatus = std::move(value); }

    /**
     * <p>Container for information about the stages of a configuration change
     * happening on a domain.</p>
     */
    inline DescribeDomainChangeProgressResult& WithChangeProgressStatus(const ChangeProgressStatusDetails& value) { SetChangeProgressStatus(value); return *this;}

    /**
     * <p>Container for information about the stages of a configuration change
     * happening on a domain.</p>
     */
    inline DescribeDomainChangeProgressResult& WithChangeProgressStatus(ChangeProgressStatusDetails&& value) { SetChangeProgressStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeDomainChangeProgressResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeDomainChangeProgressResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeDomainChangeProgressResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ChangeProgressStatusDetails m_changeProgressStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
