/**
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
    AWS_REKOGNITION_API DetectTextResult() = default;
    AWS_REKOGNITION_API DetectTextResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API DetectTextResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of text that was detected in the input image.</p>
     */
    inline const Aws::Vector<TextDetection>& GetTextDetections() const { return m_textDetections; }
    template<typename TextDetectionsT = Aws::Vector<TextDetection>>
    void SetTextDetections(TextDetectionsT&& value) { m_textDetectionsHasBeenSet = true; m_textDetections = std::forward<TextDetectionsT>(value); }
    template<typename TextDetectionsT = Aws::Vector<TextDetection>>
    DetectTextResult& WithTextDetections(TextDetectionsT&& value) { SetTextDetections(std::forward<TextDetectionsT>(value)); return *this;}
    template<typename TextDetectionsT = TextDetection>
    DetectTextResult& AddTextDetections(TextDetectionsT&& value) { m_textDetectionsHasBeenSet = true; m_textDetections.emplace_back(std::forward<TextDetectionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The model version used to detect text.</p>
     */
    inline const Aws::String& GetTextModelVersion() const { return m_textModelVersion; }
    template<typename TextModelVersionT = Aws::String>
    void SetTextModelVersion(TextModelVersionT&& value) { m_textModelVersionHasBeenSet = true; m_textModelVersion = std::forward<TextModelVersionT>(value); }
    template<typename TextModelVersionT = Aws::String>
    DetectTextResult& WithTextModelVersion(TextModelVersionT&& value) { SetTextModelVersion(std::forward<TextModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DetectTextResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TextDetection> m_textDetections;
    bool m_textDetectionsHasBeenSet = false;

    Aws::String m_textModelVersion;
    bool m_textModelVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
