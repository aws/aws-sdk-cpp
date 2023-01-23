/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb-session/QLDBSession_EXPORTS.h>
#include <aws/qldb-session/model/Page.h>
#include <aws/qldb-session/model/TimingInformation.h>
#include <aws/qldb-session/model/IOUsage.h>
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
   * <p>Contains the details of the executed statement.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-session-2019-07-11/ExecuteStatementResult">AWS
   * API Reference</a></p>
   */
  class ExecuteStatementResult
  {
  public:
    AWS_QLDBSESSION_API ExecuteStatementResult();
    AWS_QLDBSESSION_API ExecuteStatementResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API ExecuteStatementResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains the details of the first fetched page.</p>
     */
    inline const Page& GetFirstPage() const{ return m_firstPage; }

    /**
     * <p>Contains the details of the first fetched page.</p>
     */
    inline bool FirstPageHasBeenSet() const { return m_firstPageHasBeenSet; }

    /**
     * <p>Contains the details of the first fetched page.</p>
     */
    inline void SetFirstPage(const Page& value) { m_firstPageHasBeenSet = true; m_firstPage = value; }

    /**
     * <p>Contains the details of the first fetched page.</p>
     */
    inline void SetFirstPage(Page&& value) { m_firstPageHasBeenSet = true; m_firstPage = std::move(value); }

    /**
     * <p>Contains the details of the first fetched page.</p>
     */
    inline ExecuteStatementResult& WithFirstPage(const Page& value) { SetFirstPage(value); return *this;}

    /**
     * <p>Contains the details of the first fetched page.</p>
     */
    inline ExecuteStatementResult& WithFirstPage(Page&& value) { SetFirstPage(std::move(value)); return *this;}


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
    inline ExecuteStatementResult& WithTimingInformation(const TimingInformation& value) { SetTimingInformation(value); return *this;}

    /**
     * <p>Contains server-side performance information for the command.</p>
     */
    inline ExecuteStatementResult& WithTimingInformation(TimingInformation&& value) { SetTimingInformation(std::move(value)); return *this;}


    /**
     * <p>Contains metrics about the number of I/O requests that were consumed.</p>
     */
    inline const IOUsage& GetConsumedIOs() const{ return m_consumedIOs; }

    /**
     * <p>Contains metrics about the number of I/O requests that were consumed.</p>
     */
    inline bool ConsumedIOsHasBeenSet() const { return m_consumedIOsHasBeenSet; }

    /**
     * <p>Contains metrics about the number of I/O requests that were consumed.</p>
     */
    inline void SetConsumedIOs(const IOUsage& value) { m_consumedIOsHasBeenSet = true; m_consumedIOs = value; }

    /**
     * <p>Contains metrics about the number of I/O requests that were consumed.</p>
     */
    inline void SetConsumedIOs(IOUsage&& value) { m_consumedIOsHasBeenSet = true; m_consumedIOs = std::move(value); }

    /**
     * <p>Contains metrics about the number of I/O requests that were consumed.</p>
     */
    inline ExecuteStatementResult& WithConsumedIOs(const IOUsage& value) { SetConsumedIOs(value); return *this;}

    /**
     * <p>Contains metrics about the number of I/O requests that were consumed.</p>
     */
    inline ExecuteStatementResult& WithConsumedIOs(IOUsage&& value) { SetConsumedIOs(std::move(value)); return *this;}

  private:

    Page m_firstPage;
    bool m_firstPageHasBeenSet = false;

    TimingInformation m_timingInformation;
    bool m_timingInformationHasBeenSet = false;

    IOUsage m_consumedIOs;
    bool m_consumedIOsHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
