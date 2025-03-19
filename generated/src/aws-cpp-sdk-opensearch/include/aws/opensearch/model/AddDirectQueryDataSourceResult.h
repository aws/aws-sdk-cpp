/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
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
  class AddDirectQueryDataSourceResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API AddDirectQueryDataSourceResult() = default;
    AWS_OPENSEARCHSERVICE_API AddDirectQueryDataSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API AddDirectQueryDataSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The unique, system-generated identifier that represents the data source.
     * </p>
     */
    inline const Aws::String& GetDataSourceArn() const { return m_dataSourceArn; }
    template<typename DataSourceArnT = Aws::String>
    void SetDataSourceArn(DataSourceArnT&& value) { m_dataSourceArnHasBeenSet = true; m_dataSourceArn = std::forward<DataSourceArnT>(value); }
    template<typename DataSourceArnT = Aws::String>
    AddDirectQueryDataSourceResult& WithDataSourceArn(DataSourceArnT&& value) { SetDataSourceArn(std::forward<DataSourceArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AddDirectQueryDataSourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataSourceArn;
    bool m_dataSourceArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
