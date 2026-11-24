/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CapacityReservationResourceAssociation.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {
class DescribeResourceAssociationsResult {
 public:
  AWS_SAGEMAKER_API DescribeResourceAssociationsResult() = default;
  AWS_SAGEMAKER_API DescribeResourceAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API DescribeResourceAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the SageMaker Capacity Reservation.</p>
   */
  inline const Aws::String& GetSMCapacityReservationArn() const { return m_sMCapacityReservationArn; }
  template <typename SMCapacityReservationArnT = Aws::String>
  void SetSMCapacityReservationArn(SMCapacityReservationArnT&& value) {
    m_sMCapacityReservationArnHasBeenSet = true;
    m_sMCapacityReservationArn = std::forward<SMCapacityReservationArnT>(value);
  }
  template <typename SMCapacityReservationArnT = Aws::String>
  DescribeResourceAssociationsResult& WithSMCapacityReservationArn(SMCapacityReservationArnT&& value) {
    SetSMCapacityReservationArn(std::forward<SMCapacityReservationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the SageMaker Capacity Reservation. The ID is the last part of the
   * ARN and starts with <code>smcr-</code>.</p>
   */
  inline const Aws::String& GetSMCapacityReservationId() const { return m_sMCapacityReservationId; }
  template <typename SMCapacityReservationIdT = Aws::String>
  void SetSMCapacityReservationId(SMCapacityReservationIdT&& value) {
    m_sMCapacityReservationIdHasBeenSet = true;
    m_sMCapacityReservationId = std::forward<SMCapacityReservationIdT>(value);
  }
  template <typename SMCapacityReservationIdT = Aws::String>
  DescribeResourceAssociationsResult& WithSMCapacityReservationId(SMCapacityReservationIdT&& value) {
    SetSMCapacityReservationId(std::forward<SMCapacityReservationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The associations between resources in your account and the SageMaker Capacity
   * Reservation. The list is empty when your account has no associations with the
   * reservation.</p>
   */
  inline const Aws::Vector<CapacityReservationResourceAssociation>& GetResourceAssociations() const { return m_resourceAssociations; }
  template <typename ResourceAssociationsT = Aws::Vector<CapacityReservationResourceAssociation>>
  void SetResourceAssociations(ResourceAssociationsT&& value) {
    m_resourceAssociationsHasBeenSet = true;
    m_resourceAssociations = std::forward<ResourceAssociationsT>(value);
  }
  template <typename ResourceAssociationsT = Aws::Vector<CapacityReservationResourceAssociation>>
  DescribeResourceAssociationsResult& WithResourceAssociations(ResourceAssociationsT&& value) {
    SetResourceAssociations(std::forward<ResourceAssociationsT>(value));
    return *this;
  }
  template <typename ResourceAssociationsT = CapacityReservationResourceAssociation>
  DescribeResourceAssociationsResult& AddResourceAssociations(ResourceAssociationsT&& value) {
    m_resourceAssociationsHasBeenSet = true;
    m_resourceAssociations.emplace_back(std::forward<ResourceAssociationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the response is truncated, SageMaker AI returns this token. To retrieve
   * the next set of results, use this token in your next request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeResourceAssociationsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  DescribeResourceAssociationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_sMCapacityReservationArn;

  Aws::String m_sMCapacityReservationId;

  Aws::Vector<CapacityReservationResourceAssociation> m_resourceAssociations;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_sMCapacityReservationArnHasBeenSet = false;
  bool m_sMCapacityReservationIdHasBeenSet = false;
  bool m_resourceAssociationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
