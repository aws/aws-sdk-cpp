/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/FeatureTransformation.h>
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
namespace Personalize
{
namespace Model
{
  class DescribeFeatureTransformationResult
  {
  public:
    AWS_PERSONALIZE_API DescribeFeatureTransformationResult() = default;
    AWS_PERSONALIZE_API DescribeFeatureTransformationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeFeatureTransformationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A listing of the FeatureTransformation properties.</p>
     */
    inline const FeatureTransformation& GetFeatureTransformation() const { return m_featureTransformation; }
    template<typename FeatureTransformationT = FeatureTransformation>
    void SetFeatureTransformation(FeatureTransformationT&& value) { m_featureTransformationHasBeenSet = true; m_featureTransformation = std::forward<FeatureTransformationT>(value); }
    template<typename FeatureTransformationT = FeatureTransformation>
    DescribeFeatureTransformationResult& WithFeatureTransformation(FeatureTransformationT&& value) { SetFeatureTransformation(std::forward<FeatureTransformationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFeatureTransformationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    FeatureTransformation m_featureTransformation;
    bool m_featureTransformationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
