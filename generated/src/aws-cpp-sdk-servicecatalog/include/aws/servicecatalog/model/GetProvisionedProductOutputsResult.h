﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
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
  class GetProvisionedProductOutputsResult
  {
  public:
    AWS_SERVICECATALOG_API GetProvisionedProductOutputsResult();
    AWS_SERVICECATALOG_API GetProvisionedProductOutputsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API GetProvisionedProductOutputsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the product created as the result of a request. For
     * example, the output for a CloudFormation-backed product that creates an S3
     * bucket would include the S3 bucket URL. </p>
     */
    inline const Aws::Vector<RecordOutput>& GetOutputs() const{ return m_outputs; }
    inline void SetOutputs(const Aws::Vector<RecordOutput>& value) { m_outputs = value; }
    inline void SetOutputs(Aws::Vector<RecordOutput>&& value) { m_outputs = std::move(value); }
    inline GetProvisionedProductOutputsResult& WithOutputs(const Aws::Vector<RecordOutput>& value) { SetOutputs(value); return *this;}
    inline GetProvisionedProductOutputsResult& WithOutputs(Aws::Vector<RecordOutput>&& value) { SetOutputs(std::move(value)); return *this;}
    inline GetProvisionedProductOutputsResult& AddOutputs(const RecordOutput& value) { m_outputs.push_back(value); return *this; }
    inline GetProvisionedProductOutputsResult& AddOutputs(RecordOutput&& value) { m_outputs.push_back(std::move(value)); return *this; }
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
    inline GetProvisionedProductOutputsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline GetProvisionedProductOutputsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline GetProvisionedProductOutputsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetProvisionedProductOutputsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetProvisionedProductOutputsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetProvisionedProductOutputsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<RecordOutput> m_outputs;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
