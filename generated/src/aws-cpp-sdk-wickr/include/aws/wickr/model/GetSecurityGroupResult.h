/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/Wickr_EXPORTS.h>
#include <aws/wickr/model/SecurityGroup.h>

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
class GetSecurityGroupResult {
 public:
  AWS_WICKR_API GetSecurityGroupResult() = default;
  AWS_WICKR_API GetSecurityGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WICKR_API GetSecurityGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The detailed information about the security group, including all its settings
   * and member counts.</p>
   */
  inline const SecurityGroup& GetSecurityGroup() const { return m_securityGroup; }
  template <typename SecurityGroupT = SecurityGroup>
  void SetSecurityGroup(SecurityGroupT&& value) {
    m_securityGroupHasBeenSet = true;
    m_securityGroup = std::forward<SecurityGroupT>(value);
  }
  template <typename SecurityGroupT = SecurityGroup>
  GetSecurityGroupResult& WithSecurityGroup(SecurityGroupT&& value) {
    SetSecurityGroup(std::forward<SecurityGroupT>(value));
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
  GetSecurityGroupResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  SecurityGroup m_securityGroup;

  Aws::String m_requestId;
  bool m_securityGroupHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
