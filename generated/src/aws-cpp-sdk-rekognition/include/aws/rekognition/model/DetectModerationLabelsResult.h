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
    AWS_REKOGNITION_API DetectModerationLabelsResult();
    AWS_REKOGNITION_API DetectModerationLabelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API DetectModerationLabelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Array of detected Moderation labels. For video operations, this includes the
     * time, in milliseconds from the start of the video, they were detected.</p>
     */
    inline const Aws::Vector<ModerationLabel>& GetModerationLabels() const{ return m_moderationLabels; }
    inline void SetModerationLabels(const Aws::Vector<ModerationLabel>& value) { m_moderationLabels = value; }
    inline void SetModerationLabels(Aws::Vector<ModerationLabel>&& value) { m_moderationLabels = std::move(value); }
    inline DetectModerationLabelsResult& WithModerationLabels(const Aws::Vector<ModerationLabel>& value) { SetModerationLabels(value); return *this;}
    inline DetectModerationLabelsResult& WithModerationLabels(Aws::Vector<ModerationLabel>&& value) { SetModerationLabels(std::move(value)); return *this;}
    inline DetectModerationLabelsResult& AddModerationLabels(const ModerationLabel& value) { m_moderationLabels.push_back(value); return *this; }
    inline DetectModerationLabelsResult& AddModerationLabels(ModerationLabel&& value) { m_moderationLabels.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Version number of the base moderation detection model that was used to detect
     * unsafe content.</p>
     */
    inline const Aws::String& GetModerationModelVersion() const{ return m_moderationModelVersion; }
    inline void SetModerationModelVersion(const Aws::String& value) { m_moderationModelVersion = value; }
    inline void SetModerationModelVersion(Aws::String&& value) { m_moderationModelVersion = std::move(value); }
    inline void SetModerationModelVersion(const char* value) { m_moderationModelVersion.assign(value); }
    inline DetectModerationLabelsResult& WithModerationModelVersion(const Aws::String& value) { SetModerationModelVersion(value); return *this;}
    inline DetectModerationLabelsResult& WithModerationModelVersion(Aws::String&& value) { SetModerationModelVersion(std::move(value)); return *this;}
    inline DetectModerationLabelsResult& WithModerationModelVersion(const char* value) { SetModerationModelVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows the results of the human in the loop evaluation.</p>
     */
    inline const HumanLoopActivationOutput& GetHumanLoopActivationOutput() const{ return m_humanLoopActivationOutput; }
    inline void SetHumanLoopActivationOutput(const HumanLoopActivationOutput& value) { m_humanLoopActivationOutput = value; }
    inline void SetHumanLoopActivationOutput(HumanLoopActivationOutput&& value) { m_humanLoopActivationOutput = std::move(value); }
    inline DetectModerationLabelsResult& WithHumanLoopActivationOutput(const HumanLoopActivationOutput& value) { SetHumanLoopActivationOutput(value); return *this;}
    inline DetectModerationLabelsResult& WithHumanLoopActivationOutput(HumanLoopActivationOutput&& value) { SetHumanLoopActivationOutput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the custom adapter that was used during inference. If during
     * inference the adapter was EXPIRED, then the parameter will not be returned,
     * indicating that a base moderation detection project version was used.</p>
     */
    inline const Aws::String& GetProjectVersion() const{ return m_projectVersion; }
    inline void SetProjectVersion(const Aws::String& value) { m_projectVersion = value; }
    inline void SetProjectVersion(Aws::String&& value) { m_projectVersion = std::move(value); }
    inline void SetProjectVersion(const char* value) { m_projectVersion.assign(value); }
    inline DetectModerationLabelsResult& WithProjectVersion(const Aws::String& value) { SetProjectVersion(value); return *this;}
    inline DetectModerationLabelsResult& WithProjectVersion(Aws::String&& value) { SetProjectVersion(std::move(value)); return *this;}
    inline DetectModerationLabelsResult& WithProjectVersion(const char* value) { SetProjectVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of predicted results for the type of content an image contains. For
     * example, the image content might be from animation, sports, or a video game.</p>
     */
    inline const Aws::Vector<ContentType>& GetContentTypes() const{ return m_contentTypes; }
    inline void SetContentTypes(const Aws::Vector<ContentType>& value) { m_contentTypes = value; }
    inline void SetContentTypes(Aws::Vector<ContentType>&& value) { m_contentTypes = std::move(value); }
    inline DetectModerationLabelsResult& WithContentTypes(const Aws::Vector<ContentType>& value) { SetContentTypes(value); return *this;}
    inline DetectModerationLabelsResult& WithContentTypes(Aws::Vector<ContentType>&& value) { SetContentTypes(std::move(value)); return *this;}
    inline DetectModerationLabelsResult& AddContentTypes(const ContentType& value) { m_contentTypes.push_back(value); return *this; }
    inline DetectModerationLabelsResult& AddContentTypes(ContentType&& value) { m_contentTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DetectModerationLabelsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DetectModerationLabelsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DetectModerationLabelsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ModerationLabel> m_moderationLabels;

    Aws::String m_moderationModelVersion;

    HumanLoopActivationOutput m_humanLoopActivationOutput;

    Aws::String m_projectVersion;

    Aws::Vector<ContentType> m_contentTypes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
