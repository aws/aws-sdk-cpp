/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
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
namespace Rekognition
{
namespace Model
{
  class StartSegmentDetectionResult
  {
  public:
    AWS_REKOGNITION_API StartSegmentDetectionResult();
    AWS_REKOGNITION_API StartSegmentDetectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API StartSegmentDetectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Unique identifier for the segment detection job. The <code>JobId</code> is
     * returned from <code>StartSegmentDetection</code>. </p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>Unique identifier for the segment detection job. The <code>JobId</code> is
     * returned from <code>StartSegmentDetection</code>. </p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>Unique identifier for the segment detection job. The <code>JobId</code> is
     * returned from <code>StartSegmentDetection</code>. </p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>Unique identifier for the segment detection job. The <code>JobId</code> is
     * returned from <code>StartSegmentDetection</code>. </p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>Unique identifier for the segment detection job. The <code>JobId</code> is
     * returned from <code>StartSegmentDetection</code>. </p>
     */
    inline StartSegmentDetectionResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>Unique identifier for the segment detection job. The <code>JobId</code> is
     * returned from <code>StartSegmentDetection</code>. </p>
     */
    inline StartSegmentDetectionResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the segment detection job. The <code>JobId</code> is
     * returned from <code>StartSegmentDetection</code>. </p>
     */
    inline StartSegmentDetectionResult& WithJobId(const char* value) { SetJobId(value); return *this;}

  private:

    Aws::String m_jobId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
