/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/CompatibleVersionsMap.h>
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
   * <p>Container for the response returned by the <code>GetCompatibleVersions</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/GetCompatibleVersionsResponse">AWS
   * API Reference</a></p>
   */
  class GetCompatibleVersionsResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API GetCompatibleVersionsResult() = default;
    AWS_OPENSEARCHSERVICE_API GetCompatibleVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API GetCompatibleVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A map of OpenSearch or Elasticsearch versions and the versions you can
     * upgrade them to.</p>
     */
    inline const Aws::Vector<CompatibleVersionsMap>& GetCompatibleVersions() const { return m_compatibleVersions; }
    template<typename CompatibleVersionsT = Aws::Vector<CompatibleVersionsMap>>
    void SetCompatibleVersions(CompatibleVersionsT&& value) { m_compatibleVersionsHasBeenSet = true; m_compatibleVersions = std::forward<CompatibleVersionsT>(value); }
    template<typename CompatibleVersionsT = Aws::Vector<CompatibleVersionsMap>>
    GetCompatibleVersionsResult& WithCompatibleVersions(CompatibleVersionsT&& value) { SetCompatibleVersions(std::forward<CompatibleVersionsT>(value)); return *this;}
    template<typename CompatibleVersionsT = CompatibleVersionsMap>
    GetCompatibleVersionsResult& AddCompatibleVersions(CompatibleVersionsT&& value) { m_compatibleVersionsHasBeenSet = true; m_compatibleVersions.emplace_back(std::forward<CompatibleVersionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCompatibleVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CompatibleVersionsMap> m_compatibleVersions;
    bool m_compatibleVersionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
