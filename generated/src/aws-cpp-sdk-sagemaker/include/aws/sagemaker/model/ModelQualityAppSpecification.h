/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/MonitoringProblemType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Container image configuration object for the monitoring job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelQualityAppSpecification">AWS
   * API Reference</a></p>
   */
  class ModelQualityAppSpecification
  {
  public:
    AWS_SAGEMAKER_API ModelQualityAppSpecification() = default;
    AWS_SAGEMAKER_API ModelQualityAppSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelQualityAppSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The address of the container image that the monitoring job runs.</p>
     */
    inline const Aws::String& GetImageUri() const { return m_imageUri; }
    inline bool ImageUriHasBeenSet() const { return m_imageUriHasBeenSet; }
    template<typename ImageUriT = Aws::String>
    void SetImageUri(ImageUriT&& value) { m_imageUriHasBeenSet = true; m_imageUri = std::forward<ImageUriT>(value); }
    template<typename ImageUriT = Aws::String>
    ModelQualityAppSpecification& WithImageUri(ImageUriT&& value) { SetImageUri(std::forward<ImageUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the entrypoint for a container that the monitoring job runs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerEntrypoint() const { return m_containerEntrypoint; }
    inline bool ContainerEntrypointHasBeenSet() const { return m_containerEntrypointHasBeenSet; }
    template<typename ContainerEntrypointT = Aws::Vector<Aws::String>>
    void SetContainerEntrypoint(ContainerEntrypointT&& value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint = std::forward<ContainerEntrypointT>(value); }
    template<typename ContainerEntrypointT = Aws::Vector<Aws::String>>
    ModelQualityAppSpecification& WithContainerEntrypoint(ContainerEntrypointT&& value) { SetContainerEntrypoint(std::forward<ContainerEntrypointT>(value)); return *this;}
    template<typename ContainerEntrypointT = Aws::String>
    ModelQualityAppSpecification& AddContainerEntrypoint(ContainerEntrypointT&& value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint.emplace_back(std::forward<ContainerEntrypointT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of arguments for the container used to run the monitoring job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerArguments() const { return m_containerArguments; }
    inline bool ContainerArgumentsHasBeenSet() const { return m_containerArgumentsHasBeenSet; }
    template<typename ContainerArgumentsT = Aws::Vector<Aws::String>>
    void SetContainerArguments(ContainerArgumentsT&& value) { m_containerArgumentsHasBeenSet = true; m_containerArguments = std::forward<ContainerArgumentsT>(value); }
    template<typename ContainerArgumentsT = Aws::Vector<Aws::String>>
    ModelQualityAppSpecification& WithContainerArguments(ContainerArgumentsT&& value) { SetContainerArguments(std::forward<ContainerArgumentsT>(value)); return *this;}
    template<typename ContainerArgumentsT = Aws::String>
    ModelQualityAppSpecification& AddContainerArguments(ContainerArgumentsT&& value) { m_containerArgumentsHasBeenSet = true; m_containerArguments.emplace_back(std::forward<ContainerArgumentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An Amazon S3 URI to a script that is called per row prior to running
     * analysis. It can base64 decode the payload and convert it into a flattened JSON
     * so that the built-in container can use the converted data. Applicable only for
     * the built-in (first party) containers.</p>
     */
    inline const Aws::String& GetRecordPreprocessorSourceUri() const { return m_recordPreprocessorSourceUri; }
    inline bool RecordPreprocessorSourceUriHasBeenSet() const { return m_recordPreprocessorSourceUriHasBeenSet; }
    template<typename RecordPreprocessorSourceUriT = Aws::String>
    void SetRecordPreprocessorSourceUri(RecordPreprocessorSourceUriT&& value) { m_recordPreprocessorSourceUriHasBeenSet = true; m_recordPreprocessorSourceUri = std::forward<RecordPreprocessorSourceUriT>(value); }
    template<typename RecordPreprocessorSourceUriT = Aws::String>
    ModelQualityAppSpecification& WithRecordPreprocessorSourceUri(RecordPreprocessorSourceUriT&& value) { SetRecordPreprocessorSourceUri(std::forward<RecordPreprocessorSourceUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon S3 URI to a script that is called after analysis has been
     * performed. Applicable only for the built-in (first party) containers.</p>
     */
    inline const Aws::String& GetPostAnalyticsProcessorSourceUri() const { return m_postAnalyticsProcessorSourceUri; }
    inline bool PostAnalyticsProcessorSourceUriHasBeenSet() const { return m_postAnalyticsProcessorSourceUriHasBeenSet; }
    template<typename PostAnalyticsProcessorSourceUriT = Aws::String>
    void SetPostAnalyticsProcessorSourceUri(PostAnalyticsProcessorSourceUriT&& value) { m_postAnalyticsProcessorSourceUriHasBeenSet = true; m_postAnalyticsProcessorSourceUri = std::forward<PostAnalyticsProcessorSourceUriT>(value); }
    template<typename PostAnalyticsProcessorSourceUriT = Aws::String>
    ModelQualityAppSpecification& WithPostAnalyticsProcessorSourceUri(PostAnalyticsProcessorSourceUriT&& value) { SetPostAnalyticsProcessorSourceUri(std::forward<PostAnalyticsProcessorSourceUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The machine learning problem type of the model that the monitoring job
     * monitors.</p>
     */
    inline MonitoringProblemType GetProblemType() const { return m_problemType; }
    inline bool ProblemTypeHasBeenSet() const { return m_problemTypeHasBeenSet; }
    inline void SetProblemType(MonitoringProblemType value) { m_problemTypeHasBeenSet = true; m_problemType = value; }
    inline ModelQualityAppSpecification& WithProblemType(MonitoringProblemType value) { SetProblemType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the environment variables in the container that the monitoring job
     * runs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    ModelQualityAppSpecification& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    template<typename EnvironmentKeyT = Aws::String, typename EnvironmentValueT = Aws::String>
    ModelQualityAppSpecification& AddEnvironment(EnvironmentKeyT&& key, EnvironmentValueT&& value) {
      m_environmentHasBeenSet = true; m_environment.emplace(std::forward<EnvironmentKeyT>(key), std::forward<EnvironmentValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_imageUri;
    bool m_imageUriHasBeenSet = false;

    Aws::Vector<Aws::String> m_containerEntrypoint;
    bool m_containerEntrypointHasBeenSet = false;

    Aws::Vector<Aws::String> m_containerArguments;
    bool m_containerArgumentsHasBeenSet = false;

    Aws::String m_recordPreprocessorSourceUri;
    bool m_recordPreprocessorSourceUriHasBeenSet = false;

    Aws::String m_postAnalyticsProcessorSourceUri;
    bool m_postAnalyticsProcessorSourceUriHasBeenSet = false;

    MonitoringProblemType m_problemType{MonitoringProblemType::NOT_SET};
    bool m_problemTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environment;
    bool m_environmentHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
