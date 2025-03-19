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
   */
  class DeleteContactListRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API DeleteContactListRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteContactList"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the contact list.</p>
     */
    inline const Aws::String& GetContactListName() const { return m_contactListName; }
    inline bool ContactListNameHasBeenSet() const { return m_contactListNameHasBeenSet; }
    template<typename ContactListNameT = Aws::String>
    void SetContactListName(ContactListNameT&& value) { m_contactListNameHasBeenSet = true; m_contactListName = std::forward<ContactListNameT>(value); }
    template<typename ContactListNameT = Aws::String>
    DeleteContactListRequest& WithContactListName(ContactListNameT&& value) { SetContactListName(std::forward<ContactListNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contactListName;
    bool m_contactListNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
