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
  class DeleteMetricAttributionRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API DeleteMetricAttributionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteMetricAttribution"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The metric attribution's Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetMetricAttributionArn() const { return m_metricAttributionArn; }
    inline bool MetricAttributionArnHasBeenSet() const { return m_metricAttributionArnHasBeenSet; }
    template<typename MetricAttributionArnT = Aws::String>
    void SetMetricAttributionArn(MetricAttributionArnT&& value) { m_metricAttributionArnHasBeenSet = true; m_metricAttributionArn = std::forward<MetricAttributionArnT>(value); }
    template<typename MetricAttributionArnT = Aws::String>
    DeleteMetricAttributionRequest& WithMetricAttributionArn(MetricAttributionArnT&& value) { SetMetricAttributionArn(std::forward<MetricAttributionArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_metricAttributionArn;
    bool m_metricAttributionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
