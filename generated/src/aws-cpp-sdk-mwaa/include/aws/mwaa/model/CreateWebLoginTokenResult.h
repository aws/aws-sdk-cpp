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
    AWS_MWAA_API CreateWebLoginTokenResult();
    AWS_MWAA_API CreateWebLoginTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MWAA_API CreateWebLoginTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An Airflow web server login token.</p>
     */
    inline const Aws::String& GetWebToken() const{ return m_webToken; }
    inline void SetWebToken(const Aws::String& value) { m_webToken = value; }
    inline void SetWebToken(Aws::String&& value) { m_webToken = std::move(value); }
    inline void SetWebToken(const char* value) { m_webToken.assign(value); }
    inline CreateWebLoginTokenResult& WithWebToken(const Aws::String& value) { SetWebToken(value); return *this;}
    inline CreateWebLoginTokenResult& WithWebToken(Aws::String&& value) { SetWebToken(std::move(value)); return *this;}
    inline CreateWebLoginTokenResult& WithWebToken(const char* value) { SetWebToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Airflow web server hostname for the environment.</p>
     */
    inline const Aws::String& GetWebServerHostname() const{ return m_webServerHostname; }
    inline void SetWebServerHostname(const Aws::String& value) { m_webServerHostname = value; }
    inline void SetWebServerHostname(Aws::String&& value) { m_webServerHostname = std::move(value); }
    inline void SetWebServerHostname(const char* value) { m_webServerHostname.assign(value); }
    inline CreateWebLoginTokenResult& WithWebServerHostname(const Aws::String& value) { SetWebServerHostname(value); return *this;}
    inline CreateWebLoginTokenResult& WithWebServerHostname(Aws::String&& value) { SetWebServerHostname(std::move(value)); return *this;}
    inline CreateWebLoginTokenResult& WithWebServerHostname(const char* value) { SetWebServerHostname(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM identity creating the web login token. This might be an
     * IAM user, or an assumed or federated identity. For example,
     * <code>assumed-role/Admin/your-name</code>.</p>
     */
    inline const Aws::String& GetIamIdentity() const{ return m_iamIdentity; }
    inline void SetIamIdentity(const Aws::String& value) { m_iamIdentity = value; }
    inline void SetIamIdentity(Aws::String&& value) { m_iamIdentity = std::move(value); }
    inline void SetIamIdentity(const char* value) { m_iamIdentity.assign(value); }
    inline CreateWebLoginTokenResult& WithIamIdentity(const Aws::String& value) { SetIamIdentity(value); return *this;}
    inline CreateWebLoginTokenResult& WithIamIdentity(Aws::String&& value) { SetIamIdentity(std::move(value)); return *this;}
    inline CreateWebLoginTokenResult& WithIamIdentity(const char* value) { SetIamIdentity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name of the Apache Airflow identity creating the web login
     * token.</p>
     */
    inline const Aws::String& GetAirflowIdentity() const{ return m_airflowIdentity; }
    inline void SetAirflowIdentity(const Aws::String& value) { m_airflowIdentity = value; }
    inline void SetAirflowIdentity(Aws::String&& value) { m_airflowIdentity = std::move(value); }
    inline void SetAirflowIdentity(const char* value) { m_airflowIdentity.assign(value); }
    inline CreateWebLoginTokenResult& WithAirflowIdentity(const Aws::String& value) { SetAirflowIdentity(value); return *this;}
    inline CreateWebLoginTokenResult& WithAirflowIdentity(Aws::String&& value) { SetAirflowIdentity(std::move(value)); return *this;}
    inline CreateWebLoginTokenResult& WithAirflowIdentity(const char* value) { SetAirflowIdentity(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateWebLoginTokenResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateWebLoginTokenResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateWebLoginTokenResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_webToken;

    Aws::String m_webServerHostname;

    Aws::String m_iamIdentity;

    Aws::String m_airflowIdentity;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
