/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/Wickr_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Wickr {
namespace Model {
class CreateNetworkResult {
 public:
  AWS_WICKR_API CreateNetworkResult() = default;
  AWS_WICKR_API CreateNetworkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WICKR_API CreateNetworkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier assigned to the newly created network.</p>
   */
  inline const Aws::String& GetNetworkId() const { return m_networkId; }
  template <typename NetworkIdT = Aws::String>
  void SetNetworkId(NetworkIdT&& value) {
    m_networkIdHasBeenSet = true;
    m_networkId = std::forward<NetworkIdT>(value);
  }
  template <typename NetworkIdT = Aws::String>
  CreateNetworkResult& WithNetworkId(NetworkIdT&& value) {
    SetNetworkId(std::forward<NetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the newly created network.</p>
   */
  inline const Aws::String& GetNetworkName() const { return m_networkName; }
  template <typename NetworkNameT = Aws::String>
  void SetNetworkName(NetworkNameT&& value) {
    m_networkNameHasBeenSet = true;
    m_networkName = std::forward<NetworkNameT>(value);
  }
  template <typename NetworkNameT = Aws::String>
  CreateNetworkResult& WithNetworkName(NetworkNameT&& value) {
    SetNetworkName(std::forward<NetworkNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the KMS key being used to encrypt sensitive data in the
   * network.</p>
   */
  inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
  template <typename EncryptionKeyArnT = Aws::String>
  void SetEncryptionKeyArn(EncryptionKeyArnT&& value) {
    m_encryptionKeyArnHasBeenSet = true;
    m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value);
  }
  template <typename EncryptionKeyArnT = Aws::String>
  CreateNetworkResult& WithEncryptionKeyArn(EncryptionKeyArnT&& value) {
    SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  CreateNetworkResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_networkId;

  Aws::String m_networkName;

  Aws::String m_encryptionKeyArn;

  Aws::String m_requestId;
  bool m_networkIdHasBeenSet = false;
  bool m_networkNameHasBeenSet = false;
  bool m_encryptionKeyArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
