/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/timestream-write/model/RejectedRecord.h>
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
namespace TimestreamWrite
{
namespace Model
{

  /**
   * <p> WriteRecords would throw this exception in the following cases: </p> <ul>
   * <li> <p>Records with duplicate data where there are multiple records with the
   * same dimensions, timestamps, and measure names but: </p> <ul> <li> <p>Measure
   * values are different</p> </li> <li> <p>Version is not present in the request
   * <i>or</i> the value of version in the new record is equal to or lower than the
   * existing value</p> </li> </ul> <p> In this case, if Timestream rejects data, the
   * <code>ExistingVersion</code> field in the <code>RejectedRecords</code> response
   * will indicate the current record’s version. To force an update, you can resend
   * the request with a version for the record set to a value greater than the
   * <code>ExistingVersion</code>.</p> </li> <li> <p> Records with timestamps that
   * lie outside the retention duration of the memory store. </p> </li> <li> <p>
   * Records with dimensions or measures that exceed the Timestream defined limits.
   * </p> </li> </ul> <p> For more information, see <a
   * href="https://docs.aws.amazon.com/timestream/latest/developerguide/ts-limits.html">Quotas</a>
   * in the Amazon Timestream Developer Guide. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/RejectedRecordsException">AWS
   * API Reference</a></p>
   */
  class RejectedRecordsException
  {
  public:
    AWS_TIMESTREAMWRITE_API RejectedRecordsException() = default;
    AWS_TIMESTREAMWRITE_API RejectedRecordsException(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API RejectedRecordsException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    RejectedRecordsException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> </p>
     */
    inline const Aws::Vector<RejectedRecord>& GetRejectedRecords() const { return m_rejectedRecords; }
    inline bool RejectedRecordsHasBeenSet() const { return m_rejectedRecordsHasBeenSet; }
    template<typename RejectedRecordsT = Aws::Vector<RejectedRecord>>
    void SetRejectedRecords(RejectedRecordsT&& value) { m_rejectedRecordsHasBeenSet = true; m_rejectedRecords = std::forward<RejectedRecordsT>(value); }
    template<typename RejectedRecordsT = Aws::Vector<RejectedRecord>>
    RejectedRecordsException& WithRejectedRecords(RejectedRecordsT&& value) { SetRejectedRecords(std::forward<RejectedRecordsT>(value)); return *this;}
    template<typename RejectedRecordsT = RejectedRecord>
    RejectedRecordsException& AddRejectedRecords(RejectedRecordsT&& value) { m_rejectedRecordsHasBeenSet = true; m_rejectedRecords.emplace_back(std::forward<RejectedRecordsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<RejectedRecord> m_rejectedRecords;
    bool m_rejectedRecordsHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
