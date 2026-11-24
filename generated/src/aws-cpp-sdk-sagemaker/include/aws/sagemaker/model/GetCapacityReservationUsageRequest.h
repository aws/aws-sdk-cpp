/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SageMaker {
namespace Model {

/**
 */
class GetCapacityReservationUsageRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API GetCapacityReservationUsageRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetCapacityReservationUsage"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the SageMaker Capacity Reservation. The ARN
   * has the format
   * <code>arn:aws:sagemaker:region:account-id:sm-capacity-reservation/smcr-id</code>.</p>
   */
  inline const Aws::String& GetSMCapacityReservationArn() const { return m_sMCapacityReservationArn; }
  inline bool SMCapacityReservationArnHasBeenSet() const { return m_sMCapacityReservationArnHasBeenSet; }
  template <typename SMCapacityReservationArnT = Aws::String>
  void SetSMCapacityReservationArn(SMCapacityReservationArnT&& value) {
    m_sMCapacityReservationArnHasBeenSet = true;
    m_sMCapacityReservationArn = std::forward<SMCapacityReservationArnT>(value);
  }
  template <typename SMCapacityReservationArnT = Aws::String>
  GetCapacityReservationUsageRequest& WithSMCapacityReservationArn(SMCapacityReservationArnT&& value) {
    SetSMCapacityReservationArn(std::forward<SMCapacityReservationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in the response. If more results are
   * available, the response includes a <code>NextToken</code> value.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline GetCapacityReservationUsageRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the previous response was truncated, the response includes a
   * <code>NextToken</code> value. To retrieve the next set of results, use that
   * token in your next request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetCapacityReservationUsageRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sMCapacityReservationArn;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_sMCapacityReservationArnHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
