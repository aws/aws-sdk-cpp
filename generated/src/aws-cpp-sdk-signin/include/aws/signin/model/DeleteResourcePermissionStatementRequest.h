/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signin/SigninRequest.h>
#include <aws/signin/Signin_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Signin {
namespace Model {

/**
 * <p>Input for DeleteResourcePermissionStatement operation</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/DeleteResourcePermissionStatementInput">AWS
 * API Reference</a></p>
 */
class DeleteResourcePermissionStatementRequest : public SigninRequest {
 public:
  AWS_SIGNIN_API DeleteResourcePermissionStatementRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteResourcePermissionStatement"; }

  AWS_SIGNIN_API Aws::String SerializePayload() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_SIGNIN_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>Unique identifier of the permission statement to delete</p>
   */
  inline const Aws::String& GetStatementId() const { return m_statementId; }
  inline bool StatementIdHasBeenSet() const { return m_statementIdHasBeenSet; }
  template <typename StatementIdT = Aws::String>
  void SetStatementId(StatementIdT&& value) {
    m_statementIdHasBeenSet = true;
    m_statementId = std::forward<StatementIdT>(value);
  }
  template <typename StatementIdT = Aws::String>
  DeleteResourcePermissionStatementRequest& WithStatementId(StatementIdT&& value) {
    SetStatementId(std::forward<StatementIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Idempotency token for the request</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  DeleteResourcePermissionStatementRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_statementId;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_statementIdHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
