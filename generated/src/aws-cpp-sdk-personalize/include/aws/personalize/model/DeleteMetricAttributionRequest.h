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
    AWS_PERSONALIZE_API DeleteMetricAttributionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteMetricAttribution"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The metric attribution's Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetMetricAttributionArn() const{ return m_metricAttributionArn; }

    /**
     * <p>The metric attribution's Amazon Resource Name (ARN).</p>
     */
    inline bool MetricAttributionArnHasBeenSet() const { return m_metricAttributionArnHasBeenSet; }

    /**
     * <p>The metric attribution's Amazon Resource Name (ARN).</p>
     */
    inline void SetMetricAttributionArn(const Aws::String& value) { m_metricAttributionArnHasBeenSet = true; m_metricAttributionArn = value; }

    /**
     * <p>The metric attribution's Amazon Resource Name (ARN).</p>
     */
    inline void SetMetricAttributionArn(Aws::String&& value) { m_metricAttributionArnHasBeenSet = true; m_metricAttributionArn = std::move(value); }

    /**
     * <p>The metric attribution's Amazon Resource Name (ARN).</p>
     */
    inline void SetMetricAttributionArn(const char* value) { m_metricAttributionArnHasBeenSet = true; m_metricAttributionArn.assign(value); }

    /**
     * <p>The metric attribution's Amazon Resource Name (ARN).</p>
     */
    inline DeleteMetricAttributionRequest& WithMetricAttributionArn(const Aws::String& value) { SetMetricAttributionArn(value); return *this;}

    /**
     * <p>The metric attribution's Amazon Resource Name (ARN).</p>
     */
    inline DeleteMetricAttributionRequest& WithMetricAttributionArn(Aws::String&& value) { SetMetricAttributionArn(std::move(value)); return *this;}

    /**
     * <p>The metric attribution's Amazon Resource Name (ARN).</p>
     */
    inline DeleteMetricAttributionRequest& WithMetricAttributionArn(const char* value) { SetMetricAttributionArn(value); return *this;}

  private:

    Aws::String m_metricAttributionArn;
    bool m_metricAttributionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
