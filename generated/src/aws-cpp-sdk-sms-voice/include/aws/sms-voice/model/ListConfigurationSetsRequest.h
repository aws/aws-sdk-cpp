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
    AWS_PINPOINTSMSVOICE_API ListConfigurationSetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListConfigurationSets"; }

    AWS_PINPOINTSMSVOICE_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * A token returned from a previous call to the API that indicates the position in
     * the list of results.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * A token returned from a previous call to the API that indicates the position in
     * the list of results.
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * A token returned from a previous call to the API that indicates the position in
     * the list of results.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * A token returned from a previous call to the API that indicates the position in
     * the list of results.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * A token returned from a previous call to the API that indicates the position in
     * the list of results.
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * A token returned from a previous call to the API that indicates the position in
     * the list of results.
     */
    inline ListConfigurationSetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A token returned from a previous call to the API that indicates the position in
     * the list of results.
     */
    inline ListConfigurationSetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * A token returned from a previous call to the API that indicates the position in
     * the list of results.
     */
    inline ListConfigurationSetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * Used to specify the number of items that should be returned in the response.
     */
    inline const Aws::String& GetPageSize() const{ return m_pageSize; }

    /**
     * Used to specify the number of items that should be returned in the response.
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * Used to specify the number of items that should be returned in the response.
     */
    inline void SetPageSize(const Aws::String& value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * Used to specify the number of items that should be returned in the response.
     */
    inline void SetPageSize(Aws::String&& value) { m_pageSizeHasBeenSet = true; m_pageSize = std::move(value); }

    /**
     * Used to specify the number of items that should be returned in the response.
     */
    inline void SetPageSize(const char* value) { m_pageSizeHasBeenSet = true; m_pageSize.assign(value); }

    /**
     * Used to specify the number of items that should be returned in the response.
     */
    inline ListConfigurationSetsRequest& WithPageSize(const Aws::String& value) { SetPageSize(value); return *this;}

    /**
     * Used to specify the number of items that should be returned in the response.
     */
    inline ListConfigurationSetsRequest& WithPageSize(Aws::String&& value) { SetPageSize(std::move(value)); return *this;}

    /**
     * Used to specify the number of items that should be returned in the response.
     */
    inline ListConfigurationSetsRequest& WithPageSize(const char* value) { SetPageSize(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_pageSize;
    bool m_pageSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws
