/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-scep/PcaConnectorScep_EXPORTS.h>
#include <aws/pca-connector-scep/PcaConnectorScepRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PcaConnectorScep
{
namespace Model
{

  /**
   */
  class GetConnectorRequest : public PcaConnectorScepRequest
  {
  public:
    AWS_PCACONNECTORSCEP_API GetConnectorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetConnector"; }

    AWS_PCACONNECTORSCEP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline const Aws::String& GetConnectorArn() const { return m_connectorArn; }
    inline bool ConnectorArnHasBeenSet() const { return m_connectorArnHasBeenSet; }
    template<typename ConnectorArnT = Aws::String>
    void SetConnectorArn(ConnectorArnT&& value) { m_connectorArnHasBeenSet = true; m_connectorArn = std::forward<ConnectorArnT>(value); }
    template<typename ConnectorArnT = Aws::String>
    GetConnectorRequest& WithConnectorArn(ConnectorArnT&& value) { SetConnectorArn(std::forward<ConnectorArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorArn;
    bool m_connectorArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorScep
} // namespace Aws
