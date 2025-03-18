/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/LoggingEnabled.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{
  class GetBucketLoggingResult
  {
  public:
    AWS_S3_API GetBucketLoggingResult() = default;
    AWS_S3_API GetBucketLoggingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API GetBucketLoggingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const LoggingEnabled& GetLoggingEnabled() const { return m_loggingEnabled; }
    template<typename LoggingEnabledT = LoggingEnabled>
    void SetLoggingEnabled(LoggingEnabledT&& value) { m_loggingEnabledHasBeenSet = true; m_loggingEnabled = std::forward<LoggingEnabledT>(value); }
    template<typename LoggingEnabledT = LoggingEnabled>
    GetBucketLoggingResult& WithLoggingEnabled(LoggingEnabledT&& value) { SetLoggingEnabled(std::forward<LoggingEnabledT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBucketLoggingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    LoggingEnabled m_loggingEnabled;
    bool m_loggingEnabledHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
