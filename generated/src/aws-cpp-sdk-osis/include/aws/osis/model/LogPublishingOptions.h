/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/osis/model/CloudWatchLogDestination.h>
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
namespace OSIS
{
namespace Model
{

  /**
   * <p>Container for the values required to configure logging for the pipeline. If
   * you don't specify these values, OpenSearch Ingestion will not publish logs from
   * your application to CloudWatch Logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/LogPublishingOptions">AWS
   * API Reference</a></p>
   */
  class LogPublishingOptions
  {
  public:
    AWS_OSIS_API LogPublishingOptions();
    AWS_OSIS_API LogPublishingOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API LogPublishingOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether logs should be published.</p>
     */
    inline bool GetIsLoggingEnabled() const{ return m_isLoggingEnabled; }

    /**
     * <p>Whether logs should be published.</p>
     */
    inline bool IsLoggingEnabledHasBeenSet() const { return m_isLoggingEnabledHasBeenSet; }

    /**
     * <p>Whether logs should be published.</p>
     */
    inline void SetIsLoggingEnabled(bool value) { m_isLoggingEnabledHasBeenSet = true; m_isLoggingEnabled = value; }

    /**
     * <p>Whether logs should be published.</p>
     */
    inline LogPublishingOptions& WithIsLoggingEnabled(bool value) { SetIsLoggingEnabled(value); return *this;}


    /**
     * <p>The destination for OpenSearch Ingestion logs sent to Amazon CloudWatch Logs.
     * This parameter is required if <code>IsLoggingEnabled</code> is set to
     * <code>true</code>.</p>
     */
    inline const CloudWatchLogDestination& GetCloudWatchLogDestination() const{ return m_cloudWatchLogDestination; }

    /**
     * <p>The destination for OpenSearch Ingestion logs sent to Amazon CloudWatch Logs.
     * This parameter is required if <code>IsLoggingEnabled</code> is set to
     * <code>true</code>.</p>
     */
    inline bool CloudWatchLogDestinationHasBeenSet() const { return m_cloudWatchLogDestinationHasBeenSet; }

    /**
     * <p>The destination for OpenSearch Ingestion logs sent to Amazon CloudWatch Logs.
     * This parameter is required if <code>IsLoggingEnabled</code> is set to
     * <code>true</code>.</p>
     */
    inline void SetCloudWatchLogDestination(const CloudWatchLogDestination& value) { m_cloudWatchLogDestinationHasBeenSet = true; m_cloudWatchLogDestination = value; }

    /**
     * <p>The destination for OpenSearch Ingestion logs sent to Amazon CloudWatch Logs.
     * This parameter is required if <code>IsLoggingEnabled</code> is set to
     * <code>true</code>.</p>
     */
    inline void SetCloudWatchLogDestination(CloudWatchLogDestination&& value) { m_cloudWatchLogDestinationHasBeenSet = true; m_cloudWatchLogDestination = std::move(value); }

    /**
     * <p>The destination for OpenSearch Ingestion logs sent to Amazon CloudWatch Logs.
     * This parameter is required if <code>IsLoggingEnabled</code> is set to
     * <code>true</code>.</p>
     */
    inline LogPublishingOptions& WithCloudWatchLogDestination(const CloudWatchLogDestination& value) { SetCloudWatchLogDestination(value); return *this;}

    /**
     * <p>The destination for OpenSearch Ingestion logs sent to Amazon CloudWatch Logs.
     * This parameter is required if <code>IsLoggingEnabled</code> is set to
     * <code>true</code>.</p>
     */
    inline LogPublishingOptions& WithCloudWatchLogDestination(CloudWatchLogDestination&& value) { SetCloudWatchLogDestination(std::move(value)); return *this;}

  private:

    bool m_isLoggingEnabled;
    bool m_isLoggingEnabledHasBeenSet = false;

    CloudWatchLogDestination m_cloudWatchLogDestination;
    bool m_cloudWatchLogDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
