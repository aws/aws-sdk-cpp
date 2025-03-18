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
    AWS_SSMCONTACTS_API DescribePageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePage"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the engagement to a contact channel.</p>
     */
    inline const Aws::String& GetPageId() const { return m_pageId; }
    inline bool PageIdHasBeenSet() const { return m_pageIdHasBeenSet; }
    template<typename PageIdT = Aws::String>
    void SetPageId(PageIdT&& value) { m_pageIdHasBeenSet = true; m_pageId = std::forward<PageIdT>(value); }
    template<typename PageIdT = Aws::String>
    DescribePageRequest& WithPageId(PageIdT&& value) { SetPageId(std::forward<PageIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pageId;
    bool m_pageIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
