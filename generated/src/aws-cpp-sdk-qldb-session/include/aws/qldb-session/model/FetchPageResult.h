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
   * <p>Contains the page that was fetched.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-session-2019-07-11/FetchPageResult">AWS
   * API Reference</a></p>
   */
  class FetchPageResult
  {
  public:
    AWS_QLDBSESSION_API FetchPageResult() = default;
    AWS_QLDBSESSION_API FetchPageResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API FetchPageResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains details of the fetched page.</p>
     */
    inline const Page& GetPage() const { return m_page; }
    inline bool PageHasBeenSet() const { return m_pageHasBeenSet; }
    template<typename PageT = Page>
    void SetPage(PageT&& value) { m_pageHasBeenSet = true; m_page = std::forward<PageT>(value); }
    template<typename PageT = Page>
    FetchPageResult& WithPage(PageT&& value) { SetPage(std::forward<PageT>(value)); return *this;}
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
    FetchPageResult& WithTimingInformation(TimingInformationT&& value) { SetTimingInformation(std::forward<TimingInformationT>(value)); return *this;}
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
    FetchPageResult& WithConsumedIOs(ConsumedIOsT&& value) { SetConsumedIOs(std::forward<ConsumedIOsT>(value)); return *this;}
    ///@}
  private:

    Page m_page;
    bool m_pageHasBeenSet = false;

    TimingInformation m_timingInformation;
    bool m_timingInformationHasBeenSet = false;

    IOUsage m_consumedIOs;
    bool m_consumedIOsHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
