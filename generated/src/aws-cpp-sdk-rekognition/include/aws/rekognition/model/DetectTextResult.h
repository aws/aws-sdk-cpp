﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/TextDetection.h>
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
  class DetectTextResult
  {
  public:
    AWS_REKOGNITION_API DetectTextResult();
    AWS_REKOGNITION_API DetectTextResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API DetectTextResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of text that was detected in the input image.</p>
     */
    inline const Aws::Vector<TextDetection>& GetTextDetections() const{ return m_textDetections; }
    inline void SetTextDetections(const Aws::Vector<TextDetection>& value) { m_textDetections = value; }
    inline void SetTextDetections(Aws::Vector<TextDetection>&& value) { m_textDetections = std::move(value); }
    inline DetectTextResult& WithTextDetections(const Aws::Vector<TextDetection>& value) { SetTextDetections(value); return *this;}
    inline DetectTextResult& WithTextDetections(Aws::Vector<TextDetection>&& value) { SetTextDetections(std::move(value)); return *this;}
    inline DetectTextResult& AddTextDetections(const TextDetection& value) { m_textDetections.push_back(value); return *this; }
    inline DetectTextResult& AddTextDetections(TextDetection&& value) { m_textDetections.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The model version used to detect text.</p>
     */
    inline const Aws::String& GetTextModelVersion() const{ return m_textModelVersion; }
    inline void SetTextModelVersion(const Aws::String& value) { m_textModelVersion = value; }
    inline void SetTextModelVersion(Aws::String&& value) { m_textModelVersion = std::move(value); }
    inline void SetTextModelVersion(const char* value) { m_textModelVersion.assign(value); }
    inline DetectTextResult& WithTextModelVersion(const Aws::String& value) { SetTextModelVersion(value); return *this;}
    inline DetectTextResult& WithTextModelVersion(Aws::String&& value) { SetTextModelVersion(std::move(value)); return *this;}
    inline DetectTextResult& WithTextModelVersion(const char* value) { SetTextModelVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DetectTextResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DetectTextResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DetectTextResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TextDetection> m_textDetections;

    Aws::String m_textModelVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
