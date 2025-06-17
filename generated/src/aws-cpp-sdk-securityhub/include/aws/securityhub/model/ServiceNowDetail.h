/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/ConnectorAuthStatus.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about a ServiceNow ITSM integration.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ServiceNowDetail">AWS
   * API Reference</a></p>
   */
  class ServiceNowDetail
  {
  public:
    AWS_SECURITYHUB_API ServiceNowDetail() = default;
    AWS_SECURITYHUB_API ServiceNowDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ServiceNowDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The instanceName of ServiceNow ITSM.</p>
     */
    inline const Aws::String& GetInstanceName() const { return m_instanceName; }
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }
    template<typename InstanceNameT = Aws::String>
    void SetInstanceName(InstanceNameT&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::forward<InstanceNameT>(value); }
    template<typename InstanceNameT = Aws::String>
    ServiceNowDetail& WithInstanceName(InstanceNameT&& value) { SetInstanceName(std::forward<InstanceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The clientId of ServiceNow ITSM.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    ServiceNowDetail& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the authorization between Jira Cloud and the service.</p>
     */
    inline ConnectorAuthStatus GetAuthStatus() const { return m_authStatus; }
    inline bool AuthStatusHasBeenSet() const { return m_authStatusHasBeenSet; }
    inline void SetAuthStatus(ConnectorAuthStatus value) { m_authStatusHasBeenSet = true; m_authStatus = value; }
    inline ServiceNowDetail& WithAuthStatus(ConnectorAuthStatus value) { SetAuthStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    ConnectorAuthStatus m_authStatus{ConnectorAuthStatus::NOT_SET};
    bool m_authStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
