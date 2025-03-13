/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/RecordDetail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/RecordOutput.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class DescribeRecordResult
  {
  public:
    AWS_SERVICECATALOG_API DescribeRecordResult() = default;
    AWS_SERVICECATALOG_API DescribeRecordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API DescribeRecordResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the product.</p>
     */
    inline const RecordDetail& GetRecordDetail() const { return m_recordDetail; }
    template<typename RecordDetailT = RecordDetail>
    void SetRecordDetail(RecordDetailT&& value) { m_recordDetailHasBeenSet = true; m_recordDetail = std::forward<RecordDetailT>(value); }
    template<typename RecordDetailT = RecordDetail>
    DescribeRecordResult& WithRecordDetail(RecordDetailT&& value) { SetRecordDetail(std::forward<RecordDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the product created as the result of a request. For
     * example, the output for a CloudFormation-backed product that creates an S3
     * bucket would include the S3 bucket URL.</p>
     */
    inline const Aws::Vector<RecordOutput>& GetRecordOutputs() const { return m_recordOutputs; }
    template<typename RecordOutputsT = Aws::Vector<RecordOutput>>
    void SetRecordOutputs(RecordOutputsT&& value) { m_recordOutputsHasBeenSet = true; m_recordOutputs = std::forward<RecordOutputsT>(value); }
    template<typename RecordOutputsT = Aws::Vector<RecordOutput>>
    DescribeRecordResult& WithRecordOutputs(RecordOutputsT&& value) { SetRecordOutputs(std::forward<RecordOutputsT>(value)); return *this;}
    template<typename RecordOutputsT = RecordOutput>
    DescribeRecordResult& AddRecordOutputs(RecordOutputsT&& value) { m_recordOutputsHasBeenSet = true; m_recordOutputs.emplace_back(std::forward<RecordOutputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    DescribeRecordResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRecordResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RecordDetail m_recordDetail;
    bool m_recordDetailHasBeenSet = false;

    Aws::Vector<RecordOutput> m_recordOutputs;
    bool m_recordOutputsHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
