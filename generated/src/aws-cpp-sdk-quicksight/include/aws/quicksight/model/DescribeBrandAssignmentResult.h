/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{
  class DescribeBrandAssignmentResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeBrandAssignmentResult() = default;
    AWS_QUICKSIGHT_API DescribeBrandAssignmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeBrandAssignmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeBrandAssignmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the brand.</p>
     */
    inline const Aws::String& GetBrandArn() const { return m_brandArn; }
    template<typename BrandArnT = Aws::String>
    void SetBrandArn(BrandArnT&& value) { m_brandArnHasBeenSet = true; m_brandArn = std::forward<BrandArnT>(value); }
    template<typename BrandArnT = Aws::String>
    DescribeBrandAssignmentResult& WithBrandArn(BrandArnT&& value) { SetBrandArn(std::forward<BrandArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_brandArn;
    bool m_brandArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
