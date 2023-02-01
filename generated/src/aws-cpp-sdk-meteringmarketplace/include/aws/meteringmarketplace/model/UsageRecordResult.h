/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/meteringmarketplace/MarketplaceMetering_EXPORTS.h>
#include <aws/meteringmarketplace/model/UsageRecord.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/meteringmarketplace/model/UsageRecordResultStatus.h>
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
namespace MarketplaceMetering
{
namespace Model
{

  /**
   * <p>A <code>UsageRecordResult</code> indicates the status of a given
   * <code>UsageRecord</code> processed by
   * <code>BatchMeterUsage</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/UsageRecordResult">AWS
   * API Reference</a></p>
   */
  class UsageRecordResult
  {
  public:
    AWS_MARKETPLACEMETERING_API UsageRecordResult();
    AWS_MARKETPLACEMETERING_API UsageRecordResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACEMETERING_API UsageRecordResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACEMETERING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>UsageRecord</code> that was part of the
     * <code>BatchMeterUsage</code> request.</p>
     */
    inline const UsageRecord& GetUsageRecord() const{ return m_usageRecord; }

    /**
     * <p>The <code>UsageRecord</code> that was part of the
     * <code>BatchMeterUsage</code> request.</p>
     */
    inline bool UsageRecordHasBeenSet() const { return m_usageRecordHasBeenSet; }

    /**
     * <p>The <code>UsageRecord</code> that was part of the
     * <code>BatchMeterUsage</code> request.</p>
     */
    inline void SetUsageRecord(const UsageRecord& value) { m_usageRecordHasBeenSet = true; m_usageRecord = value; }

    /**
     * <p>The <code>UsageRecord</code> that was part of the
     * <code>BatchMeterUsage</code> request.</p>
     */
    inline void SetUsageRecord(UsageRecord&& value) { m_usageRecordHasBeenSet = true; m_usageRecord = std::move(value); }

    /**
     * <p>The <code>UsageRecord</code> that was part of the
     * <code>BatchMeterUsage</code> request.</p>
     */
    inline UsageRecordResult& WithUsageRecord(const UsageRecord& value) { SetUsageRecord(value); return *this;}

    /**
     * <p>The <code>UsageRecord</code> that was part of the
     * <code>BatchMeterUsage</code> request.</p>
     */
    inline UsageRecordResult& WithUsageRecord(UsageRecord&& value) { SetUsageRecord(std::move(value)); return *this;}


    /**
     * <p>The <code>MeteringRecordId</code> is a unique identifier for this metering
     * event.</p>
     */
    inline const Aws::String& GetMeteringRecordId() const{ return m_meteringRecordId; }

    /**
     * <p>The <code>MeteringRecordId</code> is a unique identifier for this metering
     * event.</p>
     */
    inline bool MeteringRecordIdHasBeenSet() const { return m_meteringRecordIdHasBeenSet; }

    /**
     * <p>The <code>MeteringRecordId</code> is a unique identifier for this metering
     * event.</p>
     */
    inline void SetMeteringRecordId(const Aws::String& value) { m_meteringRecordIdHasBeenSet = true; m_meteringRecordId = value; }

    /**
     * <p>The <code>MeteringRecordId</code> is a unique identifier for this metering
     * event.</p>
     */
    inline void SetMeteringRecordId(Aws::String&& value) { m_meteringRecordIdHasBeenSet = true; m_meteringRecordId = std::move(value); }

    /**
     * <p>The <code>MeteringRecordId</code> is a unique identifier for this metering
     * event.</p>
     */
    inline void SetMeteringRecordId(const char* value) { m_meteringRecordIdHasBeenSet = true; m_meteringRecordId.assign(value); }

    /**
     * <p>The <code>MeteringRecordId</code> is a unique identifier for this metering
     * event.</p>
     */
    inline UsageRecordResult& WithMeteringRecordId(const Aws::String& value) { SetMeteringRecordId(value); return *this;}

    /**
     * <p>The <code>MeteringRecordId</code> is a unique identifier for this metering
     * event.</p>
     */
    inline UsageRecordResult& WithMeteringRecordId(Aws::String&& value) { SetMeteringRecordId(std::move(value)); return *this;}

    /**
     * <p>The <code>MeteringRecordId</code> is a unique identifier for this metering
     * event.</p>
     */
    inline UsageRecordResult& WithMeteringRecordId(const char* value) { SetMeteringRecordId(value); return *this;}


    /**
     * <p>The <code>UsageRecordResult</code> <code>Status</code> indicates the status
     * of an individual <code>UsageRecord</code> processed by
     * <code>BatchMeterUsage</code>.</p> <ul> <li> <p> <i>Success</i>- The
     * <code>UsageRecord</code> was accepted and honored by
     * <code>BatchMeterUsage</code>.</p> </li> <li> <p> <i>CustomerNotSubscribed</i>-
     * The <code>CustomerIdentifier</code> specified is not able to use your product.
     * The <code>UsageRecord</code> was not honored. There are three causes for this
     * result:</p> <ul> <li> <p>The customer identifier is invalid.</p> </li> <li>
     * <p>The customer identifier provided in the metering record does not have an
     * active agreement or subscription with this product. Future
     * <code>UsageRecords</code> for this customer will fail until the customer
     * subscribes to your product.</p> </li> <li> <p>The customer's AWS account was
     * suspended.</p> </li> </ul> </li> <li> <p> <i>DuplicateRecord</i>- Indicates that
     * the <code>UsageRecord</code> was invalid and not honored. A previously metered
     * <code>UsageRecord</code> had the same customer, dimension, and time, but a
     * different quantity.</p> </li> </ul>
     */
    inline const UsageRecordResultStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The <code>UsageRecordResult</code> <code>Status</code> indicates the status
     * of an individual <code>UsageRecord</code> processed by
     * <code>BatchMeterUsage</code>.</p> <ul> <li> <p> <i>Success</i>- The
     * <code>UsageRecord</code> was accepted and honored by
     * <code>BatchMeterUsage</code>.</p> </li> <li> <p> <i>CustomerNotSubscribed</i>-
     * The <code>CustomerIdentifier</code> specified is not able to use your product.
     * The <code>UsageRecord</code> was not honored. There are three causes for this
     * result:</p> <ul> <li> <p>The customer identifier is invalid.</p> </li> <li>
     * <p>The customer identifier provided in the metering record does not have an
     * active agreement or subscription with this product. Future
     * <code>UsageRecords</code> for this customer will fail until the customer
     * subscribes to your product.</p> </li> <li> <p>The customer's AWS account was
     * suspended.</p> </li> </ul> </li> <li> <p> <i>DuplicateRecord</i>- Indicates that
     * the <code>UsageRecord</code> was invalid and not honored. A previously metered
     * <code>UsageRecord</code> had the same customer, dimension, and time, but a
     * different quantity.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The <code>UsageRecordResult</code> <code>Status</code> indicates the status
     * of an individual <code>UsageRecord</code> processed by
     * <code>BatchMeterUsage</code>.</p> <ul> <li> <p> <i>Success</i>- The
     * <code>UsageRecord</code> was accepted and honored by
     * <code>BatchMeterUsage</code>.</p> </li> <li> <p> <i>CustomerNotSubscribed</i>-
     * The <code>CustomerIdentifier</code> specified is not able to use your product.
     * The <code>UsageRecord</code> was not honored. There are three causes for this
     * result:</p> <ul> <li> <p>The customer identifier is invalid.</p> </li> <li>
     * <p>The customer identifier provided in the metering record does not have an
     * active agreement or subscription with this product. Future
     * <code>UsageRecords</code> for this customer will fail until the customer
     * subscribes to your product.</p> </li> <li> <p>The customer's AWS account was
     * suspended.</p> </li> </ul> </li> <li> <p> <i>DuplicateRecord</i>- Indicates that
     * the <code>UsageRecord</code> was invalid and not honored. A previously metered
     * <code>UsageRecord</code> had the same customer, dimension, and time, but a
     * different quantity.</p> </li> </ul>
     */
    inline void SetStatus(const UsageRecordResultStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The <code>UsageRecordResult</code> <code>Status</code> indicates the status
     * of an individual <code>UsageRecord</code> processed by
     * <code>BatchMeterUsage</code>.</p> <ul> <li> <p> <i>Success</i>- The
     * <code>UsageRecord</code> was accepted and honored by
     * <code>BatchMeterUsage</code>.</p> </li> <li> <p> <i>CustomerNotSubscribed</i>-
     * The <code>CustomerIdentifier</code> specified is not able to use your product.
     * The <code>UsageRecord</code> was not honored. There are three causes for this
     * result:</p> <ul> <li> <p>The customer identifier is invalid.</p> </li> <li>
     * <p>The customer identifier provided in the metering record does not have an
     * active agreement or subscription with this product. Future
     * <code>UsageRecords</code> for this customer will fail until the customer
     * subscribes to your product.</p> </li> <li> <p>The customer's AWS account was
     * suspended.</p> </li> </ul> </li> <li> <p> <i>DuplicateRecord</i>- Indicates that
     * the <code>UsageRecord</code> was invalid and not honored. A previously metered
     * <code>UsageRecord</code> had the same customer, dimension, and time, but a
     * different quantity.</p> </li> </ul>
     */
    inline void SetStatus(UsageRecordResultStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The <code>UsageRecordResult</code> <code>Status</code> indicates the status
     * of an individual <code>UsageRecord</code> processed by
     * <code>BatchMeterUsage</code>.</p> <ul> <li> <p> <i>Success</i>- The
     * <code>UsageRecord</code> was accepted and honored by
     * <code>BatchMeterUsage</code>.</p> </li> <li> <p> <i>CustomerNotSubscribed</i>-
     * The <code>CustomerIdentifier</code> specified is not able to use your product.
     * The <code>UsageRecord</code> was not honored. There are three causes for this
     * result:</p> <ul> <li> <p>The customer identifier is invalid.</p> </li> <li>
     * <p>The customer identifier provided in the metering record does not have an
     * active agreement or subscription with this product. Future
     * <code>UsageRecords</code> for this customer will fail until the customer
     * subscribes to your product.</p> </li> <li> <p>The customer's AWS account was
     * suspended.</p> </li> </ul> </li> <li> <p> <i>DuplicateRecord</i>- Indicates that
     * the <code>UsageRecord</code> was invalid and not honored. A previously metered
     * <code>UsageRecord</code> had the same customer, dimension, and time, but a
     * different quantity.</p> </li> </ul>
     */
    inline UsageRecordResult& WithStatus(const UsageRecordResultStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The <code>UsageRecordResult</code> <code>Status</code> indicates the status
     * of an individual <code>UsageRecord</code> processed by
     * <code>BatchMeterUsage</code>.</p> <ul> <li> <p> <i>Success</i>- The
     * <code>UsageRecord</code> was accepted and honored by
     * <code>BatchMeterUsage</code>.</p> </li> <li> <p> <i>CustomerNotSubscribed</i>-
     * The <code>CustomerIdentifier</code> specified is not able to use your product.
     * The <code>UsageRecord</code> was not honored. There are three causes for this
     * result:</p> <ul> <li> <p>The customer identifier is invalid.</p> </li> <li>
     * <p>The customer identifier provided in the metering record does not have an
     * active agreement or subscription with this product. Future
     * <code>UsageRecords</code> for this customer will fail until the customer
     * subscribes to your product.</p> </li> <li> <p>The customer's AWS account was
     * suspended.</p> </li> </ul> </li> <li> <p> <i>DuplicateRecord</i>- Indicates that
     * the <code>UsageRecord</code> was invalid and not honored. A previously metered
     * <code>UsageRecord</code> had the same customer, dimension, and time, but a
     * different quantity.</p> </li> </ul>
     */
    inline UsageRecordResult& WithStatus(UsageRecordResultStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    UsageRecord m_usageRecord;
    bool m_usageRecordHasBeenSet = false;

    Aws::String m_meteringRecordId;
    bool m_meteringRecordIdHasBeenSet = false;

    UsageRecordResultStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws
