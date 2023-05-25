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
  class ListTemplatesRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API ListTemplatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTemplates"; }

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
    inline ListTemplatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The  string that specifies which page of results to return in a paginated
     * response. This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline ListTemplatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The  string that specifies which page of results to return in a paginated
     * response. This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline ListTemplatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListTemplatesRequest& WithPageSize(const Aws::String& value) { SetPageSize(value); return *this;}

    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline ListTemplatesRequest& WithPageSize(Aws::String&& value) { SetPageSize(std::move(value)); return *this;}

    /**
     * <p>The maximum number of items to include in each page of a paginated response.
     * This parameter is not supported for application, campaign, and journey
     * metrics.</p>
     */
    inline ListTemplatesRequest& WithPageSize(const char* value) { SetPageSize(value); return *this;}


    /**
     * <p>The substring to match in the names of the message templates to include in
     * the results. If you specify this value, Amazon Pinpoint returns only those
     * templates whose names begin with the value that you specify.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>The substring to match in the names of the message templates to include in
     * the results. If you specify this value, Amazon Pinpoint returns only those
     * templates whose names begin with the value that you specify.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>The substring to match in the names of the message templates to include in
     * the results. If you specify this value, Amazon Pinpoint returns only those
     * templates whose names begin with the value that you specify.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>The substring to match in the names of the message templates to include in
     * the results. If you specify this value, Amazon Pinpoint returns only those
     * templates whose names begin with the value that you specify.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>The substring to match in the names of the message templates to include in
     * the results. If you specify this value, Amazon Pinpoint returns only those
     * templates whose names begin with the value that you specify.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>The substring to match in the names of the message templates to include in
     * the results. If you specify this value, Amazon Pinpoint returns only those
     * templates whose names begin with the value that you specify.</p>
     */
    inline ListTemplatesRequest& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>The substring to match in the names of the message templates to include in
     * the results. If you specify this value, Amazon Pinpoint returns only those
     * templates whose names begin with the value that you specify.</p>
     */
    inline ListTemplatesRequest& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>The substring to match in the names of the message templates to include in
     * the results. If you specify this value, Amazon Pinpoint returns only those
     * templates whose names begin with the value that you specify.</p>
     */
    inline ListTemplatesRequest& WithPrefix(const char* value) { SetPrefix(value); return *this;}


    /**
     * <p>The type of message template to include in the results. Valid values are:
     * EMAIL, PUSH, SMS, and VOICE. To include all types of templates in the results,
     * don't include this parameter in your request.</p>
     */
    inline const Aws::String& GetTemplateType() const{ return m_templateType; }

    /**
     * <p>The type of message template to include in the results. Valid values are:
     * EMAIL, PUSH, SMS, and VOICE. To include all types of templates in the results,
     * don't include this parameter in your request.</p>
     */
    inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }

    /**
     * <p>The type of message template to include in the results. Valid values are:
     * EMAIL, PUSH, SMS, and VOICE. To include all types of templates in the results,
     * don't include this parameter in your request.</p>
     */
    inline void SetTemplateType(const Aws::String& value) { m_templateTypeHasBeenSet = true; m_templateType = value; }

    /**
     * <p>The type of message template to include in the results. Valid values are:
     * EMAIL, PUSH, SMS, and VOICE. To include all types of templates in the results,
     * don't include this parameter in your request.</p>
     */
    inline void SetTemplateType(Aws::String&& value) { m_templateTypeHasBeenSet = true; m_templateType = std::move(value); }

    /**
     * <p>The type of message template to include in the results. Valid values are:
     * EMAIL, PUSH, SMS, and VOICE. To include all types of templates in the results,
     * don't include this parameter in your request.</p>
     */
    inline void SetTemplateType(const char* value) { m_templateTypeHasBeenSet = true; m_templateType.assign(value); }

    /**
     * <p>The type of message template to include in the results. Valid values are:
     * EMAIL, PUSH, SMS, and VOICE. To include all types of templates in the results,
     * don't include this parameter in your request.</p>
     */
    inline ListTemplatesRequest& WithTemplateType(const Aws::String& value) { SetTemplateType(value); return *this;}

    /**
     * <p>The type of message template to include in the results. Valid values are:
     * EMAIL, PUSH, SMS, and VOICE. To include all types of templates in the results,
     * don't include this parameter in your request.</p>
     */
    inline ListTemplatesRequest& WithTemplateType(Aws::String&& value) { SetTemplateType(std::move(value)); return *this;}

    /**
     * <p>The type of message template to include in the results. Valid values are:
     * EMAIL, PUSH, SMS, and VOICE. To include all types of templates in the results,
     * don't include this parameter in your request.</p>
     */
    inline ListTemplatesRequest& WithTemplateType(const char* value) { SetTemplateType(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_pageSize;
    bool m_pageSizeHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Aws::String m_templateType;
    bool m_templateTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
