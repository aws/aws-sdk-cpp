/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class ListTemplateVersionsRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API ListTemplateVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTemplateVersions"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;

    AWS_PINPOINT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The  string that specifies which page of results to return in a paginated
     * response. This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The  string that specifies which page of results to return in a paginated
     * response. This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The  string that specifies which page of results to return in a paginated
     * response. This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The  string that specifies which page of results to return in a paginated
     * response. This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The  string that specifies which page of results to return in a paginated
     * response. This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The  string that specifies which page of results to return in a paginated
     * response. This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline ListTemplateVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The  string that specifies which page of results to return in a paginated
     * response. This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline ListTemplateVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The  string that specifies which page of results to return in a paginated
     * response. This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline ListTemplateVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline const Aws::String& GetPageSize() const{ return m_pageSize; }

    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline void SetPageSize(const Aws::String& value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline void SetPageSize(Aws::String&& value) { m_pageSizeHasBeenSet = true; m_pageSize = std::move(value); }

    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline void SetPageSize(const char* value) { m_pageSizeHasBeenSet = true; m_pageSize.assign(value); }

    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline ListTemplateVersionsRequest& WithPageSize(const Aws::String& value) { SetPageSize(value); return *this;}

    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline ListTemplateVersionsRequest& WithPageSize(Aws::String&& value) { SetPageSize(std::move(value)); return *this;}

    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline ListTemplateVersionsRequest& WithPageSize(const char* value) { SetPageSize(value); return *this;}


    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline ListTemplateVersionsRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline ListTemplateVersionsRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline ListTemplateVersionsRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>The type of channel that the message template is designed for. Valid values
     * are: EMAIL, PUSH, SMS, and VOICE.</p>
     */
    inline const Aws::String& GetTemplateType() const{ return m_templateType; }

    /**
     * <p>The type of channel that the message template is designed for. Valid values
     * are: EMAIL, PUSH, SMS, and VOICE.</p>
     */
    inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }

    /**
     * <p>The type of channel that the message template is designed for. Valid values
     * are: EMAIL, PUSH, SMS, and VOICE.</p>
     */
    inline void SetTemplateType(const Aws::String& value) { m_templateTypeHasBeenSet = true; m_templateType = value; }

    /**
     * <p>The type of channel that the message template is designed for. Valid values
     * are: EMAIL, PUSH, SMS, and VOICE.</p>
     */
    inline void SetTemplateType(Aws::String&& value) { m_templateTypeHasBeenSet = true; m_templateType = std::move(value); }

    /**
     * <p>The type of channel that the message template is designed for. Valid values
     * are: EMAIL, PUSH, SMS, and VOICE.</p>
     */
    inline void SetTemplateType(const char* value) { m_templateTypeHasBeenSet = true; m_templateType.assign(value); }

    /**
     * <p>The type of channel that the message template is designed for. Valid values
     * are: EMAIL, PUSH, SMS, and VOICE.</p>
     */
    inline ListTemplateVersionsRequest& WithTemplateType(const Aws::String& value) { SetTemplateType(value); return *this;}

    /**
     * <p>The type of channel that the message template is designed for. Valid values
     * are: EMAIL, PUSH, SMS, and VOICE.</p>
     */
    inline ListTemplateVersionsRequest& WithTemplateType(Aws::String&& value) { SetTemplateType(std::move(value)); return *this;}

    /**
     * <p>The type of channel that the message template is designed for. Valid values
     * are: EMAIL, PUSH, SMS, and VOICE.</p>
     */
    inline ListTemplateVersionsRequest& WithTemplateType(const char* value) { SetTemplateType(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_pageSize;
    bool m_pageSizeHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_templateType;
    bool m_templateTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
