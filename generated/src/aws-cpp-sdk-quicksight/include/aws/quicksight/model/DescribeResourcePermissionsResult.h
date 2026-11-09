/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ServiceRoleType.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {
class DescribeResourcePermissionsResult {
 public:
  AWS_QUICKSIGHT_API DescribeResourcePermissionsResult() = default;
  AWS_QUICKSIGHT_API DescribeResourcePermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API DescribeResourcePermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The type of service role that Amazon Quick Sight uses for your account.</p>
   */
  inline ServiceRoleType GetRoleType() const { return m_roleType; }
  inline void SetRoleType(ServiceRoleType value) {
    m_roleTypeHasBeenSet = true;
    m_roleType = value;
  }
  inline DescribeResourcePermissionsResult& WithRoleType(ServiceRoleType value) {
    SetRoleType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the customer-managed role that Amazon Quick Sight uses for your
   * account. Amazon Quick Sight returns this value only when <code>RoleType</code>
   * is <code>CUSTOMER_MANAGED</code>.</p>
   */
  inline const Aws::String& GetCustomerManagedRoleArn() const { return m_customerManagedRoleArn; }
  template <typename CustomerManagedRoleArnT = Aws::String>
  void SetCustomerManagedRoleArn(CustomerManagedRoleArnT&& value) {
    m_customerManagedRoleArnHasBeenSet = true;
    m_customerManagedRoleArn = std::forward<CustomerManagedRoleArnT>(value);
  }
  template <typename CustomerManagedRoleArnT = Aws::String>
  DescribeResourcePermissionsResult& WithCustomerManagedRoleArn(CustomerManagedRoleArnT&& value) {
    SetCustomerManagedRoleArn(std::forward<CustomerManagedRoleArnT>(value));
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
  DescribeResourcePermissionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTP status of the request.</p>
   */
  inline int GetStatus() const { return m_status; }
  inline void SetStatus(int value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DescribeResourcePermissionsResult& WithStatus(int value) {
    SetStatus(value);
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  ServiceRoleType m_roleType{ServiceRoleType::NOT_SET};

  Aws::String m_customerManagedRoleArn;

  Aws::String m_requestId;

  int m_status{0};
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_roleTypeHasBeenSet = false;
  bool m_customerManagedRoleArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
