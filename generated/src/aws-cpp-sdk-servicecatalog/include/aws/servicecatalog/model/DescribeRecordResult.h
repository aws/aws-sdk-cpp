﻿/**
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
    AWS_SERVICECATALOG_API DescribeRecordResult();
    AWS_SERVICECATALOG_API DescribeRecordResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API DescribeRecordResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the product.</p>
     */
    inline const RecordDetail& GetRecordDetail() const{ return m_recordDetail; }
    inline void SetRecordDetail(const RecordDetail& value) { m_recordDetail = value; }
    inline void SetRecordDetail(RecordDetail&& value) { m_recordDetail = std::move(value); }
    inline DescribeRecordResult& WithRecordDetail(const RecordDetail& value) { SetRecordDetail(value); return *this;}
    inline DescribeRecordResult& WithRecordDetail(RecordDetail&& value) { SetRecordDetail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the product created as the result of a request. For
     * example, the output for a CloudFormation-backed product that creates an S3
     * bucket would include the S3 bucket URL.</p>
     */
    inline const Aws::Vector<RecordOutput>& GetRecordOutputs() const{ return m_recordOutputs; }
    inline void SetRecordOutputs(const Aws::Vector<RecordOutput>& value) { m_recordOutputs = value; }
    inline void SetRecordOutputs(Aws::Vector<RecordOutput>&& value) { m_recordOutputs = std::move(value); }
    inline DescribeRecordResult& WithRecordOutputs(const Aws::Vector<RecordOutput>& value) { SetRecordOutputs(value); return *this;}
    inline DescribeRecordResult& WithRecordOutputs(Aws::Vector<RecordOutput>&& value) { SetRecordOutputs(std::move(value)); return *this;}
    inline DescribeRecordResult& AddRecordOutputs(const RecordOutput& value) { m_recordOutputs.push_back(value); return *this; }
    inline DescribeRecordResult& AddRecordOutputs(RecordOutput&& value) { m_recordOutputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline DescribeRecordResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline DescribeRecordResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline DescribeRecordResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeRecordResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeRecordResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeRecordResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    RecordDetail m_recordDetail;

    Aws::Vector<RecordOutput> m_recordOutputs;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
