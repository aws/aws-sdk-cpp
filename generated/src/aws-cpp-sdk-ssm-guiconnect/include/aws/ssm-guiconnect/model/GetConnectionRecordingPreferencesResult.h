/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-guiconnect/SSMGuiConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-guiconnect/model/ConnectionRecordingPreferences.h>
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
namespace SSMGuiConnect
{
namespace Model
{
  class GetConnectionRecordingPreferencesResult
  {
  public:
    AWS_SSMGUICONNECT_API GetConnectionRecordingPreferencesResult() = default;
    AWS_SSMGUICONNECT_API GetConnectionRecordingPreferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMGUICONNECT_API GetConnectionRecordingPreferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Service-provided idempotency token.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    GetConnectionRecordingPreferencesResult& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of preferences used for recording RDP connections in the requesting
     * Amazon Web Services account and Amazon Web Services Region. This includes
     * details such as which S3 bucket recordings are stored in.</p>
     */
    inline const ConnectionRecordingPreferences& GetConnectionRecordingPreferences() const { return m_connectionRecordingPreferences; }
    template<typename ConnectionRecordingPreferencesT = ConnectionRecordingPreferences>
    void SetConnectionRecordingPreferences(ConnectionRecordingPreferencesT&& value) { m_connectionRecordingPreferencesHasBeenSet = true; m_connectionRecordingPreferences = std::forward<ConnectionRecordingPreferencesT>(value); }
    template<typename ConnectionRecordingPreferencesT = ConnectionRecordingPreferences>
    GetConnectionRecordingPreferencesResult& WithConnectionRecordingPreferences(ConnectionRecordingPreferencesT&& value) { SetConnectionRecordingPreferences(std::forward<ConnectionRecordingPreferencesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetConnectionRecordingPreferencesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    ConnectionRecordingPreferences m_connectionRecordingPreferences;
    bool m_connectionRecordingPreferencesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMGuiConnect
} // namespace Aws
