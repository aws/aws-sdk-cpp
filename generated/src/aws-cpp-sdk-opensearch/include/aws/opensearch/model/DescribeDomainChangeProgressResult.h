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
    AWS_OPENSEARCHSERVICE_API DescribeDomainChangeProgressResult() = default;
    AWS_OPENSEARCHSERVICE_API DescribeDomainChangeProgressResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API DescribeDomainChangeProgressResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Container for information about the stages of a configuration change
     * happening on a domain.</p>
     */
    inline const ChangeProgressStatusDetails& GetChangeProgressStatus() const { return m_changeProgressStatus; }
    template<typename ChangeProgressStatusT = ChangeProgressStatusDetails>
    void SetChangeProgressStatus(ChangeProgressStatusT&& value) { m_changeProgressStatusHasBeenSet = true; m_changeProgressStatus = std::forward<ChangeProgressStatusT>(value); }
    template<typename ChangeProgressStatusT = ChangeProgressStatusDetails>
    DescribeDomainChangeProgressResult& WithChangeProgressStatus(ChangeProgressStatusT&& value) { SetChangeProgressStatus(std::forward<ChangeProgressStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDomainChangeProgressResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ChangeProgressStatusDetails m_changeProgressStatus;
    bool m_changeProgressStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
