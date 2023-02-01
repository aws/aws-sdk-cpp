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
    AWS_QLDBSESSION_API FetchPageResult();
    AWS_QLDBSESSION_API FetchPageResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API FetchPageResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QLDBSESSION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains details of the fetched page.</p>
     */
    inline const Page& GetPage() const{ return m_page; }

    /**
     * <p>Contains details of the fetched page.</p>
     */
    inline bool PageHasBeenSet() const { return m_pageHasBeenSet; }

    /**
     * <p>Contains details of the fetched page.</p>
     */
    inline void SetPage(const Page& value) { m_pageHasBeenSet = true; m_page = value; }

    /**
     * <p>Contains details of the fetched page.</p>
     */
    inline void SetPage(Page&& value) { m_pageHasBeenSet = true; m_page = std::move(value); }

    /**
     * <p>Contains details of the fetched page.</p>
     */
    inline FetchPageResult& WithPage(const Page& value) { SetPage(value); return *this;}

    /**
     * <p>Contains details of the fetched page.</p>
     */
    inline FetchPageResult& WithPage(Page&& value) { SetPage(std::move(value)); return *this;}


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
    inline FetchPageResult& WithTimingInformation(const TimingInformation& value) { SetTimingInformation(value); return *this;}

    /**
     * <p>Contains server-side performance information for the command.</p>
     */
    inline FetchPageResult& WithTimingInformation(TimingInformation&& value) { SetTimingInformation(std::move(value)); return *this;}


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
    inline FetchPageResult& WithConsumedIOs(const IOUsage& value) { SetConsumedIOs(value); return *this;}

    /**
     * <p>Contains metrics about the number of I/O requests that were consumed.</p>
     */
    inline FetchPageResult& WithConsumedIOs(IOUsage&& value) { SetConsumedIOs(std::move(value)); return *this;}

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
