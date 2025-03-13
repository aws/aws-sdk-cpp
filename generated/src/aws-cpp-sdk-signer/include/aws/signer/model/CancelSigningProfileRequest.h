/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/signer/SignerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace signer
{
namespace Model
{

  /**
   */
  class CancelSigningProfileRequest : public SignerRequest
  {
  public:
    AWS_SIGNER_API CancelSigningProfileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelSigningProfile"; }

    AWS_SIGNER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the signing profile to be canceled.</p>
     */
    inline const Aws::String& GetProfileName() const { return m_profileName; }
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }
    template<typename ProfileNameT = Aws::String>
    void SetProfileName(ProfileNameT&& value) { m_profileNameHasBeenSet = true; m_profileName = std::forward<ProfileNameT>(value); }
    template<typename ProfileNameT = Aws::String>
    CancelSigningProfileRequest& WithProfileName(ProfileNameT&& value) { SetProfileName(std::forward<ProfileNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
