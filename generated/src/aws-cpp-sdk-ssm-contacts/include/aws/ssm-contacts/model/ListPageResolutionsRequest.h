/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/ssm-contacts/SSMContactsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

  /**
   */
  class ListPageResolutionsRequest : public SSMContactsRequest
  {
  public:
    AWS_SSMCONTACTS_API ListPageResolutionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPageResolutions"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline ListPageResolutionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline ListPageResolutionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline ListPageResolutionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the contact engaged for the incident.</p>
     */
    inline const Aws::String& GetPageId() const{ return m_pageId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact engaged for the incident.</p>
     */
    inline bool PageIdHasBeenSet() const { return m_pageIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact engaged for the incident.</p>
     */
    inline void SetPageId(const Aws::String& value) { m_pageIdHasBeenSet = true; m_pageId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact engaged for the incident.</p>
     */
    inline void SetPageId(Aws::String&& value) { m_pageIdHasBeenSet = true; m_pageId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact engaged for the incident.</p>
     */
    inline void SetPageId(const char* value) { m_pageIdHasBeenSet = true; m_pageId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact engaged for the incident.</p>
     */
    inline ListPageResolutionsRequest& WithPageId(const Aws::String& value) { SetPageId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact engaged for the incident.</p>
     */
    inline ListPageResolutionsRequest& WithPageId(Aws::String&& value) { SetPageId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact engaged for the incident.</p>
     */
    inline ListPageResolutionsRequest& WithPageId(const char* value) { SetPageId(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_pageId;
    bool m_pageIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
