/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AppType.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class DescribeAppRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribeAppRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeApp"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The domain ID.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline DescribeAppRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline DescribeAppRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline DescribeAppRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user profile name. If this value is not set, then <code>SpaceName</code>
     * must be set.</p>
     */
    inline const Aws::String& GetUserProfileName() const{ return m_userProfileName; }
    inline bool UserProfileNameHasBeenSet() const { return m_userProfileNameHasBeenSet; }
    inline void SetUserProfileName(const Aws::String& value) { m_userProfileNameHasBeenSet = true; m_userProfileName = value; }
    inline void SetUserProfileName(Aws::String&& value) { m_userProfileNameHasBeenSet = true; m_userProfileName = std::move(value); }
    inline void SetUserProfileName(const char* value) { m_userProfileNameHasBeenSet = true; m_userProfileName.assign(value); }
    inline DescribeAppRequest& WithUserProfileName(const Aws::String& value) { SetUserProfileName(value); return *this;}
    inline DescribeAppRequest& WithUserProfileName(Aws::String&& value) { SetUserProfileName(std::move(value)); return *this;}
    inline DescribeAppRequest& WithUserProfileName(const char* value) { SetUserProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }
    inline bool SpaceNameHasBeenSet() const { return m_spaceNameHasBeenSet; }
    inline void SetSpaceName(const Aws::String& value) { m_spaceNameHasBeenSet = true; m_spaceName = value; }
    inline void SetSpaceName(Aws::String&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::move(value); }
    inline void SetSpaceName(const char* value) { m_spaceNameHasBeenSet = true; m_spaceName.assign(value); }
    inline DescribeAppRequest& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}
    inline DescribeAppRequest& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}
    inline DescribeAppRequest& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of app.</p>
     */
    inline const AppType& GetAppType() const{ return m_appType; }
    inline bool AppTypeHasBeenSet() const { return m_appTypeHasBeenSet; }
    inline void SetAppType(const AppType& value) { m_appTypeHasBeenSet = true; m_appType = value; }
    inline void SetAppType(AppType&& value) { m_appTypeHasBeenSet = true; m_appType = std::move(value); }
    inline DescribeAppRequest& WithAppType(const AppType& value) { SetAppType(value); return *this;}
    inline DescribeAppRequest& WithAppType(AppType&& value) { SetAppType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the app.</p>
     */
    inline const Aws::String& GetAppName() const{ return m_appName; }
    inline bool AppNameHasBeenSet() const { return m_appNameHasBeenSet; }
    inline void SetAppName(const Aws::String& value) { m_appNameHasBeenSet = true; m_appName = value; }
    inline void SetAppName(Aws::String&& value) { m_appNameHasBeenSet = true; m_appName = std::move(value); }
    inline void SetAppName(const char* value) { m_appNameHasBeenSet = true; m_appName.assign(value); }
    inline DescribeAppRequest& WithAppName(const Aws::String& value) { SetAppName(value); return *this;}
    inline DescribeAppRequest& WithAppName(Aws::String&& value) { SetAppName(std::move(value)); return *this;}
    inline DescribeAppRequest& WithAppName(const char* value) { SetAppName(value); return *this;}
    ///@}
  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_userProfileName;
    bool m_userProfileNameHasBeenSet = false;

    Aws::String m_spaceName;
    bool m_spaceNameHasBeenSet = false;

    AppType m_appType;
    bool m_appTypeHasBeenSet = false;

    Aws::String m_appName;
    bool m_appNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
