/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/timestream-write/model/BatchLoadTaskDescription.h>
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
namespace TimestreamWrite
{
namespace Model
{
  class DescribeBatchLoadTaskResult
  {
  public:
    AWS_TIMESTREAMWRITE_API DescribeBatchLoadTaskResult();
    AWS_TIMESTREAMWRITE_API DescribeBatchLoadTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMWRITE_API DescribeBatchLoadTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Description of the batch load task.</p>
     */
    inline const BatchLoadTaskDescription& GetBatchLoadTaskDescription() const{ return m_batchLoadTaskDescription; }

    /**
     * <p>Description of the batch load task.</p>
     */
    inline void SetBatchLoadTaskDescription(const BatchLoadTaskDescription& value) { m_batchLoadTaskDescription = value; }

    /**
     * <p>Description of the batch load task.</p>
     */
    inline void SetBatchLoadTaskDescription(BatchLoadTaskDescription&& value) { m_batchLoadTaskDescription = std::move(value); }

    /**
     * <p>Description of the batch load task.</p>
     */
    inline DescribeBatchLoadTaskResult& WithBatchLoadTaskDescription(const BatchLoadTaskDescription& value) { SetBatchLoadTaskDescription(value); return *this;}

    /**
     * <p>Description of the batch load task.</p>
     */
    inline DescribeBatchLoadTaskResult& WithBatchLoadTaskDescription(BatchLoadTaskDescription&& value) { SetBatchLoadTaskDescription(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeBatchLoadTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeBatchLoadTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeBatchLoadTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    BatchLoadTaskDescription m_batchLoadTaskDescription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
