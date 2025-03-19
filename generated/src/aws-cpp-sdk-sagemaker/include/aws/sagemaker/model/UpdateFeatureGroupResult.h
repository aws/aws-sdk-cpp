/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{
  class UpdateFeatureGroupResult
  {
  public:
    AWS_SAGEMAKER_API UpdateFeatureGroupResult() = default;
    AWS_SAGEMAKER_API UpdateFeatureGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API UpdateFeatureGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the feature group that you're
     * updating.</p>
     */
    inline const Aws::String& GetFeatureGroupArn() const { return m_featureGroupArn; }
    template<typename FeatureGroupArnT = Aws::String>
    void SetFeatureGroupArn(FeatureGroupArnT&& value) { m_featureGroupArnHasBeenSet = true; m_featureGroupArn = std::forward<FeatureGroupArnT>(value); }
    template<typename FeatureGroupArnT = Aws::String>
    UpdateFeatureGroupResult& WithFeatureGroupArn(FeatureGroupArnT&& value) { SetFeatureGroupArn(std::forward<FeatureGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateFeatureGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_featureGroupArn;
    bool m_featureGroupArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
