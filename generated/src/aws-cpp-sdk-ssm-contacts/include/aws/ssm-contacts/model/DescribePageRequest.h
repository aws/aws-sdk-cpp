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
  class DescribePageRequest : public SSMContactsRequest
  {
  public:
    AWS_SSMCONTACTS_API DescribePageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePage"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the engagement to a contact channel.</p>
     */
    inline const Aws::String& GetPageId() const{ return m_pageId; }

    /**
     * <p>The ID of the engagement to a contact channel.</p>
     */
    inline bool PageIdHasBeenSet() const { return m_pageIdHasBeenSet; }

    /**
     * <p>The ID of the engagement to a contact channel.</p>
     */
    inline void SetPageId(const Aws::String& value) { m_pageIdHasBeenSet = true; m_pageId = value; }

    /**
     * <p>The ID of the engagement to a contact channel.</p>
     */
    inline void SetPageId(Aws::String&& value) { m_pageIdHasBeenSet = true; m_pageId = std::move(value); }

    /**
     * <p>The ID of the engagement to a contact channel.</p>
     */
    inline void SetPageId(const char* value) { m_pageIdHasBeenSet = true; m_pageId.assign(value); }

    /**
     * <p>The ID of the engagement to a contact channel.</p>
     */
    inline DescribePageRequest& WithPageId(const Aws::String& value) { SetPageId(value); return *this;}

    /**
     * <p>The ID of the engagement to a contact channel.</p>
     */
    inline DescribePageRequest& WithPageId(Aws::String&& value) { SetPageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the engagement to a contact channel.</p>
     */
    inline DescribePageRequest& WithPageId(const char* value) { SetPageId(value); return *this;}

  private:

    Aws::String m_pageId;
    bool m_pageIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
