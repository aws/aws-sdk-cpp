/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about the provisioned throughput for the table or for a global
   * secondary index.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsDynamoDbTableProvisionedThroughput">AWS
   * API Reference</a></p>
   */
  class AwsDynamoDbTableProvisionedThroughput
  {
  public:
    AWS_SECURITYHUB_API AwsDynamoDbTableProvisionedThroughput();
    AWS_SECURITYHUB_API AwsDynamoDbTableProvisionedThroughput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsDynamoDbTableProvisionedThroughput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates when the provisioned throughput was last decreased.</p> <p>This
     * field accepts only the specified formats. Timestamps can end with <code>Z</code>
     * or <code>("+" / "-") time-hour [":" time-minute]</code>. The time-secfrac after
     * seconds is limited to a maximum of 9 digits. The offset is bounded by +/-18:00.
     * Here are valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline const Aws::String& GetLastDecreaseDateTime() const{ return m_lastDecreaseDateTime; }

    /**
     * <p>Indicates when the provisioned throughput was last decreased.</p> <p>This
     * field accepts only the specified formats. Timestamps can end with <code>Z</code>
     * or <code>("+" / "-") time-hour [":" time-minute]</code>. The time-secfrac after
     * seconds is limited to a maximum of 9 digits. The offset is bounded by +/-18:00.
     * Here are valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline bool LastDecreaseDateTimeHasBeenSet() const { return m_lastDecreaseDateTimeHasBeenSet; }

    /**
     * <p>Indicates when the provisioned throughput was last decreased.</p> <p>This
     * field accepts only the specified formats. Timestamps can end with <code>Z</code>
     * or <code>("+" / "-") time-hour [":" time-minute]</code>. The time-secfrac after
     * seconds is limited to a maximum of 9 digits. The offset is bounded by +/-18:00.
     * Here are valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline void SetLastDecreaseDateTime(const Aws::String& value) { m_lastDecreaseDateTimeHasBeenSet = true; m_lastDecreaseDateTime = value; }

    /**
     * <p>Indicates when the provisioned throughput was last decreased.</p> <p>This
     * field accepts only the specified formats. Timestamps can end with <code>Z</code>
     * or <code>("+" / "-") time-hour [":" time-minute]</code>. The time-secfrac after
     * seconds is limited to a maximum of 9 digits. The offset is bounded by +/-18:00.
     * Here are valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline void SetLastDecreaseDateTime(Aws::String&& value) { m_lastDecreaseDateTimeHasBeenSet = true; m_lastDecreaseDateTime = std::move(value); }

    /**
     * <p>Indicates when the provisioned throughput was last decreased.</p> <p>This
     * field accepts only the specified formats. Timestamps can end with <code>Z</code>
     * or <code>("+" / "-") time-hour [":" time-minute]</code>. The time-secfrac after
     * seconds is limited to a maximum of 9 digits. The offset is bounded by +/-18:00.
     * Here are valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline void SetLastDecreaseDateTime(const char* value) { m_lastDecreaseDateTimeHasBeenSet = true; m_lastDecreaseDateTime.assign(value); }

    /**
     * <p>Indicates when the provisioned throughput was last decreased.</p> <p>This
     * field accepts only the specified formats. Timestamps can end with <code>Z</code>
     * or <code>("+" / "-") time-hour [":" time-minute]</code>. The time-secfrac after
     * seconds is limited to a maximum of 9 digits. The offset is bounded by +/-18:00.
     * Here are valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline AwsDynamoDbTableProvisionedThroughput& WithLastDecreaseDateTime(const Aws::String& value) { SetLastDecreaseDateTime(value); return *this;}

    /**
     * <p>Indicates when the provisioned throughput was last decreased.</p> <p>This
     * field accepts only the specified formats. Timestamps can end with <code>Z</code>
     * or <code>("+" / "-") time-hour [":" time-minute]</code>. The time-secfrac after
     * seconds is limited to a maximum of 9 digits. The offset is bounded by +/-18:00.
     * Here are valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline AwsDynamoDbTableProvisionedThroughput& WithLastDecreaseDateTime(Aws::String&& value) { SetLastDecreaseDateTime(std::move(value)); return *this;}

    /**
     * <p>Indicates when the provisioned throughput was last decreased.</p> <p>This
     * field accepts only the specified formats. Timestamps can end with <code>Z</code>
     * or <code>("+" / "-") time-hour [":" time-minute]</code>. The time-secfrac after
     * seconds is limited to a maximum of 9 digits. The offset is bounded by +/-18:00.
     * Here are valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline AwsDynamoDbTableProvisionedThroughput& WithLastDecreaseDateTime(const char* value) { SetLastDecreaseDateTime(value); return *this;}


    /**
     * <p>Indicates when the provisioned throughput was last increased.</p> <p>This
     * field accepts only the specified formats. Timestamps can end with <code>Z</code>
     * or <code>("+" / "-") time-hour [":" time-minute]</code>. The time-secfrac after
     * seconds is limited to a maximum of 9 digits. The offset is bounded by +/-18:00.
     * Here are valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline const Aws::String& GetLastIncreaseDateTime() const{ return m_lastIncreaseDateTime; }

    /**
     * <p>Indicates when the provisioned throughput was last increased.</p> <p>This
     * field accepts only the specified formats. Timestamps can end with <code>Z</code>
     * or <code>("+" / "-") time-hour [":" time-minute]</code>. The time-secfrac after
     * seconds is limited to a maximum of 9 digits. The offset is bounded by +/-18:00.
     * Here are valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline bool LastIncreaseDateTimeHasBeenSet() const { return m_lastIncreaseDateTimeHasBeenSet; }

    /**
     * <p>Indicates when the provisioned throughput was last increased.</p> <p>This
     * field accepts only the specified formats. Timestamps can end with <code>Z</code>
     * or <code>("+" / "-") time-hour [":" time-minute]</code>. The time-secfrac after
     * seconds is limited to a maximum of 9 digits. The offset is bounded by +/-18:00.
     * Here are valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline void SetLastIncreaseDateTime(const Aws::String& value) { m_lastIncreaseDateTimeHasBeenSet = true; m_lastIncreaseDateTime = value; }

    /**
     * <p>Indicates when the provisioned throughput was last increased.</p> <p>This
     * field accepts only the specified formats. Timestamps can end with <code>Z</code>
     * or <code>("+" / "-") time-hour [":" time-minute]</code>. The time-secfrac after
     * seconds is limited to a maximum of 9 digits. The offset is bounded by +/-18:00.
     * Here are valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline void SetLastIncreaseDateTime(Aws::String&& value) { m_lastIncreaseDateTimeHasBeenSet = true; m_lastIncreaseDateTime = std::move(value); }

    /**
     * <p>Indicates when the provisioned throughput was last increased.</p> <p>This
     * field accepts only the specified formats. Timestamps can end with <code>Z</code>
     * or <code>("+" / "-") time-hour [":" time-minute]</code>. The time-secfrac after
     * seconds is limited to a maximum of 9 digits. The offset is bounded by +/-18:00.
     * Here are valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline void SetLastIncreaseDateTime(const char* value) { m_lastIncreaseDateTimeHasBeenSet = true; m_lastIncreaseDateTime.assign(value); }

    /**
     * <p>Indicates when the provisioned throughput was last increased.</p> <p>This
     * field accepts only the specified formats. Timestamps can end with <code>Z</code>
     * or <code>("+" / "-") time-hour [":" time-minute]</code>. The time-secfrac after
     * seconds is limited to a maximum of 9 digits. The offset is bounded by +/-18:00.
     * Here are valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline AwsDynamoDbTableProvisionedThroughput& WithLastIncreaseDateTime(const Aws::String& value) { SetLastIncreaseDateTime(value); return *this;}

    /**
     * <p>Indicates when the provisioned throughput was last increased.</p> <p>This
     * field accepts only the specified formats. Timestamps can end with <code>Z</code>
     * or <code>("+" / "-") time-hour [":" time-minute]</code>. The time-secfrac after
     * seconds is limited to a maximum of 9 digits. The offset is bounded by +/-18:00.
     * Here are valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline AwsDynamoDbTableProvisionedThroughput& WithLastIncreaseDateTime(Aws::String&& value) { SetLastIncreaseDateTime(std::move(value)); return *this;}

    /**
     * <p>Indicates when the provisioned throughput was last increased.</p> <p>This
     * field accepts only the specified formats. Timestamps can end with <code>Z</code>
     * or <code>("+" / "-") time-hour [":" time-minute]</code>. The time-secfrac after
     * seconds is limited to a maximum of 9 digits. The offset is bounded by +/-18:00.
     * Here are valid timestamp formats with examples:</p> <ul> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
     * <code>2019-01-31T23:00:00Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmmZ</code> (for example,
     * <code>2019-01-31T23:00:00.123456789Z</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10+17:59</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS-HHMM</code> (for example,
     * <code>2024-01-04T15:25:10-1759</code>)</p> </li> <li> <p>
     * <code>YYYY-MM-DDTHH:MM:SS.mmmmmmmmm+HH:MM</code> (for example,
     * <code>2024-01-04T15:25:10.123456789+17:59</code>)</p> </li> </ul>
     */
    inline AwsDynamoDbTableProvisionedThroughput& WithLastIncreaseDateTime(const char* value) { SetLastIncreaseDateTime(value); return *this;}


    /**
     * <p>The number of times during the current UTC calendar day that the provisioned
     * throughput was decreased.</p>
     */
    inline int GetNumberOfDecreasesToday() const{ return m_numberOfDecreasesToday; }

    /**
     * <p>The number of times during the current UTC calendar day that the provisioned
     * throughput was decreased.</p>
     */
    inline bool NumberOfDecreasesTodayHasBeenSet() const { return m_numberOfDecreasesTodayHasBeenSet; }

    /**
     * <p>The number of times during the current UTC calendar day that the provisioned
     * throughput was decreased.</p>
     */
    inline void SetNumberOfDecreasesToday(int value) { m_numberOfDecreasesTodayHasBeenSet = true; m_numberOfDecreasesToday = value; }

    /**
     * <p>The number of times during the current UTC calendar day that the provisioned
     * throughput was decreased.</p>
     */
    inline AwsDynamoDbTableProvisionedThroughput& WithNumberOfDecreasesToday(int value) { SetNumberOfDecreasesToday(value); return *this;}


    /**
     * <p>The maximum number of strongly consistent reads consumed per second before
     * DynamoDB returns a <code>ThrottlingException</code>.</p>
     */
    inline int GetReadCapacityUnits() const{ return m_readCapacityUnits; }

    /**
     * <p>The maximum number of strongly consistent reads consumed per second before
     * DynamoDB returns a <code>ThrottlingException</code>.</p>
     */
    inline bool ReadCapacityUnitsHasBeenSet() const { return m_readCapacityUnitsHasBeenSet; }

    /**
     * <p>The maximum number of strongly consistent reads consumed per second before
     * DynamoDB returns a <code>ThrottlingException</code>.</p>
     */
    inline void SetReadCapacityUnits(int value) { m_readCapacityUnitsHasBeenSet = true; m_readCapacityUnits = value; }

    /**
     * <p>The maximum number of strongly consistent reads consumed per second before
     * DynamoDB returns a <code>ThrottlingException</code>.</p>
     */
    inline AwsDynamoDbTableProvisionedThroughput& WithReadCapacityUnits(int value) { SetReadCapacityUnits(value); return *this;}


    /**
     * <p>The maximum number of writes consumed per second before DynamoDB returns a
     * <code>ThrottlingException</code>.</p>
     */
    inline int GetWriteCapacityUnits() const{ return m_writeCapacityUnits; }

    /**
     * <p>The maximum number of writes consumed per second before DynamoDB returns a
     * <code>ThrottlingException</code>.</p>
     */
    inline bool WriteCapacityUnitsHasBeenSet() const { return m_writeCapacityUnitsHasBeenSet; }

    /**
     * <p>The maximum number of writes consumed per second before DynamoDB returns a
     * <code>ThrottlingException</code>.</p>
     */
    inline void SetWriteCapacityUnits(int value) { m_writeCapacityUnitsHasBeenSet = true; m_writeCapacityUnits = value; }

    /**
     * <p>The maximum number of writes consumed per second before DynamoDB returns a
     * <code>ThrottlingException</code>.</p>
     */
    inline AwsDynamoDbTableProvisionedThroughput& WithWriteCapacityUnits(int value) { SetWriteCapacityUnits(value); return *this;}

  private:

    Aws::String m_lastDecreaseDateTime;
    bool m_lastDecreaseDateTimeHasBeenSet = false;

    Aws::String m_lastIncreaseDateTime;
    bool m_lastIncreaseDateTimeHasBeenSet = false;

    int m_numberOfDecreasesToday;
    bool m_numberOfDecreasesTodayHasBeenSet = false;

    int m_readCapacityUnits;
    bool m_readCapacityUnitsHasBeenSet = false;

    int m_writeCapacityUnits;
    bool m_writeCapacityUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
