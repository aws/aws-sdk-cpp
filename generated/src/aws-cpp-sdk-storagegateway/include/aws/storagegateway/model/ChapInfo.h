/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Describes Challenge-Handshake Authentication Protocol (CHAP) information that
   * supports authentication between your gateway and iSCSI initiators.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ChapInfo">AWS
   * API Reference</a></p>
   */
  class ChapInfo
  {
  public:
    AWS_STORAGEGATEWAY_API ChapInfo() = default;
    AWS_STORAGEGATEWAY_API ChapInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API ChapInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the volume.</p> <p>Valid Values: 50 to 500
     * lowercase letters, numbers, periods (.), and hyphens (-).</p>
     */
    inline const Aws::String& GetTargetARN() const { return m_targetARN; }
    inline bool TargetARNHasBeenSet() const { return m_targetARNHasBeenSet; }
    template<typename TargetARNT = Aws::String>
    void SetTargetARN(TargetARNT&& value) { m_targetARNHasBeenSet = true; m_targetARN = std::forward<TargetARNT>(value); }
    template<typename TargetARNT = Aws::String>
    ChapInfo& WithTargetARN(TargetARNT&& value) { SetTargetARN(std::forward<TargetARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secret key that the initiator (for example, the Windows client) must
     * provide to participate in mutual CHAP with the target.</p>
     */
    inline const Aws::String& GetSecretToAuthenticateInitiator() const { return m_secretToAuthenticateInitiator; }
    inline bool SecretToAuthenticateInitiatorHasBeenSet() const { return m_secretToAuthenticateInitiatorHasBeenSet; }
    template<typename SecretToAuthenticateInitiatorT = Aws::String>
    void SetSecretToAuthenticateInitiator(SecretToAuthenticateInitiatorT&& value) { m_secretToAuthenticateInitiatorHasBeenSet = true; m_secretToAuthenticateInitiator = std::forward<SecretToAuthenticateInitiatorT>(value); }
    template<typename SecretToAuthenticateInitiatorT = Aws::String>
    ChapInfo& WithSecretToAuthenticateInitiator(SecretToAuthenticateInitiatorT&& value) { SetSecretToAuthenticateInitiator(std::forward<SecretToAuthenticateInitiatorT>(value)); return *this;}
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
    ChapInfo& WithInitiatorName(InitiatorNameT&& value) { SetInitiatorName(std::forward<InitiatorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secret key that the target must provide to participate in mutual CHAP
     * with the initiator (e.g., Windows client).</p>
     */
    inline const Aws::String& GetSecretToAuthenticateTarget() const { return m_secretToAuthenticateTarget; }
    inline bool SecretToAuthenticateTargetHasBeenSet() const { return m_secretToAuthenticateTargetHasBeenSet; }
    template<typename SecretToAuthenticateTargetT = Aws::String>
    void SetSecretToAuthenticateTarget(SecretToAuthenticateTargetT&& value) { m_secretToAuthenticateTargetHasBeenSet = true; m_secretToAuthenticateTarget = std::forward<SecretToAuthenticateTargetT>(value); }
    template<typename SecretToAuthenticateTargetT = Aws::String>
    ChapInfo& WithSecretToAuthenticateTarget(SecretToAuthenticateTargetT&& value) { SetSecretToAuthenticateTarget(std::forward<SecretToAuthenticateTargetT>(value)); return *this;}
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
