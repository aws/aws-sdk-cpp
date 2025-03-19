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
   * <p>Container image configuration object for the monitoring job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringAppSpecification">AWS
   * API Reference</a></p>
   */
  class MonitoringAppSpecification
  {
  public:
    AWS_SAGEMAKER_API MonitoringAppSpecification() = default;
    AWS_SAGEMAKER_API MonitoringAppSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringAppSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The container image to be run by the monitoring job.</p>
     */
    inline const Aws::String& GetImageUri() const { return m_imageUri; }
    inline bool ImageUriHasBeenSet() const { return m_imageUriHasBeenSet; }
    template<typename ImageUriT = Aws::String>
    void SetImageUri(ImageUriT&& value) { m_imageUriHasBeenSet = true; m_imageUri = std::forward<ImageUriT>(value); }
    template<typename ImageUriT = Aws::String>
    MonitoringAppSpecification& WithImageUri(ImageUriT&& value) { SetImageUri(std::forward<ImageUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the entrypoint for a container used to run the monitoring job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerEntrypoint() const { return m_containerEntrypoint; }
    inline bool ContainerEntrypointHasBeenSet() const { return m_containerEntrypointHasBeenSet; }
    template<typename ContainerEntrypointT = Aws::Vector<Aws::String>>
    void SetContainerEntrypoint(ContainerEntrypointT&& value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint = std::forward<ContainerEntrypointT>(value); }
    template<typename ContainerEntrypointT = Aws::Vector<Aws::String>>
    MonitoringAppSpecification& WithContainerEntrypoint(ContainerEntrypointT&& value) { SetContainerEntrypoint(std::forward<ContainerEntrypointT>(value)); return *this;}
    template<typename ContainerEntrypointT = Aws::String>
    MonitoringAppSpecification& AddContainerEntrypoint(ContainerEntrypointT&& value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint.emplace_back(std::forward<ContainerEntrypointT>(value)); return *this; }
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
    MonitoringAppSpecification& WithContainerArguments(ContainerArgumentsT&& value) { SetContainerArguments(std::forward<ContainerArgumentsT>(value)); return *this;}
    template<typename ContainerArgumentsT = Aws::String>
    MonitoringAppSpecification& AddContainerArguments(ContainerArgumentsT&& value) { m_containerArgumentsHasBeenSet = true; m_containerArguments.emplace_back(std::forward<ContainerArgumentsT>(value)); return *this; }
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
    MonitoringAppSpecification& WithRecordPreprocessorSourceUri(RecordPreprocessorSourceUriT&& value) { SetRecordPreprocessorSourceUri(std::forward<RecordPreprocessorSourceUriT>(value)); return *this;}
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
    MonitoringAppSpecification& WithPostAnalyticsProcessorSourceUri(PostAnalyticsProcessorSourceUriT&& value) { SetPostAnalyticsProcessorSourceUri(std::forward<PostAnalyticsProcessorSourceUriT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
