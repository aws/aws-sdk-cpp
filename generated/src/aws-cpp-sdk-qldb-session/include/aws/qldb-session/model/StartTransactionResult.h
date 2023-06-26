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
    AWS_QLDBSESSION_API StartTransactionResult();
    AWS_QLDBSESSION_API StartTransactionResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API StartTransactionResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The transaction ID of the started transaction.</p>
     */
    inline const Aws::String& GetTransactionId() const{ return m_transactionId; }

    /**
     * <p>The transaction ID of the started transaction.</p>
     */
    inline bool TransactionIdHasBeenSet() const { return m_transactionIdHasBeenSet; }

    /**
     * <p>The transaction ID of the started transaction.</p>
     */
    inline void SetTransactionId(const Aws::String& value) { m_transactionIdHasBeenSet = true; m_transactionId = value; }

    /**
     * <p>The transaction ID of the started transaction.</p>
     */
    inline void SetTransactionId(Aws::String&& value) { m_transactionIdHasBeenSet = true; m_transactionId = std::move(value); }

    /**
     * <p>The transaction ID of the started transaction.</p>
     */
    inline void SetTransactionId(const char* value) { m_transactionIdHasBeenSet = true; m_transactionId.assign(value); }

    /**
     * <p>The transaction ID of the started transaction.</p>
     */
    inline StartTransactionResult& WithTransactionId(const Aws::String& value) { SetTransactionId(value); return *this;}

    /**
     * <p>The transaction ID of the started transaction.</p>
     */
    inline StartTransactionResult& WithTransactionId(Aws::String&& value) { SetTransactionId(std::move(value)); return *this;}

    /**
     * <p>The transaction ID of the started transaction.</p>
     */
    inline StartTransactionResult& WithTransactionId(const char* value) { SetTransactionId(value); return *this;}


    /**
     * <p>Contains server-side performance information for the command.</p>
     */
    inline const TimingInformation& GetTimingInformation() const{ return m_timingInformation; }

    /**
     * <p>Contains server-side performance information for the command.</p>
     */
    inline bool TimingInformationHasBeenSet() const { return m_timingInformationHasBeenSet; }

    /**
     * <p>Contains server-side performance information for the command.</p>
     */
    inline void SetTimingInformation(const TimingInformation& value) { m_timingInformationHasBeenSet = true; m_timingInformation = value; }

    /**
     * <p>Contains server-side performance information for the command.</p>
     */
    inline void SetTimingInformation(TimingInformation&& value) { m_timingInformationHasBeenSet = true; m_timingInformation = std::move(value); }

    /**
     * <p>Contains server-side performance information for the command.</p>
     */
    inline StartTransactionResult& WithTimingInformation(const TimingInformation& value) { SetTimingInformation(value); return *this;}

    /**
     * <p>Contains server-side performance information for the command.</p>
     */
    inline StartTransactionResult& WithTimingInformation(TimingInformation&& value) { SetTimingInformation(std::move(value)); return *this;}

  private:

    Aws::String m_transactionId;
    bool m_transactionIdHasBeenSet = false;

    TimingInformation m_timingInformation;
    bool m_timingInformationHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
