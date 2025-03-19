/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb-session/QLDBSession_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qldb-session/model/TimingInformation.h>
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
namespace QLDBSession
{
namespace Model
{

  /**
   * <p>Contains the details of the started transaction.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-session-2019-07-11/StartTransactionResult">AWS
   * API Reference</a></p>
   */
  class StartTransactionResult
  {
  public:
    AWS_QLDBSESSION_API StartTransactionResult() = default;
    AWS_QLDBSESSION_API StartTransactionResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API StartTransactionResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The transaction ID of the started transaction.</p>
     */
    inline const Aws::String& GetTransactionId() const { return m_transactionId; }
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }
    template<typename TransactionIdT = Aws::String>
    void SetTransactionId(TransactionIdT&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::forward<TransactionIdT>(value); }
    template<typename TransactionIdT = Aws::String>
    StartTransactionResult& WithTransactionId(TransactionIdT&& value) { SetTransactionId(std::forward<TransactionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains server-side performance information for the command.</p>
     */
    inline const TimingInformation& GetTimingInformation() const { return m_timingInformation; }
    inline bool TimingInformationHasBeenSet() const { return m_timingInformationHasBeenSet; }
    template<typename TimingInformationT = TimingInformation>
    void SetTimingInformation(TimingInformationT&& value) { m_timingInformationHasBeenSet = true; m_timingInformation = std::forward<TimingInformationT>(value); }
    template<typename TimingInformationT = TimingInformation>
    StartTransactionResult& WithTimingInformation(TimingInformationT&& value) { SetTimingInformation(std::forward<TimingInformationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;

    TimingInformation m_timingInformation;
    bool m_timingInformationHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
