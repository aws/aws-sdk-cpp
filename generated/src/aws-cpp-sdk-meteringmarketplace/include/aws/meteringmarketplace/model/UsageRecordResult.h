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
    AWS_MARKETPLACEMETERING_API UsageRecordResult() = default;
    AWS_MARKETPLACEMETERING_API UsageRecordResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACEMETERING_API UsageRecordResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACEMETERING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>UsageRecord</code> that was part of the
     * <code>BatchMeterUsage</code> request.</p>
     */
    inline const UsageRecord& GetUsageRecord() const { return m_usageRecord; }
    inline bool UsageRecordHasBeenSet() const { return m_usageRecordHasBeenSet; }
    template<typename UsageRecordT = UsageRecord>
    void SetUsageRecord(UsageRecordT&& value) { m_usageRecordHasBeenSet = true; m_usageRecord = std::forward<UsageRecordT>(value); }
    template<typename UsageRecordT = UsageRecord>
    UsageRecordResult& WithUsageRecord(UsageRecordT&& value) { SetUsageRecord(std::forward<UsageRecordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>MeteringRecordId</code> is a unique identifier for this metering
     * event.</p>
     */
    inline const Aws::String& GetMeteringRecordId() const { return m_meteringRecordId; }
    inline bool MeteringRecordIdHasBeenSet() const { return m_meteringRecordIdHasBeenSet; }
    template<typename MeteringRecordIdT = Aws::String>
    void SetMeteringRecordId(MeteringRecordIdT&& value) { m_meteringRecordIdHasBeenSet = true; m_meteringRecordId = std::forward<MeteringRecordIdT>(value); }
    template<typename MeteringRecordIdT = Aws::String>
    UsageRecordResult& WithMeteringRecordId(MeteringRecordIdT&& value) { SetMeteringRecordId(std::forward<MeteringRecordIdT>(value)); return *this;}
    ///@}

    ///@{
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
     * subscribes to your product.</p> </li> <li> <p>The customer's Amazon Web Services
     * account was suspended.</p> </li> </ul> </li> <li> <p> <i>DuplicateRecord</i>-
     * Indicates that the <code>UsageRecord</code> was invalid and not honored. A
     * previously metered <code>UsageRecord</code> had the same customer, dimension,
     * and time, but a different quantity.</p> </li> </ul>
     */
    inline UsageRecordResultStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(UsageRecordResultStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UsageRecordResult& WithStatus(UsageRecordResultStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    UsageRecord m_usageRecord;
    bool m_usageRecordHasBeenSet = false;

    Aws::String m_meteringRecordId;
    bool m_meteringRecordIdHasBeenSet = false;

    UsageRecordResultStatus m_status{UsageRecordResultStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws
