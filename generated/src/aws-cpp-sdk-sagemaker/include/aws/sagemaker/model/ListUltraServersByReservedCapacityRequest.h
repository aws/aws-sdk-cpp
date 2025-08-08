/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListUltraServersByReservedCapacityRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListUltraServersByReservedCapacityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListUltraServersByReservedCapacity"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the reserved capacity to list UltraServers for.</p>
     */
    inline const Aws::String& GetReservedCapacityArn() const { return m_reservedCapacityArn; }
    inline bool ReservedCapacityArnHasBeenSet() const { return m_reservedCapacityArnHasBeenSet; }
    template<typename ReservedCapacityArnT = Aws::String>
    void SetReservedCapacityArn(ReservedCapacityArnT&& value) { m_reservedCapacityArnHasBeenSet = true; m_reservedCapacityArn = std::forward<ReservedCapacityArnT>(value); }
    template<typename ReservedCapacityArnT = Aws::String>
    ListUltraServersByReservedCapacityRequest& WithReservedCapacityArn(ReservedCapacityArnT&& value) { SetReservedCapacityArn(std::forward<ReservedCapacityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of UltraServers to return in the response. The default
     * value is 10.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListUltraServersByReservedCapacityRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListUltraServersByReservedCapacityRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reservedCapacityArn;
    bool m_reservedCapacityArnHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
