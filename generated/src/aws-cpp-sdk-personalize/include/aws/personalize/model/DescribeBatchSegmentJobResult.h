/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/BatchSegmentJob.h>
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
  class DescribeBatchSegmentJobResult
  {
  public:
    AWS_PERSONALIZE_API DescribeBatchSegmentJobResult();
    AWS_PERSONALIZE_API DescribeBatchSegmentJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeBatchSegmentJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information on the specified batch segment job.</p>
     */
    inline const BatchSegmentJob& GetBatchSegmentJob() const{ return m_batchSegmentJob; }

    /**
     * <p>Information on the specified batch segment job.</p>
     */
    inline void SetBatchSegmentJob(const BatchSegmentJob& value) { m_batchSegmentJob = value; }

    /**
     * <p>Information on the specified batch segment job.</p>
     */
    inline void SetBatchSegmentJob(BatchSegmentJob&& value) { m_batchSegmentJob = std::move(value); }

    /**
     * <p>Information on the specified batch segment job.</p>
     */
    inline DescribeBatchSegmentJobResult& WithBatchSegmentJob(const BatchSegmentJob& value) { SetBatchSegmentJob(value); return *this;}

    /**
     * <p>Information on the specified batch segment job.</p>
     */
    inline DescribeBatchSegmentJobResult& WithBatchSegmentJob(BatchSegmentJob&& value) { SetBatchSegmentJob(std::move(value)); return *this;}

  private:

    BatchSegmentJob m_batchSegmentJob;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
