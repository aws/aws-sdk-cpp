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


    ///@{
    /**
     * <p>The method used to charge for read and write throughput and to manage
     * capacity.</p>
     */
    inline const Aws::String& GetBillingMode() const{ return m_billingMode; }
    inline bool BillingModeHasBeenSet() const { return m_billingModeHasBeenSet; }
    inline void SetBillingMode(const Aws::String& value) { m_billingModeHasBeenSet = true; m_billingMode = value; }
    inline void SetBillingMode(Aws::String&& value) { m_billingModeHasBeenSet = true; m_billingMode = std::move(value); }
    inline void SetBillingMode(const char* value) { m_billingModeHasBeenSet = true; m_billingMode.assign(value); }
    inline AwsDynamoDbTableBillingModeSummary& WithBillingMode(const Aws::String& value) { SetBillingMode(value); return *this;}
    inline AwsDynamoDbTableBillingModeSummary& WithBillingMode(Aws::String&& value) { SetBillingMode(std::move(value)); return *this;}
    inline AwsDynamoDbTableBillingModeSummary& WithBillingMode(const char* value) { SetBillingMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the billing mode is <code>PAY_PER_REQUEST</code>, indicates when the
     * billing mode was set to that value.</p> <p>For more information about the
     * validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetLastUpdateToPayPerRequestDateTime() const{ return m_lastUpdateToPayPerRequestDateTime; }
    inline bool LastUpdateToPayPerRequestDateTimeHasBeenSet() const { return m_lastUpdateToPayPerRequestDateTimeHasBeenSet; }
    inline void SetLastUpdateToPayPerRequestDateTime(const Aws::String& value) { m_lastUpdateToPayPerRequestDateTimeHasBeenSet = true; m_lastUpdateToPayPerRequestDateTime = value; }
    inline void SetLastUpdateToPayPerRequestDateTime(Aws::String&& value) { m_lastUpdateToPayPerRequestDateTimeHasBeenSet = true; m_lastUpdateToPayPerRequestDateTime = std::move(value); }
    inline void SetLastUpdateToPayPerRequestDateTime(const char* value) { m_lastUpdateToPayPerRequestDateTimeHasBeenSet = true; m_lastUpdateToPayPerRequestDateTime.assign(value); }
    inline AwsDynamoDbTableBillingModeSummary& WithLastUpdateToPayPerRequestDateTime(const Aws::String& value) { SetLastUpdateToPayPerRequestDateTime(value); return *this;}
    inline AwsDynamoDbTableBillingModeSummary& WithLastUpdateToPayPerRequestDateTime(Aws::String&& value) { SetLastUpdateToPayPerRequestDateTime(std::move(value)); return *this;}
    inline AwsDynamoDbTableBillingModeSummary& WithLastUpdateToPayPerRequestDateTime(const char* value) { SetLastUpdateToPayPerRequestDateTime(value); return *this;}
    ///@}
  private:

    Aws::String m_billingMode;
    bool m_billingModeHasBeenSet = false;

    Aws::String m_lastUpdateToPayPerRequestDateTime;
    bool m_lastUpdateToPayPerRequestDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
