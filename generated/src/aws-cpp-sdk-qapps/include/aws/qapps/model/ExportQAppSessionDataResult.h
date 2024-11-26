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
    AWS_QAPPS_API ExportQAppSessionDataResult();
    AWS_QAPPS_API ExportQAppSessionDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QAPPS_API ExportQAppSessionDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The link where the exported Q App session data can be downloaded from.</p>
     */
    inline const Aws::String& GetCsvFileLink() const{ return m_csvFileLink; }
    inline void SetCsvFileLink(const Aws::String& value) { m_csvFileLink = value; }
    inline void SetCsvFileLink(Aws::String&& value) { m_csvFileLink = std::move(value); }
    inline void SetCsvFileLink(const char* value) { m_csvFileLink.assign(value); }
    inline ExportQAppSessionDataResult& WithCsvFileLink(const Aws::String& value) { SetCsvFileLink(value); return *this;}
    inline ExportQAppSessionDataResult& WithCsvFileLink(Aws::String&& value) { SetCsvFileLink(std::move(value)); return *this;}
    inline ExportQAppSessionDataResult& WithCsvFileLink(const char* value) { SetCsvFileLink(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the link for the exported Q App session data
     * expires.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiresAt() const{ return m_expiresAt; }
    inline void SetExpiresAt(const Aws::Utils::DateTime& value) { m_expiresAt = value; }
    inline void SetExpiresAt(Aws::Utils::DateTime&& value) { m_expiresAt = std::move(value); }
    inline ExportQAppSessionDataResult& WithExpiresAt(const Aws::Utils::DateTime& value) { SetExpiresAt(value); return *this;}
    inline ExportQAppSessionDataResult& WithExpiresAt(Aws::Utils::DateTime&& value) { SetExpiresAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Q App data collection session.</p>
     */
    inline const Aws::String& GetSessionArn() const{ return m_sessionArn; }
    inline void SetSessionArn(const Aws::String& value) { m_sessionArn = value; }
    inline void SetSessionArn(Aws::String&& value) { m_sessionArn = std::move(value); }
    inline void SetSessionArn(const char* value) { m_sessionArn.assign(value); }
    inline ExportQAppSessionDataResult& WithSessionArn(const Aws::String& value) { SetSessionArn(value); return *this;}
    inline ExportQAppSessionDataResult& WithSessionArn(Aws::String&& value) { SetSessionArn(std::move(value)); return *this;}
    inline ExportQAppSessionDataResult& WithSessionArn(const char* value) { SetSessionArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ExportQAppSessionDataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ExportQAppSessionDataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ExportQAppSessionDataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_csvFileLink;

    Aws::Utils::DateTime m_expiresAt;

    Aws::String m_sessionArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
