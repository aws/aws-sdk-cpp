/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/UnprocessedTraceSegment.h>
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
namespace XRay
{
namespace Model
{
  class PutTraceSegmentsResult
  {
  public:
    AWS_XRAY_API PutTraceSegmentsResult();
    AWS_XRAY_API PutTraceSegmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API PutTraceSegmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Segments that failed processing.</p>
     */
    inline const Aws::Vector<UnprocessedTraceSegment>& GetUnprocessedTraceSegments() const{ return m_unprocessedTraceSegments; }

    /**
     * <p>Segments that failed processing.</p>
     */
    inline void SetUnprocessedTraceSegments(const Aws::Vector<UnprocessedTraceSegment>& value) { m_unprocessedTraceSegments = value; }

    /**
     * <p>Segments that failed processing.</p>
     */
    inline void SetUnprocessedTraceSegments(Aws::Vector<UnprocessedTraceSegment>&& value) { m_unprocessedTraceSegments = std::move(value); }

    /**
     * <p>Segments that failed processing.</p>
     */
    inline PutTraceSegmentsResult& WithUnprocessedTraceSegments(const Aws::Vector<UnprocessedTraceSegment>& value) { SetUnprocessedTraceSegments(value); return *this;}

    /**
     * <p>Segments that failed processing.</p>
     */
    inline PutTraceSegmentsResult& WithUnprocessedTraceSegments(Aws::Vector<UnprocessedTraceSegment>&& value) { SetUnprocessedTraceSegments(std::move(value)); return *this;}

    /**
     * <p>Segments that failed processing.</p>
     */
    inline PutTraceSegmentsResult& AddUnprocessedTraceSegments(const UnprocessedTraceSegment& value) { m_unprocessedTraceSegments.push_back(value); return *this; }

    /**
     * <p>Segments that failed processing.</p>
     */
    inline PutTraceSegmentsResult& AddUnprocessedTraceSegments(UnprocessedTraceSegment&& value) { m_unprocessedTraceSegments.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<UnprocessedTraceSegment> m_unprocessedTraceSegments;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
