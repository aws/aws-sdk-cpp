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
  class DescribeMetricsExportRequest : public ResilienceHubRequest
  {
  public:
    AWS_RESILIENCEHUB_API DescribeMetricsExportRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeMetricsExport"; }

    AWS_RESILIENCEHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Identifier of the metrics export task.</p>
     */
    inline const Aws::String& GetMetricsExportId() const { return m_metricsExportId; }
    inline bool MetricsExportIdHasBeenSet() const { return m_metricsExportIdHasBeenSet; }
    template<typename MetricsExportIdT = Aws::String>
    void SetMetricsExportId(MetricsExportIdT&& value) { m_metricsExportIdHasBeenSet = true; m_metricsExportId = std::forward<MetricsExportIdT>(value); }
    template<typename MetricsExportIdT = Aws::String>
    DescribeMetricsExportRequest& WithMetricsExportId(MetricsExportIdT&& value) { SetMetricsExportId(std::forward<MetricsExportIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_metricsExportId;
    bool m_metricsExportIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
