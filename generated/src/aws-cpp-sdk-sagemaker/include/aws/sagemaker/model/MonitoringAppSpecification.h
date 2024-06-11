﻿/**
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
    AWS_SAGEMAKER_API MonitoringAppSpecification();
    AWS_SAGEMAKER_API MonitoringAppSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringAppSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The container image to be run by the monitoring job.</p>
     */
    inline const Aws::String& GetImageUri() const{ return m_imageUri; }
    inline bool ImageUriHasBeenSet() const { return m_imageUriHasBeenSet; }
    inline void SetImageUri(const Aws::String& value) { m_imageUriHasBeenSet = true; m_imageUri = value; }
    inline void SetImageUri(Aws::String&& value) { m_imageUriHasBeenSet = true; m_imageUri = std::move(value); }
    inline void SetImageUri(const char* value) { m_imageUriHasBeenSet = true; m_imageUri.assign(value); }
    inline MonitoringAppSpecification& WithImageUri(const Aws::String& value) { SetImageUri(value); return *this;}
    inline MonitoringAppSpecification& WithImageUri(Aws::String&& value) { SetImageUri(std::move(value)); return *this;}
    inline MonitoringAppSpecification& WithImageUri(const char* value) { SetImageUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the entrypoint for a container used to run the monitoring job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerEntrypoint() const{ return m_containerEntrypoint; }
    inline bool ContainerEntrypointHasBeenSet() const { return m_containerEntrypointHasBeenSet; }
    inline void SetContainerEntrypoint(const Aws::Vector<Aws::String>& value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint = value; }
    inline void SetContainerEntrypoint(Aws::Vector<Aws::String>&& value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint = std::move(value); }
    inline MonitoringAppSpecification& WithContainerEntrypoint(const Aws::Vector<Aws::String>& value) { SetContainerEntrypoint(value); return *this;}
    inline MonitoringAppSpecification& WithContainerEntrypoint(Aws::Vector<Aws::String>&& value) { SetContainerEntrypoint(std::move(value)); return *this;}
    inline MonitoringAppSpecification& AddContainerEntrypoint(const Aws::String& value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint.push_back(value); return *this; }
    inline MonitoringAppSpecification& AddContainerEntrypoint(Aws::String&& value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint.push_back(std::move(value)); return *this; }
    inline MonitoringAppSpecification& AddContainerEntrypoint(const char* value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of arguments for the container used to run the monitoring job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerArguments() const{ return m_containerArguments; }
    inline bool ContainerArgumentsHasBeenSet() const { return m_containerArgumentsHasBeenSet; }
    inline void SetContainerArguments(const Aws::Vector<Aws::String>& value) { m_containerArgumentsHasBeenSet = true; m_containerArguments = value; }
    inline void SetContainerArguments(Aws::Vector<Aws::String>&& value) { m_containerArgumentsHasBeenSet = true; m_containerArguments = std::move(value); }
    inline MonitoringAppSpecification& WithContainerArguments(const Aws::Vector<Aws::String>& value) { SetContainerArguments(value); return *this;}
    inline MonitoringAppSpecification& WithContainerArguments(Aws::Vector<Aws::String>&& value) { SetContainerArguments(std::move(value)); return *this;}
    inline MonitoringAppSpecification& AddContainerArguments(const Aws::String& value) { m_containerArgumentsHasBeenSet = true; m_containerArguments.push_back(value); return *this; }
    inline MonitoringAppSpecification& AddContainerArguments(Aws::String&& value) { m_containerArgumentsHasBeenSet = true; m_containerArguments.push_back(std::move(value)); return *this; }
    inline MonitoringAppSpecification& AddContainerArguments(const char* value) { m_containerArgumentsHasBeenSet = true; m_containerArguments.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An Amazon S3 URI to a script that is called per row prior to running
     * analysis. It can base64 decode the payload and convert it into a flattened JSON
     * so that the built-in container can use the converted data. Applicable only for
     * the built-in (first party) containers.</p>
     */
    inline const Aws::String& GetRecordPreprocessorSourceUri() const{ return m_recordPreprocessorSourceUri; }
    inline bool RecordPreprocessorSourceUriHasBeenSet() const { return m_recordPreprocessorSourceUriHasBeenSet; }
    inline void SetRecordPreprocessorSourceUri(const Aws::String& value) { m_recordPreprocessorSourceUriHasBeenSet = true; m_recordPreprocessorSourceUri = value; }
    inline void SetRecordPreprocessorSourceUri(Aws::String&& value) { m_recordPreprocessorSourceUriHasBeenSet = true; m_recordPreprocessorSourceUri = std::move(value); }
    inline void SetRecordPreprocessorSourceUri(const char* value) { m_recordPreprocessorSourceUriHasBeenSet = true; m_recordPreprocessorSourceUri.assign(value); }
    inline MonitoringAppSpecification& WithRecordPreprocessorSourceUri(const Aws::String& value) { SetRecordPreprocessorSourceUri(value); return *this;}
    inline MonitoringAppSpecification& WithRecordPreprocessorSourceUri(Aws::String&& value) { SetRecordPreprocessorSourceUri(std::move(value)); return *this;}
    inline MonitoringAppSpecification& WithRecordPreprocessorSourceUri(const char* value) { SetRecordPreprocessorSourceUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon S3 URI to a script that is called after analysis has been
     * performed. Applicable only for the built-in (first party) containers.</p>
     */
    inline const Aws::String& GetPostAnalyticsProcessorSourceUri() const{ return m_postAnalyticsProcessorSourceUri; }
    inline bool PostAnalyticsProcessorSourceUriHasBeenSet() const { return m_postAnalyticsProcessorSourceUriHasBeenSet; }
    inline void SetPostAnalyticsProcessorSourceUri(const Aws::String& value) { m_postAnalyticsProcessorSourceUriHasBeenSet = true; m_postAnalyticsProcessorSourceUri = value; }
    inline void SetPostAnalyticsProcessorSourceUri(Aws::String&& value) { m_postAnalyticsProcessorSourceUriHasBeenSet = true; m_postAnalyticsProcessorSourceUri = std::move(value); }
    inline void SetPostAnalyticsProcessorSourceUri(const char* value) { m_postAnalyticsProcessorSourceUriHasBeenSet = true; m_postAnalyticsProcessorSourceUri.assign(value); }
    inline MonitoringAppSpecification& WithPostAnalyticsProcessorSourceUri(const Aws::String& value) { SetPostAnalyticsProcessorSourceUri(value); return *this;}
    inline MonitoringAppSpecification& WithPostAnalyticsProcessorSourceUri(Aws::String&& value) { SetPostAnalyticsProcessorSourceUri(std::move(value)); return *this;}
    inline MonitoringAppSpecification& WithPostAnalyticsProcessorSourceUri(const char* value) { SetPostAnalyticsProcessorSourceUri(value); return *this;}
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
