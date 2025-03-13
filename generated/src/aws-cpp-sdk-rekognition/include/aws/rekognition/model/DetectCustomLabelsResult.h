/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/CustomLabel.h>
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
  class DetectCustomLabelsResult
  {
  public:
    AWS_REKOGNITION_API DetectCustomLabelsResult() = default;
    AWS_REKOGNITION_API DetectCustomLabelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API DetectCustomLabelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of custom labels detected in the input image.</p>
     */
    inline const Aws::Vector<CustomLabel>& GetCustomLabels() const { return m_customLabels; }
    template<typename CustomLabelsT = Aws::Vector<CustomLabel>>
    void SetCustomLabels(CustomLabelsT&& value) { m_customLabelsHasBeenSet = true; m_customLabels = std::forward<CustomLabelsT>(value); }
    template<typename CustomLabelsT = Aws::Vector<CustomLabel>>
    DetectCustomLabelsResult& WithCustomLabels(CustomLabelsT&& value) { SetCustomLabels(std::forward<CustomLabelsT>(value)); return *this;}
    template<typename CustomLabelsT = CustomLabel>
    DetectCustomLabelsResult& AddCustomLabels(CustomLabelsT&& value) { m_customLabelsHasBeenSet = true; m_customLabels.emplace_back(std::forward<CustomLabelsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DetectCustomLabelsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CustomLabel> m_customLabels;
    bool m_customLabelsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
