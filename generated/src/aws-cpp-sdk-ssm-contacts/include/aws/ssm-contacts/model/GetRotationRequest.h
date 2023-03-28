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
  class GetRotationRequest : public SSMContactsRequest
  {
  public:
    AWS_SSMCONTACTS_API GetRotationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRotation"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the on-call rotation to retrieve
     * information about.</p>
     */
    inline const Aws::String& GetRotationId() const{ return m_rotationId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the on-call rotation to retrieve
     * information about.</p>
     */
    inline bool RotationIdHasBeenSet() const { return m_rotationIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the on-call rotation to retrieve
     * information about.</p>
     */
    inline void SetRotationId(const Aws::String& value) { m_rotationIdHasBeenSet = true; m_rotationId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the on-call rotation to retrieve
     * information about.</p>
     */
    inline void SetRotationId(Aws::String&& value) { m_rotationIdHasBeenSet = true; m_rotationId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the on-call rotation to retrieve
     * information about.</p>
     */
    inline void SetRotationId(const char* value) { m_rotationIdHasBeenSet = true; m_rotationId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the on-call rotation to retrieve
     * information about.</p>
     */
    inline GetRotationRequest& WithRotationId(const Aws::String& value) { SetRotationId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the on-call rotation to retrieve
     * information about.</p>
     */
    inline GetRotationRequest& WithRotationId(Aws::String&& value) { SetRotationId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the on-call rotation to retrieve
     * information about.</p>
     */
    inline GetRotationRequest& WithRotationId(const char* value) { SetRotationId(value); return *this;}

  private:

    Aws::String m_rotationId;
    bool m_rotationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
