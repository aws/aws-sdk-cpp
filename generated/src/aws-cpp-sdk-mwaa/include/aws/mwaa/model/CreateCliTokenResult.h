/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MWAA
{
namespace Model
{
  class CreateCliTokenResult
  {
  public:
    AWS_MWAA_API CreateCliTokenResult() = default;
    AWS_MWAA_API CreateCliTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MWAA_API CreateCliTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An Airflow CLI login token.</p>
     */
    inline const Aws::String& GetCliToken() const { return m_cliToken; }
    template<typename CliTokenT = Aws::String>
    void SetCliToken(CliTokenT&& value) { m_cliTokenHasBeenSet = true; m_cliToken = std::forward<CliTokenT>(value); }
    template<typename CliTokenT = Aws::String>
    CreateCliTokenResult& WithCliToken(CliTokenT&& value) { SetCliToken(std::forward<CliTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Airflow web server hostname for the environment.</p>
     */
    inline const Aws::String& GetWebServerHostname() const { return m_webServerHostname; }
    template<typename WebServerHostnameT = Aws::String>
    void SetWebServerHostname(WebServerHostnameT&& value) { m_webServerHostnameHasBeenSet = true; m_webServerHostname = std::forward<WebServerHostnameT>(value); }
    template<typename WebServerHostnameT = Aws::String>
    CreateCliTokenResult& WithWebServerHostname(WebServerHostnameT&& value) { SetWebServerHostname(std::forward<WebServerHostnameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateCliTokenResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cliToken;
    bool m_cliTokenHasBeenSet = false;

    Aws::String m_webServerHostname;
    bool m_webServerHostnameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
