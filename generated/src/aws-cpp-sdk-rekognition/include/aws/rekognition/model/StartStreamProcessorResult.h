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
  class StartStreamProcessorResult
  {
  public:
    AWS_REKOGNITION_API StartStreamProcessorResult();
    AWS_REKOGNITION_API StartStreamProcessorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API StartStreamProcessorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A unique identifier for the stream processing session. </p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p> A unique identifier for the stream processing session. </p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }

    /**
     * <p> A unique identifier for the stream processing session. </p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }

    /**
     * <p> A unique identifier for the stream processing session. </p>
     */
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }

    /**
     * <p> A unique identifier for the stream processing session. </p>
     */
    inline StartStreamProcessorResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p> A unique identifier for the stream processing session. </p>
     */
    inline StartStreamProcessorResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p> A unique identifier for the stream processing session. </p>
     */
    inline StartStreamProcessorResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}

  private:

    Aws::String m_sessionId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
