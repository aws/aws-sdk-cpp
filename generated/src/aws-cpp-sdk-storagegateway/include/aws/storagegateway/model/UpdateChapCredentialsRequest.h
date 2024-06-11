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
    AWS_STORAGEGATEWAY_API UpdateChapCredentialsRequest();

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
    inline const Aws::String& GetTargetARN() const{ return m_targetARN; }
    inline bool TargetARNHasBeenSet() const { return m_targetARNHasBeenSet; }
    inline void SetTargetARN(const Aws::String& value) { m_targetARNHasBeenSet = true; m_targetARN = value; }
    inline void SetTargetARN(Aws::String&& value) { m_targetARNHasBeenSet = true; m_targetARN = std::move(value); }
    inline void SetTargetARN(const char* value) { m_targetARNHasBeenSet = true; m_targetARN.assign(value); }
    inline UpdateChapCredentialsRequest& WithTargetARN(const Aws::String& value) { SetTargetARN(value); return *this;}
    inline UpdateChapCredentialsRequest& WithTargetARN(Aws::String&& value) { SetTargetARN(std::move(value)); return *this;}
    inline UpdateChapCredentialsRequest& WithTargetARN(const char* value) { SetTargetARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secret key that the initiator (for example, the Windows client) must
     * provide to participate in mutual CHAP with the target.</p>  <p>The secret
     * key must be between 12 and 16 bytes when encoded in UTF-8.</p> 
     */
    inline const Aws::String& GetSecretToAuthenticateInitiator() const{ return m_secretToAuthenticateInitiator; }
    inline bool SecretToAuthenticateInitiatorHasBeenSet() const { return m_secretToAuthenticateInitiatorHasBeenSet; }
    inline void SetSecretToAuthenticateInitiator(const Aws::String& value) { m_secretToAuthenticateInitiatorHasBeenSet = true; m_secretToAuthenticateInitiator = value; }
    inline void SetSecretToAuthenticateInitiator(Aws::String&& value) { m_secretToAuthenticateInitiatorHasBeenSet = true; m_secretToAuthenticateInitiator = std::move(value); }
    inline void SetSecretToAuthenticateInitiator(const char* value) { m_secretToAuthenticateInitiatorHasBeenSet = true; m_secretToAuthenticateInitiator.assign(value); }
    inline UpdateChapCredentialsRequest& WithSecretToAuthenticateInitiator(const Aws::String& value) { SetSecretToAuthenticateInitiator(value); return *this;}
    inline UpdateChapCredentialsRequest& WithSecretToAuthenticateInitiator(Aws::String&& value) { SetSecretToAuthenticateInitiator(std::move(value)); return *this;}
    inline UpdateChapCredentialsRequest& WithSecretToAuthenticateInitiator(const char* value) { SetSecretToAuthenticateInitiator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The iSCSI initiator that connects to the target.</p>
     */
    inline const Aws::String& GetInitiatorName() const{ return m_initiatorName; }
    inline bool InitiatorNameHasBeenSet() const { return m_initiatorNameHasBeenSet; }
    inline void SetInitiatorName(const Aws::String& value) { m_initiatorNameHasBeenSet = true; m_initiatorName = value; }
    inline void SetInitiatorName(Aws::String&& value) { m_initiatorNameHasBeenSet = true; m_initiatorName = std::move(value); }
    inline void SetInitiatorName(const char* value) { m_initiatorNameHasBeenSet = true; m_initiatorName.assign(value); }
    inline UpdateChapCredentialsRequest& WithInitiatorName(const Aws::String& value) { SetInitiatorName(value); return *this;}
    inline UpdateChapCredentialsRequest& WithInitiatorName(Aws::String&& value) { SetInitiatorName(std::move(value)); return *this;}
    inline UpdateChapCredentialsRequest& WithInitiatorName(const char* value) { SetInitiatorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secret key that the target must provide to participate in mutual CHAP
     * with the initiator (e.g. Windows client).</p> <p>Byte constraints: Minimum bytes
     * of 12. Maximum bytes of 16.</p>  <p>The secret key must be between 12 and
     * 16 bytes when encoded in UTF-8.</p> 
     */
    inline const Aws::String& GetSecretToAuthenticateTarget() const{ return m_secretToAuthenticateTarget; }
    inline bool SecretToAuthenticateTargetHasBeenSet() const { return m_secretToAuthenticateTargetHasBeenSet; }
    inline void SetSecretToAuthenticateTarget(const Aws::String& value) { m_secretToAuthenticateTargetHasBeenSet = true; m_secretToAuthenticateTarget = value; }
    inline void SetSecretToAuthenticateTarget(Aws::String&& value) { m_secretToAuthenticateTargetHasBeenSet = true; m_secretToAuthenticateTarget = std::move(value); }
    inline void SetSecretToAuthenticateTarget(const char* value) { m_secretToAuthenticateTargetHasBeenSet = true; m_secretToAuthenticateTarget.assign(value); }
    inline UpdateChapCredentialsRequest& WithSecretToAuthenticateTarget(const Aws::String& value) { SetSecretToAuthenticateTarget(value); return *this;}
    inline UpdateChapCredentialsRequest& WithSecretToAuthenticateTarget(Aws::String&& value) { SetSecretToAuthenticateTarget(std::move(value)); return *this;}
    inline UpdateChapCredentialsRequest& WithSecretToAuthenticateTarget(const char* value) { SetSecretToAuthenticateTarget(value); return *this;}
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
