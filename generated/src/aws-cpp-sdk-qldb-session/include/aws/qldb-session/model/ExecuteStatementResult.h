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
    AWS_QLDBSESSION_API ExecuteStatementResult() = default;
    AWS_QLDBSESSION_API ExecuteStatementResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API ExecuteStatementResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the details of the first fetched page.</p>
     */
    inline const Page& GetFirstPage() const { return m_firstPage; }
    inline bool FirstPageHasBeenSet() const { return m_firstPageHasBeenSet; }
    template<typename FirstPageT = Page>
    void SetFirstPage(FirstPageT&& value) { m_firstPageHasBeenSet = true; m_firstPage = std::forward<FirstPageT>(value); }
    template<typename FirstPageT = Page>
    ExecuteStatementResult& WithFirstPage(FirstPageT&& value) { SetFirstPage(std::forward<FirstPageT>(value)); return *this;}
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
    ExecuteStatementResult& WithTimingInformation(TimingInformationT&& value) { SetTimingInformation(std::forward<TimingInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains metrics about the number of I/O requests that were consumed.</p>
     */
    inline const IOUsage& GetConsumedIOs() const { return m_consumedIOs; }
    inline bool ConsumedIOsHasBeenSet() const { return m_consumedIOsHasBeenSet; }
    template<typename ConsumedIOsT = IOUsage>
    void SetConsumedIOs(ConsumedIOsT&& value) { m_consumedIOsHasBeenSet = true; m_consumedIOs = std::forward<ConsumedIOsT>(value); }
    template<typename ConsumedIOsT = IOUsage>
    ExecuteStatementResult& WithConsumedIOs(ConsumedIOsT&& value) { SetConsumedIOs(std::forward<ConsumedIOsT>(value)); return *this;}
    ///@}
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
