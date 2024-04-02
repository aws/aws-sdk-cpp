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
   * <p>Provides information about the billing for read/write capacity on the
   * table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsDynamoDbTableBillingModeSummary">AWS
   * API Reference</a></p>
   */
  class AwsDynamoDbTableBillingModeSummary
  {
  public:
    AWS_SECURITYHUB_API AwsDynamoDbTableBillingModeSummary();
    AWS_SECURITYHUB_API AwsDynamoDbTableBillingModeSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsDynamoDbTableBillingModeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The method used to charge for read and write throughput and to manage
     * capacity.</p>
     */
    inline const Aws::String& GetBillingMode() const{ return m_billingMode; }

    /**
     * <p>The method used to charge for read and write throughput and to manage
     * capacity.</p>
     */
    inline bool BillingModeHasBeenSet() const { return m_billingModeHasBeenSet; }

    /**
     * <p>The method used to charge for read and write throughput and to manage
     * capacity.</p>
     */
    inline void SetBillingMode(const Aws::String& value) { m_billingModeHasBeenSet = true; m_billingMode = value; }

    /**
     * <p>The method used to charge for read and write throughput and to manage
     * capacity.</p>
     */
    inline void SetBillingMode(Aws::String&& value) { m_billingModeHasBeenSet = true; m_billingMode = std::move(value); }

    /**
     * <p>The method used to charge for read and write throughput and to manage
     * capacity.</p>
     */
    inline void SetBillingMode(const char* value) { m_billingModeHasBeenSet = true; m_billingMode.assign(value); }

    /**
     * <p>The method used to charge for read and write throughput and to manage
     * capacity.</p>
     */
    inline AwsDynamoDbTableBillingModeSummary& WithBillingMode(const Aws::String& value) { SetBillingMode(value); return *this;}

    /**
     * <p>The method used to charge for read and write throughput and to manage
     * capacity.</p>
     */
    inline AwsDynamoDbTableBillingModeSummary& WithBillingMode(Aws::String&& value) { SetBillingMode(std::move(value)); return *this;}

    /**
     * <p>The method used to charge for read and write throughput and to manage
     * capacity.</p>
     */
    inline AwsDynamoDbTableBillingModeSummary& WithBillingMode(const char* value) { SetBillingMode(value); return *this;}


    /**
     * <p>If the billing mode is <code>PAY_PER_REQUEST</code>, indicates when the
     * billing mode was set to that value.</p> <p>This field accepts only the specified
     * formats. Timestamps can end with <code>Z</code> or <code>("+" / "-") time-hour
     * [":" time-minute]</code>. The time-secfrac after seconds is limited to a maximum
     * of 9 digits. The offset is bounded by +/-18:00. Here are valid timestamp formats
     * with examples:</p> <ul> <li> <p> <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
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
    inline const Aws::String& GetLastUpdateToPayPerRequestDateTime() const{ return m_lastUpdateToPayPerRequestDateTime; }

    /**
     * <p>If the billing mode is <code>PAY_PER_REQUEST</code>, indicates when the
     * billing mode was set to that value.</p> <p>This field accepts only the specified
     * formats. Timestamps can end with <code>Z</code> or <code>("+" / "-") time-hour
     * [":" time-minute]</code>. The time-secfrac after seconds is limited to a maximum
     * of 9 digits. The offset is bounded by +/-18:00. Here are valid timestamp formats
     * with examples:</p> <ul> <li> <p> <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
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
    inline bool LastUpdateToPayPerRequestDateTimeHasBeenSet() const { return m_lastUpdateToPayPerRequestDateTimeHasBeenSet; }

    /**
     * <p>If the billing mode is <code>PAY_PER_REQUEST</code>, indicates when the
     * billing mode was set to that value.</p> <p>This field accepts only the specified
     * formats. Timestamps can end with <code>Z</code> or <code>("+" / "-") time-hour
     * [":" time-minute]</code>. The time-secfrac after seconds is limited to a maximum
     * of 9 digits. The offset is bounded by +/-18:00. Here are valid timestamp formats
     * with examples:</p> <ul> <li> <p> <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
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
    inline void SetLastUpdateToPayPerRequestDateTime(const Aws::String& value) { m_lastUpdateToPayPerRequestDateTimeHasBeenSet = true; m_lastUpdateToPayPerRequestDateTime = value; }

    /**
     * <p>If the billing mode is <code>PAY_PER_REQUEST</code>, indicates when the
     * billing mode was set to that value.</p> <p>This field accepts only the specified
     * formats. Timestamps can end with <code>Z</code> or <code>("+" / "-") time-hour
     * [":" time-minute]</code>. The time-secfrac after seconds is limited to a maximum
     * of 9 digits. The offset is bounded by +/-18:00. Here are valid timestamp formats
     * with examples:</p> <ul> <li> <p> <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
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
    inline void SetLastUpdateToPayPerRequestDateTime(Aws::String&& value) { m_lastUpdateToPayPerRequestDateTimeHasBeenSet = true; m_lastUpdateToPayPerRequestDateTime = std::move(value); }

    /**
     * <p>If the billing mode is <code>PAY_PER_REQUEST</code>, indicates when the
     * billing mode was set to that value.</p> <p>This field accepts only the specified
     * formats. Timestamps can end with <code>Z</code> or <code>("+" / "-") time-hour
     * [":" time-minute]</code>. The time-secfrac after seconds is limited to a maximum
     * of 9 digits. The offset is bounded by +/-18:00. Here are valid timestamp formats
     * with examples:</p> <ul> <li> <p> <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
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
    inline void SetLastUpdateToPayPerRequestDateTime(const char* value) { m_lastUpdateToPayPerRequestDateTimeHasBeenSet = true; m_lastUpdateToPayPerRequestDateTime.assign(value); }

    /**
     * <p>If the billing mode is <code>PAY_PER_REQUEST</code>, indicates when the
     * billing mode was set to that value.</p> <p>This field accepts only the specified
     * formats. Timestamps can end with <code>Z</code> or <code>("+" / "-") time-hour
     * [":" time-minute]</code>. The time-secfrac after seconds is limited to a maximum
     * of 9 digits. The offset is bounded by +/-18:00. Here are valid timestamp formats
     * with examples:</p> <ul> <li> <p> <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
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
    inline AwsDynamoDbTableBillingModeSummary& WithLastUpdateToPayPerRequestDateTime(const Aws::String& value) { SetLastUpdateToPayPerRequestDateTime(value); return *this;}

    /**
     * <p>If the billing mode is <code>PAY_PER_REQUEST</code>, indicates when the
     * billing mode was set to that value.</p> <p>This field accepts only the specified
     * formats. Timestamps can end with <code>Z</code> or <code>("+" / "-") time-hour
     * [":" time-minute]</code>. The time-secfrac after seconds is limited to a maximum
     * of 9 digits. The offset is bounded by +/-18:00. Here are valid timestamp formats
     * with examples:</p> <ul> <li> <p> <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
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
    inline AwsDynamoDbTableBillingModeSummary& WithLastUpdateToPayPerRequestDateTime(Aws::String&& value) { SetLastUpdateToPayPerRequestDateTime(std::move(value)); return *this;}

    /**
     * <p>If the billing mode is <code>PAY_PER_REQUEST</code>, indicates when the
     * billing mode was set to that value.</p> <p>This field accepts only the specified
     * formats. Timestamps can end with <code>Z</code> or <code>("+" / "-") time-hour
     * [":" time-minute]</code>. The time-secfrac after seconds is limited to a maximum
     * of 9 digits. The offset is bounded by +/-18:00. Here are valid timestamp formats
     * with examples:</p> <ul> <li> <p> <code>YYYY-MM-DDTHH:MM:SSZ</code> (for example,
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
    inline AwsDynamoDbTableBillingModeSummary& WithLastUpdateToPayPerRequestDateTime(const char* value) { SetLastUpdateToPayPerRequestDateTime(value); return *this;}

  private:

    Aws::String m_billingMode;
    bool m_billingModeHasBeenSet = false;

    Aws::String m_lastUpdateToPayPerRequestDateTime;
    bool m_lastUpdateToPayPerRequestDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
