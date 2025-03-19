/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The configuration for the payload for a recommendation job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RecommendationJobPayloadConfig">AWS
   * API Reference</a></p>
   */
  class RecommendationJobPayloadConfig
  {
  public:
    AWS_SAGEMAKER_API RecommendationJobPayloadConfig() = default;
    AWS_SAGEMAKER_API RecommendationJobPayloadConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RecommendationJobPayloadConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where the sample payload
     * is stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix).</p>
     */
    inline const Aws::String& GetSamplePayloadUrl() const { return m_samplePayloadUrl; }
    inline bool SamplePayloadUrlHasBeenSet() const { return m_samplePayloadUrlHasBeenSet; }
    template<typename SamplePayloadUrlT = Aws::String>
    void SetSamplePayloadUrl(SamplePayloadUrlT&& value) { m_samplePayloadUrlHasBeenSet = true; m_samplePayloadUrl = std::forward<SamplePayloadUrlT>(value); }
    template<typename SamplePayloadUrlT = Aws::String>
    RecommendationJobPayloadConfig& WithSamplePayloadUrl(SamplePayloadUrlT&& value) { SetSamplePayloadUrl(std::forward<SamplePayloadUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported MIME types for the input data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedContentTypes() const { return m_supportedContentTypes; }
    inline bool SupportedContentTypesHasBeenSet() const { return m_supportedContentTypesHasBeenSet; }
    template<typename SupportedContentTypesT = Aws::Vector<Aws::String>>
    void SetSupportedContentTypes(SupportedContentTypesT&& value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes = std::forward<SupportedContentTypesT>(value); }
    template<typename SupportedContentTypesT = Aws::Vector<Aws::String>>
    RecommendationJobPayloadConfig& WithSupportedContentTypes(SupportedContentTypesT&& value) { SetSupportedContentTypes(std::forward<SupportedContentTypesT>(value)); return *this;}
    template<typename SupportedContentTypesT = Aws::String>
    RecommendationJobPayloadConfig& AddSupportedContentTypes(SupportedContentTypesT&& value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes.emplace_back(std::forward<SupportedContentTypesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_samplePayloadUrl;
    bool m_samplePayloadUrlHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedContentTypes;
    bool m_supportedContentTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
