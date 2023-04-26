/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The destination for OpenSearch Ingestion logs sent to Amazon
   * CloudWatch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/CloudWatchLogDestination">AWS
   * API Reference</a></p>
   */
  class CloudWatchLogDestination
  {
  public:
    AWS_OSIS_API CloudWatchLogDestination();
    AWS_OSIS_API CloudWatchLogDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API CloudWatchLogDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the CloudWatch Logs group to send pipeline logs to. You can
     * specify an existing log group or create a new one. For example,
     * <code>/aws/OpenSearchService/IngestionService/my-pipeline</code>.</p>
     */
    inline const Aws::String& GetLogGroup() const{ return m_logGroup; }

    /**
     * <p>The name of the CloudWatch Logs group to send pipeline logs to. You can
     * specify an existing log group or create a new one. For example,
     * <code>/aws/OpenSearchService/IngestionService/my-pipeline</code>.</p>
     */
    inline bool LogGroupHasBeenSet() const { return m_logGroupHasBeenSet; }

    /**
     * <p>The name of the CloudWatch Logs group to send pipeline logs to. You can
     * specify an existing log group or create a new one. For example,
     * <code>/aws/OpenSearchService/IngestionService/my-pipeline</code>.</p>
     */
    inline void SetLogGroup(const Aws::String& value) { m_logGroupHasBeenSet = true; m_logGroup = value; }

    /**
     * <p>The name of the CloudWatch Logs group to send pipeline logs to. You can
     * specify an existing log group or create a new one. For example,
     * <code>/aws/OpenSearchService/IngestionService/my-pipeline</code>.</p>
     */
    inline void SetLogGroup(Aws::String&& value) { m_logGroupHasBeenSet = true; m_logGroup = std::move(value); }

    /**
     * <p>The name of the CloudWatch Logs group to send pipeline logs to. You can
     * specify an existing log group or create a new one. For example,
     * <code>/aws/OpenSearchService/IngestionService/my-pipeline</code>.</p>
     */
    inline void SetLogGroup(const char* value) { m_logGroupHasBeenSet = true; m_logGroup.assign(value); }

    /**
     * <p>The name of the CloudWatch Logs group to send pipeline logs to. You can
     * specify an existing log group or create a new one. For example,
     * <code>/aws/OpenSearchService/IngestionService/my-pipeline</code>.</p>
     */
    inline CloudWatchLogDestination& WithLogGroup(const Aws::String& value) { SetLogGroup(value); return *this;}

    /**
     * <p>The name of the CloudWatch Logs group to send pipeline logs to. You can
     * specify an existing log group or create a new one. For example,
     * <code>/aws/OpenSearchService/IngestionService/my-pipeline</code>.</p>
     */
    inline CloudWatchLogDestination& WithLogGroup(Aws::String&& value) { SetLogGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudWatch Logs group to send pipeline logs to. You can
     * specify an existing log group or create a new one. For example,
     * <code>/aws/OpenSearchService/IngestionService/my-pipeline</code>.</p>
     */
    inline CloudWatchLogDestination& WithLogGroup(const char* value) { SetLogGroup(value); return *this;}

  private:

    Aws::String m_logGroup;
    bool m_logGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
