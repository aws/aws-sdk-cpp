/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/BatchInferenceJob.h>
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
namespace Personalize
{
namespace Model
{
  class DescribeBatchInferenceJobResult
  {
  public:
    AWS_PERSONALIZE_API DescribeBatchInferenceJobResult();
    AWS_PERSONALIZE_API DescribeBatchInferenceJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeBatchInferenceJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information on the specified batch inference job.</p>
     */
    inline const BatchInferenceJob& GetBatchInferenceJob() const{ return m_batchInferenceJob; }

    /**
     * <p>Information on the specified batch inference job.</p>
     */
    inline void SetBatchInferenceJob(const BatchInferenceJob& value) { m_batchInferenceJob = value; }

    /**
     * <p>Information on the specified batch inference job.</p>
     */
    inline void SetBatchInferenceJob(BatchInferenceJob&& value) { m_batchInferenceJob = std::move(value); }

    /**
     * <p>Information on the specified batch inference job.</p>
     */
    inline DescribeBatchInferenceJobResult& WithBatchInferenceJob(const BatchInferenceJob& value) { SetBatchInferenceJob(value); return *this;}

    /**
     * <p>Information on the specified batch inference job.</p>
     */
    inline DescribeBatchInferenceJobResult& WithBatchInferenceJob(BatchInferenceJob&& value) { SetBatchInferenceJob(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeBatchInferenceJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeBatchInferenceJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeBatchInferenceJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    BatchInferenceJob m_batchInferenceJob;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
