/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>A JSON object containing one or more of the following fields:</p> <ul> <li>
   * <p> <a>UpdateChapCredentialsInput$InitiatorName</a> </p> </li> <li> <p>
   * <a>UpdateChapCredentialsInput$SecretToAuthenticateInitiator</a> </p> </li> <li>
   * <p> <a>UpdateChapCredentialsInput$SecretToAuthenticateTarget</a> </p> </li> <li>
   * <p> <a>UpdateChapCredentialsInput$TargetARN</a> </p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/UpdateChapCredentialsInput">AWS
   * API Reference</a></p>
   */
  class UpdateChapCredentialsRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API UpdateChapCredentialsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateChapCredentials"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the iSCSI volume target. Use the
     * <a>DescribeStorediSCSIVolumes</a> operation to return the TargetARN for
     * specified VolumeARN.</p>
     */
    inline const Aws::String& GetTargetARN() const { return m_targetARN; }
    inline bool TargetARNHasBeenSet() const { return m_targetARNHasBeenSet; }
    template<typename TargetARNT = Aws::String>
    void SetTargetARN(TargetARNT&& value) { m_targetARNHasBeenSet = true; m_targetARN = std::forward<TargetARNT>(value); }
    template<typename TargetARNT = Aws::String>
    UpdateChapCredentialsRequest& WithTargetARN(TargetARNT&& value) { SetTargetARN(std::forward<TargetARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secret key that the initiator (for example, the Windows client) must
     * provide to participate in mutual CHAP with the target.</p>  <p>The secret
     * key must be between 12 and 16 bytes when encoded in UTF-8.</p> 
     */
    inline const Aws::String& GetSecretToAuthenticateInitiator() const { return m_secretToAuthenticateInitiator; }
    inline bool SecretToAuthenticateInitiatorHasBeenSet() const { return m_secretToAuthenticateInitiatorHasBeenSet; }
    template<typename SecretToAuthenticateInitiatorT = Aws::String>
    void SetSecretToAuthenticateInitiator(SecretToAuthenticateInitiatorT&& value) { m_secretToAuthenticateInitiatorHasBeenSet = true; m_secretToAuthenticateInitiator = std::forward<SecretToAuthenticateInitiatorT>(value); }
    template<typename SecretToAuthenticateInitiatorT = Aws::String>
    UpdateChapCredentialsRequest& WithSecretToAuthenticateInitiator(SecretToAuthenticateInitiatorT&& value) { SetSecretToAuthenticateInitiator(std::forward<SecretToAuthenticateInitiatorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The iSCSI initiator that connects to the target.</p>
     */
    inline const Aws::String& GetInitiatorName() const { return m_initiatorName; }
    inline bool InitiatorNameHasBeenSet() const { return m_initiatorNameHasBeenSet; }
    template<typename InitiatorNameT = Aws::String>
    void SetInitiatorName(InitiatorNameT&& value) { m_initiatorNameHasBeenSet = true; m_initiatorName = std::forward<InitiatorNameT>(value); }
    template<typename InitiatorNameT = Aws::String>
    UpdateChapCredentialsRequest& WithInitiatorName(InitiatorNameT&& value) { SetInitiatorName(std::forward<InitiatorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secret key that the target must provide to participate in mutual CHAP
     * with the initiator (e.g. Windows client).</p> <p>Byte constraints: Minimum bytes
     * of 12. Maximum bytes of 16.</p>  <p>The secret key must be between 12 and
     * 16 bytes when encoded in UTF-8.</p> 
     */
    inline const Aws::String& GetSecretToAuthenticateTarget() const { return m_secretToAuthenticateTarget; }
    inline bool SecretToAuthenticateTargetHasBeenSet() const { return m_secretToAuthenticateTargetHasBeenSet; }
    template<typename SecretToAuthenticateTargetT = Aws::String>
    void SetSecretToAuthenticateTarget(SecretToAuthenticateTargetT&& value) { m_secretToAuthenticateTargetHasBeenSet = true; m_secretToAuthenticateTarget = std::forward<SecretToAuthenticateTargetT>(value); }
    template<typename SecretToAuthenticateTargetT = Aws::String>
    UpdateChapCredentialsRequest& WithSecretToAuthenticateTarget(SecretToAuthenticateTargetT&& value) { SetSecretToAuthenticateTarget(std::forward<SecretToAuthenticateTargetT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetARN;
    bool m_targetARNHasBeenSet = false;

    Aws::String m_secretToAuthenticateInitiator;
    bool m_secretToAuthenticateInitiatorHasBeenSet = false;

    Aws::String m_initiatorName;
    bool m_initiatorNameHasBeenSet = false;

    Aws::String m_secretToAuthenticateTarget;
    bool m_secretToAuthenticateTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
