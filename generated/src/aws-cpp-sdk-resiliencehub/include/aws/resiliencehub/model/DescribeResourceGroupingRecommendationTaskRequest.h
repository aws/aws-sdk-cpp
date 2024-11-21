/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/ResilienceHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

  /**
   */
  class DescribeResourceGroupingRecommendationTaskRequest : public ResilienceHubRequest
  {
  public:
    AWS_RESILIENCEHUB_API DescribeResourceGroupingRecommendationTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeResourceGroupingRecommendationTask"; }

    AWS_RESILIENCEHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline const Aws::String& GetAppArn() const{ return m_appArn; }
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }
    inline void SetAppArn(const Aws::String& value) { m_appArnHasBeenSet = true; m_appArn = value; }
    inline void SetAppArn(Aws::String&& value) { m_appArnHasBeenSet = true; m_appArn = std::move(value); }
    inline void SetAppArn(const char* value) { m_appArnHasBeenSet = true; m_appArn.assign(value); }
    inline DescribeResourceGroupingRecommendationTaskRequest& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}
    inline DescribeResourceGroupingRecommendationTaskRequest& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}
    inline DescribeResourceGroupingRecommendationTaskRequest& WithAppArn(const char* value) { SetAppArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the grouping recommendation task.</p>
     */
    inline const Aws::String& GetGroupingId() const{ return m_groupingId; }
    inline bool GroupingIdHasBeenSet() const { return m_groupingIdHasBeenSet; }
    inline void SetGroupingId(const Aws::String& value) { m_groupingIdHasBeenSet = true; m_groupingId = value; }
    inline void SetGroupingId(Aws::String&& value) { m_groupingIdHasBeenSet = true; m_groupingId = std::move(value); }
    inline void SetGroupingId(const char* value) { m_groupingIdHasBeenSet = true; m_groupingId.assign(value); }
    inline DescribeResourceGroupingRecommendationTaskRequest& WithGroupingId(const Aws::String& value) { SetGroupingId(value); return *this;}
    inline DescribeResourceGroupingRecommendationTaskRequest& WithGroupingId(Aws::String&& value) { SetGroupingId(std::move(value)); return *this;}
    inline DescribeResourceGroupingRecommendationTaskRequest& WithGroupingId(const char* value) { SetGroupingId(value); return *this;}
    ///@}
  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::String m_groupingId;
    bool m_groupingIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
