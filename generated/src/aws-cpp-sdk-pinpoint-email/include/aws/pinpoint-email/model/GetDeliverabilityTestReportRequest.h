/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/PinpointEmailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>A request to retrieve the results of a predictive inbox placement
   * test.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetDeliverabilityTestReportRequest">AWS
   * API Reference</a></p>
   */
  class GetDeliverabilityTestReportRequest : public PinpointEmailRequest
  {
  public:
    AWS_PINPOINTEMAIL_API GetDeliverabilityTestReportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDeliverabilityTestReport"; }

    AWS_PINPOINTEMAIL_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique string that identifies the predictive inbox placement test.</p>
     */
    inline const Aws::String& GetReportId() const{ return m_reportId; }

    /**
     * <p>A unique string that identifies the predictive inbox placement test.</p>
     */
    inline bool ReportIdHasBeenSet() const { return m_reportIdHasBeenSet; }

    /**
     * <p>A unique string that identifies the predictive inbox placement test.</p>
     */
    inline void SetReportId(const Aws::String& value) { m_reportIdHasBeenSet = true; m_reportId = value; }

    /**
     * <p>A unique string that identifies the predictive inbox placement test.</p>
     */
    inline void SetReportId(Aws::String&& value) { m_reportIdHasBeenSet = true; m_reportId = std::move(value); }

    /**
     * <p>A unique string that identifies the predictive inbox placement test.</p>
     */
    inline void SetReportId(const char* value) { m_reportIdHasBeenSet = true; m_reportId.assign(value); }

    /**
     * <p>A unique string that identifies the predictive inbox placement test.</p>
     */
    inline GetDeliverabilityTestReportRequest& WithReportId(const Aws::String& value) { SetReportId(value); return *this;}

    /**
     * <p>A unique string that identifies the predictive inbox placement test.</p>
     */
    inline GetDeliverabilityTestReportRequest& WithReportId(Aws::String&& value) { SetReportId(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the predictive inbox placement test.</p>
     */
    inline GetDeliverabilityTestReportRequest& WithReportId(const char* value) { SetReportId(value); return *this;}

  private:

    Aws::String m_reportId;
    bool m_reportIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
