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


    ///@{
    /**
     * <p>Indicates when the provisioned throughput was last decreased.</p> <p>For more
     * information about the validation and formatting of timestamp fields in Security
     * Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetLastDecreaseDateTime() const{ return m_lastDecreaseDateTime; }
    inline bool LastDecreaseDateTimeHasBeenSet() const { return m_lastDecreaseDateTimeHasBeenSet; }
    inline void SetLastDecreaseDateTime(const Aws::String& value) { m_lastDecreaseDateTimeHasBeenSet = true; m_lastDecreaseDateTime = value; }
    inline void SetLastDecreaseDateTime(Aws::String&& value) { m_lastDecreaseDateTimeHasBeenSet = true; m_lastDecreaseDateTime = std::move(value); }
    inline void SetLastDecreaseDateTime(const char* value) { m_lastDecreaseDateTimeHasBeenSet = true; m_lastDecreaseDateTime.assign(value); }
    inline AwsDynamoDbTableProvisionedThroughput& WithLastDecreaseDateTime(const Aws::String& value) { SetLastDecreaseDateTime(value); return *this;}
    inline AwsDynamoDbTableProvisionedThroughput& WithLastDecreaseDateTime(Aws::String&& value) { SetLastDecreaseDateTime(std::move(value)); return *this;}
    inline AwsDynamoDbTableProvisionedThroughput& WithLastDecreaseDateTime(const char* value) { SetLastDecreaseDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the provisioned throughput was last increased.</p> <p>For more
     * information about the validation and formatting of timestamp fields in Security
     * Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetLastIncreaseDateTime() const{ return m_lastIncreaseDateTime; }
    inline bool LastIncreaseDateTimeHasBeenSet() const { return m_lastIncreaseDateTimeHasBeenSet; }
    inline void SetLastIncreaseDateTime(const Aws::String& value) { m_lastIncreaseDateTimeHasBeenSet = true; m_lastIncreaseDateTime = value; }
    inline void SetLastIncreaseDateTime(Aws::String&& value) { m_lastIncreaseDateTimeHasBeenSet = true; m_lastIncreaseDateTime = std::move(value); }
    inline void SetLastIncreaseDateTime(const char* value) { m_lastIncreaseDateTimeHasBeenSet = true; m_lastIncreaseDateTime.assign(value); }
    inline AwsDynamoDbTableProvisionedThroughput& WithLastIncreaseDateTime(const Aws::String& value) { SetLastIncreaseDateTime(value); return *this;}
    inline AwsDynamoDbTableProvisionedThroughput& WithLastIncreaseDateTime(Aws::String&& value) { SetLastIncreaseDateTime(std::move(value)); return *this;}
    inline AwsDynamoDbTableProvisionedThroughput& WithLastIncreaseDateTime(const char* value) { SetLastIncreaseDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of times during the current UTC calendar day that the provisioned
     * throughput was decreased.</p>
     */
    inline int GetNumberOfDecreasesToday() const{ return m_numberOfDecreasesToday; }
    inline bool NumberOfDecreasesTodayHasBeenSet() const { return m_numberOfDecreasesTodayHasBeenSet; }
    inline void SetNumberOfDecreasesToday(int value) { m_numberOfDecreasesTodayHasBeenSet = true; m_numberOfDecreasesToday = value; }
    inline AwsDynamoDbTableProvisionedThroughput& WithNumberOfDecreasesToday(int value) { SetNumberOfDecreasesToday(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of strongly consistent reads consumed per second before
     * DynamoDB returns a <code>ThrottlingException</code>.</p>
     */
    inline int GetReadCapacityUnits() const{ return m_readCapacityUnits; }
    inline bool ReadCapacityUnitsHasBeenSet() const { return m_readCapacityUnitsHasBeenSet; }
    inline void SetReadCapacityUnits(int value) { m_readCapacityUnitsHasBeenSet = true; m_readCapacityUnits = value; }
    inline AwsDynamoDbTableProvisionedThroughput& WithReadCapacityUnits(int value) { SetReadCapacityUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of writes consumed per second before DynamoDB returns a
     * <code>ThrottlingException</code>.</p>
     */
    inline int GetWriteCapacityUnits() const{ return m_writeCapacityUnits; }
    inline bool WriteCapacityUnitsHasBeenSet() const { return m_writeCapacityUnitsHasBeenSet; }
    inline void SetWriteCapacityUnits(int value) { m_writeCapacityUnitsHasBeenSet = true; m_writeCapacityUnits = value; }
    inline AwsDynamoDbTableProvisionedThroughput& WithWriteCapacityUnits(int value) { SetWriteCapacityUnits(value); return *this;}
    ///@}
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
