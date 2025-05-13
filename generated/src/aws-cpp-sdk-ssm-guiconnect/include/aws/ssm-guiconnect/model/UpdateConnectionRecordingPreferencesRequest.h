/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-guiconnect/SSMGuiConnect_EXPORTS.h>
#include <aws/ssm-guiconnect/SSMGuiConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-guiconnect/model/ConnectionRecordingPreferences.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SSMGuiConnect
{
namespace Model
{

  /**
   */
  class UpdateConnectionRecordingPreferencesRequest : public SSMGuiConnectRequest
  {
  public:
    AWS_SSMGUICONNECT_API UpdateConnectionRecordingPreferencesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConnectionRecordingPreferences"; }

    AWS_SSMGUICONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>User-provided idempotency token.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateConnectionRecordingPreferencesRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of preferences used for recording RDP connections in the requesting
     * Amazon Web Services account and Amazon Web Services Region. This includes
     * details such as which S3 bucket recordings are stored in.</p>
     */
    inline const ConnectionRecordingPreferences& GetConnectionRecordingPreferences() const { return m_connectionRecordingPreferences; }
    inline bool ConnectionRecordingPreferencesHasBeenSet() const { return m_connectionRecordingPreferencesHasBeenSet; }
    template<typename ConnectionRecordingPreferencesT = ConnectionRecordingPreferences>
    void SetConnectionRecordingPreferences(ConnectionRecordingPreferencesT&& value) { m_connectionRecordingPreferencesHasBeenSet = true; m_connectionRecordingPreferences = std::forward<ConnectionRecordingPreferencesT>(value); }
    template<typename ConnectionRecordingPreferencesT = ConnectionRecordingPreferences>
    UpdateConnectionRecordingPreferencesRequest& WithConnectionRecordingPreferences(ConnectionRecordingPreferencesT&& value) { SetConnectionRecordingPreferences(std::forward<ConnectionRecordingPreferencesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    ConnectionRecordingPreferences m_connectionRecordingPreferences;
    bool m_connectionRecordingPreferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMGuiConnect
} // namespace Aws
