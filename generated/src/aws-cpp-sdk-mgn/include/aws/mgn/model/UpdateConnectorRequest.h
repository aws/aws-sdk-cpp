/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/ConnectorSsmCommandConfig.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class UpdateConnectorRequest : public MgnRequest
  {
  public:
    AWS_MGN_API UpdateConnectorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConnector"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Update Connector request connector ID.</p>
     */
    inline const Aws::String& GetConnectorID() const { return m_connectorID; }
    inline bool ConnectorIDHasBeenSet() const { return m_connectorIDHasBeenSet; }
    template<typename ConnectorIDT = Aws::String>
    void SetConnectorID(ConnectorIDT&& value) { m_connectorIDHasBeenSet = true; m_connectorID = std::forward<ConnectorIDT>(value); }
    template<typename ConnectorIDT = Aws::String>
    UpdateConnectorRequest& WithConnectorID(ConnectorIDT&& value) { SetConnectorID(std::forward<ConnectorIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update Connector request name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateConnectorRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update Connector request SSM command config.</p>
     */
    inline const ConnectorSsmCommandConfig& GetSsmCommandConfig() const { return m_ssmCommandConfig; }
    inline bool SsmCommandConfigHasBeenSet() const { return m_ssmCommandConfigHasBeenSet; }
    template<typename SsmCommandConfigT = ConnectorSsmCommandConfig>
    void SetSsmCommandConfig(SsmCommandConfigT&& value) { m_ssmCommandConfigHasBeenSet = true; m_ssmCommandConfig = std::forward<SsmCommandConfigT>(value); }
    template<typename SsmCommandConfigT = ConnectorSsmCommandConfig>
    UpdateConnectorRequest& WithSsmCommandConfig(SsmCommandConfigT&& value) { SetSsmCommandConfig(std::forward<SsmCommandConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorID;
    bool m_connectorIDHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ConnectorSsmCommandConfig m_ssmCommandConfig;
    bool m_ssmCommandConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
