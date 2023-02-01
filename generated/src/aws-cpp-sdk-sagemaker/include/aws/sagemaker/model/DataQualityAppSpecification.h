/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Information about the container that a data quality monitoring job
   * runs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DataQualityAppSpecification">AWS
   * API Reference</a></p>
   */
  class DataQualityAppSpecification
  {
  public:
    AWS_SAGEMAKER_API DataQualityAppSpecification();
    AWS_SAGEMAKER_API DataQualityAppSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DataQualityAppSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The container image that the data quality monitoring job runs.</p>
     */
    inline const Aws::String& GetImageUri() const{ return m_imageUri; }

    /**
     * <p>The container image that the data quality monitoring job runs.</p>
     */
    inline bool ImageUriHasBeenSet() const { return m_imageUriHasBeenSet; }

    /**
     * <p>The container image that the data quality monitoring job runs.</p>
     */
    inline void SetImageUri(const Aws::String& value) { m_imageUriHasBeenSet = true; m_imageUri = value; }

    /**
     * <p>The container image that the data quality monitoring job runs.</p>
     */
    inline void SetImageUri(Aws::String&& value) { m_imageUriHasBeenSet = true; m_imageUri = std::move(value); }

    /**
     * <p>The container image that the data quality monitoring job runs.</p>
     */
    inline void SetImageUri(const char* value) { m_imageUriHasBeenSet = true; m_imageUri.assign(value); }

    /**
     * <p>The container image that the data quality monitoring job runs.</p>
     */
    inline DataQualityAppSpecification& WithImageUri(const Aws::String& value) { SetImageUri(value); return *this;}

    /**
     * <p>The container image that the data quality monitoring job runs.</p>
     */
    inline DataQualityAppSpecification& WithImageUri(Aws::String&& value) { SetImageUri(std::move(value)); return *this;}

    /**
     * <p>The container image that the data quality monitoring job runs.</p>
     */
    inline DataQualityAppSpecification& WithImageUri(const char* value) { SetImageUri(value); return *this;}


    /**
     * <p>The entrypoint for a container used to run a monitoring job.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerEntrypoint() const{ return m_containerEntrypoint; }

    /**
     * <p>The entrypoint for a container used to run a monitoring job.</p>
     */
    inline bool ContainerEntrypointHasBeenSet() const { return m_containerEntrypointHasBeenSet; }

    /**
     * <p>The entrypoint for a container used to run a monitoring job.</p>
     */
    inline void SetContainerEntrypoint(const Aws::Vector<Aws::String>& value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint = value; }

    /**
     * <p>The entrypoint for a container used to run a monitoring job.</p>
     */
    inline void SetContainerEntrypoint(Aws::Vector<Aws::String>&& value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint = std::move(value); }

    /**
     * <p>The entrypoint for a container used to run a monitoring job.</p>
     */
    inline DataQualityAppSpecification& WithContainerEntrypoint(const Aws::Vector<Aws::String>& value) { SetContainerEntrypoint(value); return *this;}

    /**
     * <p>The entrypoint for a container used to run a monitoring job.</p>
     */
    inline DataQualityAppSpecification& WithContainerEntrypoint(Aws::Vector<Aws::String>&& value) { SetContainerEntrypoint(std::move(value)); return *this;}

    /**
     * <p>The entrypoint for a container used to run a monitoring job.</p>
     */
    inline DataQualityAppSpecification& AddContainerEntrypoint(const Aws::String& value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint.push_back(value); return *this; }

    /**
     * <p>The entrypoint for a container used to run a monitoring job.</p>
     */
    inline DataQualityAppSpecification& AddContainerEntrypoint(Aws::String&& value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint.push_back(std::move(value)); return *this; }

    /**
     * <p>The entrypoint for a container used to run a monitoring job.</p>
     */
    inline DataQualityAppSpecification& AddContainerEntrypoint(const char* value) { m_containerEntrypointHasBeenSet = true; m_containerEntrypoint.push_back(value); return *this; }


    /**
     * <p>The arguments to send to the container that the monitoring job runs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerArguments() const{ return m_containerArguments; }

    /**
     * <p>The arguments to send to the container that the monitoring job runs.</p>
     */
    inline bool ContainerArgumentsHasBeenSet() const { return m_containerArgumentsHasBeenSet; }

    /**
     * <p>The arguments to send to the container that the monitoring job runs.</p>
     */
    inline void SetContainerArguments(const Aws::Vector<Aws::String>& value) { m_containerArgumentsHasBeenSet = true; m_containerArguments = value; }

    /**
     * <p>The arguments to send to the container that the monitoring job runs.</p>
     */
    inline void SetContainerArguments(Aws::Vector<Aws::String>&& value) { m_containerArgumentsHasBeenSet = true; m_containerArguments = std::move(value); }

    /**
     * <p>The arguments to send to the container that the monitoring job runs.</p>
     */
    inline DataQualityAppSpecification& WithContainerArguments(const Aws::Vector<Aws::String>& value) { SetContainerArguments(value); return *this;}

    /**
     * <p>The arguments to send to the container that the monitoring job runs.</p>
     */
    inline DataQualityAppSpecification& WithContainerArguments(Aws::Vector<Aws::String>&& value) { SetContainerArguments(std::move(value)); return *this;}

    /**
     * <p>The arguments to send to the container that the monitoring job runs.</p>
     */
    inline DataQualityAppSpecification& AddContainerArguments(const Aws::String& value) { m_containerArgumentsHasBeenSet = true; m_containerArguments.push_back(value); return *this; }

    /**
     * <p>The arguments to send to the container that the monitoring job runs.</p>
     */
    inline DataQualityAppSpecification& AddContainerArguments(Aws::String&& value) { m_containerArgumentsHasBeenSet = true; m_containerArguments.push_back(std::move(value)); return *this; }

    /**
     * <p>The arguments to send to the container that the monitoring job runs.</p>
     */
    inline DataQualityAppSpecification& AddContainerArguments(const char* value) { m_containerArgumentsHasBeenSet = true; m_containerArguments.push_back(value); return *this; }


    /**
     * <p>An Amazon S3 URI to a script that is called per row prior to running
     * analysis. It can base64 decode the payload and convert it into a flatted json so
     * that the built-in container can use the converted data. Applicable only for the
     * built-in (first party) containers.</p>
     */
    inline const Aws::String& GetRecordPreprocessorSourceUri() const{ return m_recordPreprocessorSourceUri; }

    /**
     * <p>An Amazon S3 URI to a script that is called per row prior to running
     * analysis. It can base64 decode the payload and convert it into a flatted json so
     * that the built-in container can use the converted data. Applicable only for the
     * built-in (first party) containers.</p>
     */
    inline bool RecordPreprocessorSourceUriHasBeenSet() const { return m_recordPreprocessorSourceUriHasBeenSet; }

    /**
     * <p>An Amazon S3 URI to a script that is called per row prior to running
     * analysis. It can base64 decode the payload and convert it into a flatted json so
     * that the built-in container can use the converted data. Applicable only for the
     * built-in (first party) containers.</p>
     */
    inline void SetRecordPreprocessorSourceUri(const Aws::String& value) { m_recordPreprocessorSourceUriHasBeenSet = true; m_recordPreprocessorSourceUri = value; }

    /**
     * <p>An Amazon S3 URI to a script that is called per row prior to running
     * analysis. It can base64 decode the payload and convert it into a flatted json so
     * that the built-in container can use the converted data. Applicable only for the
     * built-in (first party) containers.</p>
     */
    inline void SetRecordPreprocessorSourceUri(Aws::String&& value) { m_recordPreprocessorSourceUriHasBeenSet = true; m_recordPreprocessorSourceUri = std::move(value); }

    /**
     * <p>An Amazon S3 URI to a script that is called per row prior to running
     * analysis. It can base64 decode the payload and convert it into a flatted json so
     * that the built-in container can use the converted data. Applicable only for the
     * built-in (first party) containers.</p>
     */
    inline void SetRecordPreprocessorSourceUri(const char* value) { m_recordPreprocessorSourceUriHasBeenSet = true; m_recordPreprocessorSourceUri.assign(value); }

    /**
     * <p>An Amazon S3 URI to a script that is called per row prior to running
     * analysis. It can base64 decode the payload and convert it into a flatted json so
     * that the built-in container can use the converted data. Applicable only for the
     * built-in (first party) containers.</p>
     */
    inline DataQualityAppSpecification& WithRecordPreprocessorSourceUri(const Aws::String& value) { SetRecordPreprocessorSourceUri(value); return *this;}

    /**
     * <p>An Amazon S3 URI to a script that is called per row prior to running
     * analysis. It can base64 decode the payload and convert it into a flatted json so
     * that the built-in container can use the converted data. Applicable only for the
     * built-in (first party) containers.</p>
     */
    inline DataQualityAppSpecification& WithRecordPreprocessorSourceUri(Aws::String&& value) { SetRecordPreprocessorSourceUri(std::move(value)); return *this;}

    /**
     * <p>An Amazon S3 URI to a script that is called per row prior to running
     * analysis. It can base64 decode the payload and convert it into a flatted json so
     * that the built-in container can use the converted data. Applicable only for the
     * built-in (first party) containers.</p>
     */
    inline DataQualityAppSpecification& WithRecordPreprocessorSourceUri(const char* value) { SetRecordPreprocessorSourceUri(value); return *this;}


    /**
     * <p>An Amazon S3 URI to a script that is called after analysis has been
     * performed. Applicable only for the built-in (first party) containers.</p>
     */
    inline const Aws::String& GetPostAnalyticsProcessorSourceUri() const{ return m_postAnalyticsProcessorSourceUri; }

    /**
     * <p>An Amazon S3 URI to a script that is called after analysis has been
     * performed. Applicable only for the built-in (first party) containers.</p>
     */
    inline bool PostAnalyticsProcessorSourceUriHasBeenSet() const { return m_postAnalyticsProcessorSourceUriHasBeenSet; }

    /**
     * <p>An Amazon S3 URI to a script that is called after analysis has been
     * performed. Applicable only for the built-in (first party) containers.</p>
     */
    inline void SetPostAnalyticsProcessorSourceUri(const Aws::String& value) { m_postAnalyticsProcessorSourceUriHasBeenSet = true; m_postAnalyticsProcessorSourceUri = value; }

    /**
     * <p>An Amazon S3 URI to a script that is called after analysis has been
     * performed. Applicable only for the built-in (first party) containers.</p>
     */
    inline void SetPostAnalyticsProcessorSourceUri(Aws::String&& value) { m_postAnalyticsProcessorSourceUriHasBeenSet = true; m_postAnalyticsProcessorSourceUri = std::move(value); }

    /**
     * <p>An Amazon S3 URI to a script that is called after analysis has been
     * performed. Applicable only for the built-in (first party) containers.</p>
     */
    inline void SetPostAnalyticsProcessorSourceUri(const char* value) { m_postAnalyticsProcessorSourceUriHasBeenSet = true; m_postAnalyticsProcessorSourceUri.assign(value); }

    /**
     * <p>An Amazon S3 URI to a script that is called after analysis has been
     * performed. Applicable only for the built-in (first party) containers.</p>
     */
    inline DataQualityAppSpecification& WithPostAnalyticsProcessorSourceUri(const Aws::String& value) { SetPostAnalyticsProcessorSourceUri(value); return *this;}

    /**
     * <p>An Amazon S3 URI to a script that is called after analysis has been
     * performed. Applicable only for the built-in (first party) containers.</p>
     */
    inline DataQualityAppSpecification& WithPostAnalyticsProcessorSourceUri(Aws::String&& value) { SetPostAnalyticsProcessorSourceUri(std::move(value)); return *this;}

    /**
     * <p>An Amazon S3 URI to a script that is called after analysis has been
     * performed. Applicable only for the built-in (first party) containers.</p>
     */
    inline DataQualityAppSpecification& WithPostAnalyticsProcessorSourceUri(const char* value) { SetPostAnalyticsProcessorSourceUri(value); return *this;}


    /**
     * <p>Sets the environment variables in the container that the monitoring job
     * runs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const{ return m_environment; }

    /**
     * <p>Sets the environment variables in the container that the monitoring job
     * runs.</p>
     */
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    /**
     * <p>Sets the environment variables in the container that the monitoring job
     * runs.</p>
     */
    inline void SetEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>Sets the environment variables in the container that the monitoring job
     * runs.</p>
     */
    inline void SetEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>Sets the environment variables in the container that the monitoring job
     * runs.</p>
     */
    inline DataQualityAppSpecification& WithEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironment(value); return *this;}

    /**
     * <p>Sets the environment variables in the container that the monitoring job
     * runs.</p>
     */
    inline DataQualityAppSpecification& WithEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironment(std::move(value)); return *this;}

    /**
     * <p>Sets the environment variables in the container that the monitoring job
     * runs.</p>
     */
    inline DataQualityAppSpecification& AddEnvironment(const Aws::String& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }

    /**
     * <p>Sets the environment variables in the container that the monitoring job
     * runs.</p>
     */
    inline DataQualityAppSpecification& AddEnvironment(Aws::String&& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }

    /**
     * <p>Sets the environment variables in the container that the monitoring job
     * runs.</p>
     */
    inline DataQualityAppSpecification& AddEnvironment(const Aws::String& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Sets the environment variables in the container that the monitoring job
     * runs.</p>
     */
    inline DataQualityAppSpecification& AddEnvironment(Aws::String&& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Sets the environment variables in the container that the monitoring job
     * runs.</p>
     */
    inline DataQualityAppSpecification& AddEnvironment(const char* key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Sets the environment variables in the container that the monitoring job
     * runs.</p>
     */
    inline DataQualityAppSpecification& AddEnvironment(Aws::String&& key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }

    /**
     * <p>Sets the environment variables in the container that the monitoring job
     * runs.</p>
     */
    inline DataQualityAppSpecification& AddEnvironment(const char* key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }

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

    Aws::Map<Aws::String, Aws::String> m_environment;
    bool m_environmentHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
