/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

  /**
   */
  class GetCallAnalyticsJobRequest : public TranscribeServiceRequest
  {
  public:
    AWS_TRANSCRIBESERVICE_API GetCallAnalyticsJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCallAnalyticsJob"; }

    AWS_TRANSCRIBESERVICE_API Aws::String SerializePayload() const override;

    AWS_TRANSCRIBESERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Call Analytics job you want information about. Job names are
     * case sensitive.</p>
     */
    inline const Aws::String& GetCallAnalyticsJobName() const { return m_callAnalyticsJobName; }
    inline bool CallAnalyticsJobNameHasBeenSet() const { return m_callAnalyticsJobNameHasBeenSet; }
    template<typename CallAnalyticsJobNameT = Aws::String>
    void SetCallAnalyticsJobName(CallAnalyticsJobNameT&& value) { m_callAnalyticsJobNameHasBeenSet = true; m_callAnalyticsJobName = std::forward<CallAnalyticsJobNameT>(value); }
    template<typename CallAnalyticsJobNameT = Aws::String>
    GetCallAnalyticsJobRequest& WithCallAnalyticsJobName(CallAnalyticsJobNameT&& value) { SetCallAnalyticsJobName(std::forward<CallAnalyticsJobNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_callAnalyticsJobName;
    bool m_callAnalyticsJobNameHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
