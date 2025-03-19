/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/HumanLoopActivationOutput.h>
#include <aws/rekognition/model/ModerationLabel.h>
#include <aws/rekognition/model/ContentType.h>
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
  class DetectModerationLabelsResult
  {
  public:
    AWS_REKOGNITION_API DetectModerationLabelsResult() = default;
    AWS_REKOGNITION_API DetectModerationLabelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API DetectModerationLabelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Array of detected Moderation labels. For video operations, this includes the
     * time, in milliseconds from the start of the video, they were detected.</p>
     */
    inline const Aws::Vector<ModerationLabel>& GetModerationLabels() const { return m_moderationLabels; }
    template<typename ModerationLabelsT = Aws::Vector<ModerationLabel>>
    void SetModerationLabels(ModerationLabelsT&& value) { m_moderationLabelsHasBeenSet = true; m_moderationLabels = std::forward<ModerationLabelsT>(value); }
    template<typename ModerationLabelsT = Aws::Vector<ModerationLabel>>
    DetectModerationLabelsResult& WithModerationLabels(ModerationLabelsT&& value) { SetModerationLabels(std::forward<ModerationLabelsT>(value)); return *this;}
    template<typename ModerationLabelsT = ModerationLabel>
    DetectModerationLabelsResult& AddModerationLabels(ModerationLabelsT&& value) { m_moderationLabelsHasBeenSet = true; m_moderationLabels.emplace_back(std::forward<ModerationLabelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Version number of the base moderation detection model that was used to detect
     * unsafe content.</p>
     */
    inline const Aws::String& GetModerationModelVersion() const { return m_moderationModelVersion; }
    template<typename ModerationModelVersionT = Aws::String>
    void SetModerationModelVersion(ModerationModelVersionT&& value) { m_moderationModelVersionHasBeenSet = true; m_moderationModelVersion = std::forward<ModerationModelVersionT>(value); }
    template<typename ModerationModelVersionT = Aws::String>
    DetectModerationLabelsResult& WithModerationModelVersion(ModerationModelVersionT&& value) { SetModerationModelVersion(std::forward<ModerationModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows the results of the human in the loop evaluation.</p>
     */
    inline const HumanLoopActivationOutput& GetHumanLoopActivationOutput() const { return m_humanLoopActivationOutput; }
    template<typename HumanLoopActivationOutputT = HumanLoopActivationOutput>
    void SetHumanLoopActivationOutput(HumanLoopActivationOutputT&& value) { m_humanLoopActivationOutputHasBeenSet = true; m_humanLoopActivationOutput = std::forward<HumanLoopActivationOutputT>(value); }
    template<typename HumanLoopActivationOutputT = HumanLoopActivationOutput>
    DetectModerationLabelsResult& WithHumanLoopActivationOutput(HumanLoopActivationOutputT&& value) { SetHumanLoopActivationOutput(std::forward<HumanLoopActivationOutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the custom adapter that was used during inference. If during
     * inference the adapter was EXPIRED, then the parameter will not be returned,
     * indicating that a base moderation detection project version was used.</p>
     */
    inline const Aws::String& GetProjectVersion() const { return m_projectVersion; }
    template<typename ProjectVersionT = Aws::String>
    void SetProjectVersion(ProjectVersionT&& value) { m_projectVersionHasBeenSet = true; m_projectVersion = std::forward<ProjectVersionT>(value); }
    template<typename ProjectVersionT = Aws::String>
    DetectModerationLabelsResult& WithProjectVersion(ProjectVersionT&& value) { SetProjectVersion(std::forward<ProjectVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of predicted results for the type of content an image contains. For
     * example, the image content might be from animation, sports, or a video game.</p>
     */
    inline const Aws::Vector<ContentType>& GetContentTypes() const { return m_contentTypes; }
    template<typename ContentTypesT = Aws::Vector<ContentType>>
    void SetContentTypes(ContentTypesT&& value) { m_contentTypesHasBeenSet = true; m_contentTypes = std::forward<ContentTypesT>(value); }
    template<typename ContentTypesT = Aws::Vector<ContentType>>
    DetectModerationLabelsResult& WithContentTypes(ContentTypesT&& value) { SetContentTypes(std::forward<ContentTypesT>(value)); return *this;}
    template<typename ContentTypesT = ContentType>
    DetectModerationLabelsResult& AddContentTypes(ContentTypesT&& value) { m_contentTypesHasBeenSet = true; m_contentTypes.emplace_back(std::forward<ContentTypesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DetectModerationLabelsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ModerationLabel> m_moderationLabels;
    bool m_moderationLabelsHasBeenSet = false;

    Aws::String m_moderationModelVersion;
    bool m_moderationModelVersionHasBeenSet = false;

    HumanLoopActivationOutput m_humanLoopActivationOutput;
    bool m_humanLoopActivationOutputHasBeenSet = false;

    Aws::String m_projectVersion;
    bool m_projectVersionHasBeenSet = false;

    Aws::Vector<ContentType> m_contentTypes;
    bool m_contentTypesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
