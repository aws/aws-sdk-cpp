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
  class CreateWebLoginTokenResult
  {
  public:
    AWS_MWAA_API CreateWebLoginTokenResult() = default;
    AWS_MWAA_API CreateWebLoginTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MWAA_API CreateWebLoginTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An Airflow web server login token.</p>
     */
    inline const Aws::String& GetWebToken() const { return m_webToken; }
    template<typename WebTokenT = Aws::String>
    void SetWebToken(WebTokenT&& value) { m_webTokenHasBeenSet = true; m_webToken = std::forward<WebTokenT>(value); }
    template<typename WebTokenT = Aws::String>
    CreateWebLoginTokenResult& WithWebToken(WebTokenT&& value) { SetWebToken(std::forward<WebTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Airflow web server hostname for the environment.</p>
     */
    inline const Aws::String& GetWebServerHostname() const { return m_webServerHostname; }
    template<typename WebServerHostnameT = Aws::String>
    void SetWebServerHostname(WebServerHostnameT&& value) { m_webServerHostnameHasBeenSet = true; m_webServerHostname = std::forward<WebServerHostnameT>(value); }
    template<typename WebServerHostnameT = Aws::String>
    CreateWebLoginTokenResult& WithWebServerHostname(WebServerHostnameT&& value) { SetWebServerHostname(std::forward<WebServerHostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM identity creating the web login token. This might be an
     * IAM user, or an assumed or federated identity. For example,
     * <code>assumed-role/Admin/your-name</code>.</p>
     */
    inline const Aws::String& GetIamIdentity() const { return m_iamIdentity; }
    template<typename IamIdentityT = Aws::String>
    void SetIamIdentity(IamIdentityT&& value) { m_iamIdentityHasBeenSet = true; m_iamIdentity = std::forward<IamIdentityT>(value); }
    template<typename IamIdentityT = Aws::String>
    CreateWebLoginTokenResult& WithIamIdentity(IamIdentityT&& value) { SetIamIdentity(std::forward<IamIdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name of the Apache Airflow identity creating the web login
     * token.</p>
     */
    inline const Aws::String& GetAirflowIdentity() const { return m_airflowIdentity; }
    template<typename AirflowIdentityT = Aws::String>
    void SetAirflowIdentity(AirflowIdentityT&& value) { m_airflowIdentityHasBeenSet = true; m_airflowIdentity = std::forward<AirflowIdentityT>(value); }
    template<typename AirflowIdentityT = Aws::String>
    CreateWebLoginTokenResult& WithAirflowIdentity(AirflowIdentityT&& value) { SetAirflowIdentity(std::forward<AirflowIdentityT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateWebLoginTokenResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_webToken;
    bool m_webTokenHasBeenSet = false;

    Aws::String m_webServerHostname;
    bool m_webServerHostnameHasBeenSet = false;

    Aws::String m_iamIdentity;
    bool m_iamIdentityHasBeenSet = false;

    Aws::String m_airflowIdentity;
    bool m_airflowIdentityHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
