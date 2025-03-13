/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace QApps
{
namespace Model
{
  class ExportQAppSessionDataResult
  {
  public:
    AWS_QAPPS_API ExportQAppSessionDataResult() = default;
    AWS_QAPPS_API ExportQAppSessionDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QAPPS_API ExportQAppSessionDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The link where the exported Q App session data can be downloaded from.</p>
     */
    inline const Aws::String& GetCsvFileLink() const { return m_csvFileLink; }
    template<typename CsvFileLinkT = Aws::String>
    void SetCsvFileLink(CsvFileLinkT&& value) { m_csvFileLinkHasBeenSet = true; m_csvFileLink = std::forward<CsvFileLinkT>(value); }
    template<typename CsvFileLinkT = Aws::String>
    ExportQAppSessionDataResult& WithCsvFileLink(CsvFileLinkT&& value) { SetCsvFileLink(std::forward<CsvFileLinkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the link for the exported Q App session data
     * expires.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
    template<typename ExpiresAtT = Aws::Utils::DateTime>
    void SetExpiresAt(ExpiresAtT&& value) { m_expiresAtHasBeenSet = true; m_expiresAt = std::forward<ExpiresAtT>(value); }
    template<typename ExpiresAtT = Aws::Utils::DateTime>
    ExportQAppSessionDataResult& WithExpiresAt(ExpiresAtT&& value) { SetExpiresAt(std::forward<ExpiresAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Q App data collection session.</p>
     */
    inline const Aws::String& GetSessionArn() const { return m_sessionArn; }
    template<typename SessionArnT = Aws::String>
    void SetSessionArn(SessionArnT&& value) { m_sessionArnHasBeenSet = true; m_sessionArn = std::forward<SessionArnT>(value); }
    template<typename SessionArnT = Aws::String>
    ExportQAppSessionDataResult& WithSessionArn(SessionArnT&& value) { SetSessionArn(std::forward<SessionArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ExportQAppSessionDataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_csvFileLink;
    bool m_csvFileLinkHasBeenSet = false;

    Aws::Utils::DateTime m_expiresAt{};
    bool m_expiresAtHasBeenSet = false;

    Aws::String m_sessionArn;
    bool m_sessionArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
