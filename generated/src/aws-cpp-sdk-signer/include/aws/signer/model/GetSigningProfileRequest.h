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
namespace Http
{
    class URI;
} //namespace Http
namespace signer
{
namespace Model
{

  /**
   */
  class GetSigningProfileRequest : public SignerRequest
  {
  public:
    AWS_SIGNER_API GetSigningProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSigningProfile"; }

    AWS_SIGNER_API Aws::String SerializePayload() const override;

    AWS_SIGNER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the target signing profile.</p>
     */
    inline const Aws::String& GetProfileName() const{ return m_profileName; }
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }
    inline void SetProfileName(const Aws::String& value) { m_profileNameHasBeenSet = true; m_profileName = value; }
    inline void SetProfileName(Aws::String&& value) { m_profileNameHasBeenSet = true; m_profileName = std::move(value); }
    inline void SetProfileName(const char* value) { m_profileNameHasBeenSet = true; m_profileName.assign(value); }
    inline GetSigningProfileRequest& WithProfileName(const Aws::String& value) { SetProfileName(value); return *this;}
    inline GetSigningProfileRequest& WithProfileName(Aws::String&& value) { SetProfileName(std::move(value)); return *this;}
    inline GetSigningProfileRequest& WithProfileName(const char* value) { SetProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS account ID of the profile owner.</p>
     */
    inline const Aws::String& GetProfileOwner() const{ return m_profileOwner; }
    inline bool ProfileOwnerHasBeenSet() const { return m_profileOwnerHasBeenSet; }
    inline void SetProfileOwner(const Aws::String& value) { m_profileOwnerHasBeenSet = true; m_profileOwner = value; }
    inline void SetProfileOwner(Aws::String&& value) { m_profileOwnerHasBeenSet = true; m_profileOwner = std::move(value); }
    inline void SetProfileOwner(const char* value) { m_profileOwnerHasBeenSet = true; m_profileOwner.assign(value); }
    inline GetSigningProfileRequest& WithProfileOwner(const Aws::String& value) { SetProfileOwner(value); return *this;}
    inline GetSigningProfileRequest& WithProfileOwner(Aws::String&& value) { SetProfileOwner(std::move(value)); return *this;}
    inline GetSigningProfileRequest& WithProfileOwner(const char* value) { SetProfileOwner(value); return *this;}
    ///@}
  private:

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet = false;

    Aws::String m_profileOwner;
    bool m_profileOwnerHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
