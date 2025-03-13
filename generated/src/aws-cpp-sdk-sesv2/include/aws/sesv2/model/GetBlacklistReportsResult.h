/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/BlacklistEntry.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SESV2
{
namespace Model
{
  /**
   * <p>An object that contains information about blacklist events.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetBlacklistReportsResponse">AWS
   * API Reference</a></p>
   */
  class GetBlacklistReportsResult
  {
  public:
    AWS_SESV2_API GetBlacklistReportsResult() = default;
    AWS_SESV2_API GetBlacklistReportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetBlacklistReportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains information about a blacklist that one of your
     * dedicated IP addresses appears on.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<BlacklistEntry>>& GetBlacklistReport() const { return m_blacklistReport; }
    template<typename BlacklistReportT = Aws::Map<Aws::String, Aws::Vector<BlacklistEntry>>>
    void SetBlacklistReport(BlacklistReportT&& value) { m_blacklistReportHasBeenSet = true; m_blacklistReport = std::forward<BlacklistReportT>(value); }
    template<typename BlacklistReportT = Aws::Map<Aws::String, Aws::Vector<BlacklistEntry>>>
    GetBlacklistReportsResult& WithBlacklistReport(BlacklistReportT&& value) { SetBlacklistReport(std::forward<BlacklistReportT>(value)); return *this;}
    template<typename BlacklistReportKeyT = Aws::String, typename BlacklistReportValueT = Aws::Vector<BlacklistEntry>>
    GetBlacklistReportsResult& AddBlacklistReport(BlacklistReportKeyT&& key, BlacklistReportValueT&& value) {
      m_blacklistReportHasBeenSet = true; m_blacklistReport.emplace(std::forward<BlacklistReportKeyT>(key), std::forward<BlacklistReportValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBlacklistReportsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::Vector<BlacklistEntry>> m_blacklistReport;
    bool m_blacklistReportHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
