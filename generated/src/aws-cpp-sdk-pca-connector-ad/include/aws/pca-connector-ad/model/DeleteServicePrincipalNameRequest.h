/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/PcaConnectorAdRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{

  /**
   */
  class DeleteServicePrincipalNameRequest : public PcaConnectorAdRequest
  {
  public:
    AWS_PCACONNECTORAD_API DeleteServicePrincipalNameRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteServicePrincipalName"; }

    AWS_PCACONNECTORAD_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateConnector.html">CreateConnector</a>.</p>
     */
    inline const Aws::String& GetConnectorArn() const{ return m_connectorArn; }
    inline bool ConnectorArnHasBeenSet() const { return m_connectorArnHasBeenSet; }
    inline void SetConnectorArn(const Aws::String& value) { m_connectorArnHasBeenSet = true; m_connectorArn = value; }
    inline void SetConnectorArn(Aws::String&& value) { m_connectorArnHasBeenSet = true; m_connectorArn = std::move(value); }
    inline void SetConnectorArn(const char* value) { m_connectorArnHasBeenSet = true; m_connectorArn.assign(value); }
    inline DeleteServicePrincipalNameRequest& WithConnectorArn(const Aws::String& value) { SetConnectorArn(value); return *this;}
    inline DeleteServicePrincipalNameRequest& WithConnectorArn(Aws::String&& value) { SetConnectorArn(std::move(value)); return *this;}
    inline DeleteServicePrincipalNameRequest& WithConnectorArn(const char* value) { SetConnectorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateDirectoryRegistration.html">CreateDirectoryRegistration</a>.</p>
     */
    inline const Aws::String& GetDirectoryRegistrationArn() const{ return m_directoryRegistrationArn; }
    inline bool DirectoryRegistrationArnHasBeenSet() const { return m_directoryRegistrationArnHasBeenSet; }
    inline void SetDirectoryRegistrationArn(const Aws::String& value) { m_directoryRegistrationArnHasBeenSet = true; m_directoryRegistrationArn = value; }
    inline void SetDirectoryRegistrationArn(Aws::String&& value) { m_directoryRegistrationArnHasBeenSet = true; m_directoryRegistrationArn = std::move(value); }
    inline void SetDirectoryRegistrationArn(const char* value) { m_directoryRegistrationArnHasBeenSet = true; m_directoryRegistrationArn.assign(value); }
    inline DeleteServicePrincipalNameRequest& WithDirectoryRegistrationArn(const Aws::String& value) { SetDirectoryRegistrationArn(value); return *this;}
    inline DeleteServicePrincipalNameRequest& WithDirectoryRegistrationArn(Aws::String&& value) { SetDirectoryRegistrationArn(std::move(value)); return *this;}
    inline DeleteServicePrincipalNameRequest& WithDirectoryRegistrationArn(const char* value) { SetDirectoryRegistrationArn(value); return *this;}
    ///@}
  private:

    Aws::String m_connectorArn;
    bool m_connectorArnHasBeenSet = false;

    Aws::String m_directoryRegistrationArn;
    bool m_directoryRegistrationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
