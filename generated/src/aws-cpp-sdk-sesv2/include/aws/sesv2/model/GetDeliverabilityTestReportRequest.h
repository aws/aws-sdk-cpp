/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to retrieve the results of a predictive inbox placement
   * test.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDeliverabilityTestReportRequest">AWS
   * API Reference</a></p>
   */
  class GetDeliverabilityTestReportRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API GetDeliverabilityTestReportRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDeliverabilityTestReport"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique string that identifies the predictive inbox placement test.</p>
     */
    inline const Aws::String& GetReportId() const { return m_reportId; }
    inline bool ReportIdHasBeenSet() const { return m_reportIdHasBeenSet; }
    template<typename ReportIdT = Aws::String>
    void SetReportId(ReportIdT&& value) { m_reportIdHasBeenSet = true; m_reportId = std::forward<ReportIdT>(value); }
    template<typename ReportIdT = Aws::String>
    GetDeliverabilityTestReportRequest& WithReportId(ReportIdT&& value) { SetReportId(std::forward<ReportIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reportId;
    bool m_reportIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
