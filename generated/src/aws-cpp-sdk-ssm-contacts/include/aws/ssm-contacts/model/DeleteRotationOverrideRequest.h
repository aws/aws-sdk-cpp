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
  class DeleteRotationOverrideRequest : public SSMContactsRequest
  {
  public:
    AWS_SSMCONTACTS_API DeleteRotationOverrideRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRotationOverride"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the rotation that was overridden.</p>
     */
    inline const Aws::String& GetRotationId() const{ return m_rotationId; }
    inline bool RotationIdHasBeenSet() const { return m_rotationIdHasBeenSet; }
    inline void SetRotationId(const Aws::String& value) { m_rotationIdHasBeenSet = true; m_rotationId = value; }
    inline void SetRotationId(Aws::String&& value) { m_rotationIdHasBeenSet = true; m_rotationId = std::move(value); }
    inline void SetRotationId(const char* value) { m_rotationIdHasBeenSet = true; m_rotationId.assign(value); }
    inline DeleteRotationOverrideRequest& WithRotationId(const Aws::String& value) { SetRotationId(value); return *this;}
    inline DeleteRotationOverrideRequest& WithRotationId(Aws::String&& value) { SetRotationId(std::move(value)); return *this;}
    inline DeleteRotationOverrideRequest& WithRotationId(const char* value) { SetRotationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the on-call rotation override to
     * delete.</p>
     */
    inline const Aws::String& GetRotationOverrideId() const{ return m_rotationOverrideId; }
    inline bool RotationOverrideIdHasBeenSet() const { return m_rotationOverrideIdHasBeenSet; }
    inline void SetRotationOverrideId(const Aws::String& value) { m_rotationOverrideIdHasBeenSet = true; m_rotationOverrideId = value; }
    inline void SetRotationOverrideId(Aws::String&& value) { m_rotationOverrideIdHasBeenSet = true; m_rotationOverrideId = std::move(value); }
    inline void SetRotationOverrideId(const char* value) { m_rotationOverrideIdHasBeenSet = true; m_rotationOverrideId.assign(value); }
    inline DeleteRotationOverrideRequest& WithRotationOverrideId(const Aws::String& value) { SetRotationOverrideId(value); return *this;}
    inline DeleteRotationOverrideRequest& WithRotationOverrideId(Aws::String&& value) { SetRotationOverrideId(std::move(value)); return *this;}
    inline DeleteRotationOverrideRequest& WithRotationOverrideId(const char* value) { SetRotationOverrideId(value); return *this;}
    ///@}
  private:

    Aws::String m_rotationId;
    bool m_rotationIdHasBeenSet = false;

    Aws::String m_rotationOverrideId;
    bool m_rotationOverrideIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
