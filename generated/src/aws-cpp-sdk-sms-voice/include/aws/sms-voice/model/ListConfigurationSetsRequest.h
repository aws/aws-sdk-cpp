/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms-voice/PinpointSMSVoice_EXPORTS.h>
#include <aws/sms-voice/PinpointSMSVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace PinpointSMSVoice
{
namespace Model
{

  /**
   */
  class ListConfigurationSetsRequest : public PinpointSMSVoiceRequest
  {
  public:
    AWS_PINPOINTSMSVOICE_API ListConfigurationSetsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListConfigurationSets"; }

    AWS_PINPOINTSMSVOICE_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * A token returned from a previous call to the API that indicates the position in
     * the list of results.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConfigurationSetsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Used to specify the number of items that should be returned in the response.
     */
    inline const Aws::String& GetPageSize() const { return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    template<typename PageSizeT = Aws::String>
    void SetPageSize(PageSizeT&& value) { m_pageSizeHasBeenSet = true; m_pageSize = std::forward<PageSizeT>(value); }
    template<typename PageSizeT = Aws::String>
    ListConfigurationSetsRequest& WithPageSize(PageSizeT&& value) { SetPageSize(std::forward<PageSizeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_pageSize;
    bool m_pageSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws
