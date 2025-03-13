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
  class GetRotationOverrideRequest : public SSMContactsRequest
  {
  public:
    AWS_SSMCONTACTS_API GetRotationOverrideRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRotationOverride"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the overridden rotation to retrieve
     * information about.</p>
     */
    inline const Aws::String& GetRotationId() const { return m_rotationId; }
    inline bool RotationIdHasBeenSet() const { return m_rotationIdHasBeenSet; }
    template<typename RotationIdT = Aws::String>
    void SetRotationId(RotationIdT&& value) { m_rotationIdHasBeenSet = true; m_rotationId = std::forward<RotationIdT>(value); }
    template<typename RotationIdT = Aws::String>
    GetRotationOverrideRequest& WithRotationId(RotationIdT&& value) { SetRotationId(std::forward<RotationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the on-call rotation override to retrieve
     * information about.</p>
     */
    inline const Aws::String& GetRotationOverrideId() const { return m_rotationOverrideId; }
    inline bool RotationOverrideIdHasBeenSet() const { return m_rotationOverrideIdHasBeenSet; }
    template<typename RotationOverrideIdT = Aws::String>
    void SetRotationOverrideId(RotationOverrideIdT&& value) { m_rotationOverrideIdHasBeenSet = true; m_rotationOverrideId = std::forward<RotationOverrideIdT>(value); }
    template<typename RotationOverrideIdT = Aws::String>
    GetRotationOverrideRequest& WithRotationOverrideId(RotationOverrideIdT&& value) { SetRotationOverrideId(std::forward<RotationOverrideIdT>(value)); return *this;}
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
