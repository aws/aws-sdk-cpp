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
  class DeleteContactChannelRequest : public SSMContactsRequest
  {
  public:
    AWS_SSMCONTACTS_API DeleteContactChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteContactChannel"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline const Aws::String& GetContactChannelId() const{ return m_contactChannelId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline bool ContactChannelIdHasBeenSet() const { return m_contactChannelIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline void SetContactChannelId(const Aws::String& value) { m_contactChannelIdHasBeenSet = true; m_contactChannelId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline void SetContactChannelId(Aws::String&& value) { m_contactChannelIdHasBeenSet = true; m_contactChannelId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline void SetContactChannelId(const char* value) { m_contactChannelIdHasBeenSet = true; m_contactChannelId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline DeleteContactChannelRequest& WithContactChannelId(const Aws::String& value) { SetContactChannelId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline DeleteContactChannelRequest& WithContactChannelId(Aws::String&& value) { SetContactChannelId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel.</p>
     */
    inline DeleteContactChannelRequest& WithContactChannelId(const char* value) { SetContactChannelId(value); return *this;}

  private:

    Aws::String m_contactChannelId;
    bool m_contactChannelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
