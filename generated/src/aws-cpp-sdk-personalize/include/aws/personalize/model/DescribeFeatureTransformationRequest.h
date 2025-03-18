/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class DescribeFeatureTransformationRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API DescribeFeatureTransformationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFeatureTransformation"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the feature transformation to describe.</p>
     */
    inline const Aws::String& GetFeatureTransformationArn() const { return m_featureTransformationArn; }
    inline bool FeatureTransformationArnHasBeenSet() const { return m_featureTransformationArnHasBeenSet; }
    template<typename FeatureTransformationArnT = Aws::String>
    void SetFeatureTransformationArn(FeatureTransformationArnT&& value) { m_featureTransformationArnHasBeenSet = true; m_featureTransformationArn = std::forward<FeatureTransformationArnT>(value); }
    template<typename FeatureTransformationArnT = Aws::String>
    DescribeFeatureTransformationRequest& WithFeatureTransformationArn(FeatureTransformationArnT&& value) { SetFeatureTransformationArn(std::forward<FeatureTransformationArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_featureTransformationArn;
    bool m_featureTransformationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
