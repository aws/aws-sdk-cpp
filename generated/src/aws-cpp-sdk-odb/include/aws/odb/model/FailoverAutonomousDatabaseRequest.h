/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/OdbRequest.h>
#include <aws/odb/Odb_EXPORTS.h>

#include <utility>

namespace Aws {
namespace odb {
namespace Model {

/**
 */
class FailoverAutonomousDatabaseRequest : public OdbRequest {
 public:
  AWS_ODB_API FailoverAutonomousDatabaseRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "FailoverAutonomousDatabase"; }

  AWS_ODB_API Aws::String SerializePayload() const override;

  AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the Autonomous Database to fail over.</p>
   */
  inline const Aws::String& GetAutonomousDatabaseId() const { return m_autonomousDatabaseId; }
  inline bool AutonomousDatabaseIdHasBeenSet() const { return m_autonomousDatabaseIdHasBeenSet; }
  template <typename AutonomousDatabaseIdT = Aws::String>
  void SetAutonomousDatabaseId(AutonomousDatabaseIdT&& value) {
    m_autonomousDatabaseIdHasBeenSet = true;
    m_autonomousDatabaseId = std::forward<AutonomousDatabaseIdT>(value);
  }
  template <typename AutonomousDatabaseIdT = Aws::String>
  FailoverAutonomousDatabaseRequest& WithAutonomousDatabaseId(AutonomousDatabaseIdT&& value) {
    SetAutonomousDatabaseId(std::forward<AutonomousDatabaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the peer Autonomous Database to fail over
   * to.</p>
   */
  inline const Aws::String& GetPeerDbArn() const { return m_peerDbArn; }
  inline bool PeerDbArnHasBeenSet() const { return m_peerDbArnHasBeenSet; }
  template <typename PeerDbArnT = Aws::String>
  void SetPeerDbArn(PeerDbArnT&& value) {
    m_peerDbArnHasBeenSet = true;
    m_peerDbArn = std::forward<PeerDbArnT>(value);
  }
  template <typename PeerDbArnT = Aws::String>
  FailoverAutonomousDatabaseRequest& WithPeerDbArn(PeerDbArnT&& value) {
    SetPeerDbArn(std::forward<PeerDbArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_autonomousDatabaseId;

  Aws::String m_peerDbArn;
  bool m_autonomousDatabaseIdHasBeenSet = false;
  bool m_peerDbArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
