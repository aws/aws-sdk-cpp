/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QBusiness
{
namespace Model
{

  /**
   */
  class DeleteWebExperienceRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API DeleteWebExperienceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteWebExperience"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Q application linked to the Amazon Q web
     * experience.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The identifier of the Amazon Q application linked to the Amazon Q web
     * experience.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Q application linked to the Amazon Q web
     * experience.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The identifier of the Amazon Q application linked to the Amazon Q web
     * experience.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q application linked to the Amazon Q web
     * experience.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q application linked to the Amazon Q web
     * experience.</p>
     */
    inline DeleteWebExperienceRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q application linked to the Amazon Q web
     * experience.</p>
     */
    inline DeleteWebExperienceRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q application linked to the Amazon Q web
     * experience.</p>
     */
    inline DeleteWebExperienceRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The identifier of the Amazon Q web experience being deleted.</p>
     */
    inline const Aws::String& GetWebExperienceId() const{ return m_webExperienceId; }

    /**
     * <p>The identifier of the Amazon Q web experience being deleted.</p>
     */
    inline bool WebExperienceIdHasBeenSet() const { return m_webExperienceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Q web experience being deleted.</p>
     */
    inline void SetWebExperienceId(const Aws::String& value) { m_webExperienceIdHasBeenSet = true; m_webExperienceId = value; }

    /**
     * <p>The identifier of the Amazon Q web experience being deleted.</p>
     */
    inline void SetWebExperienceId(Aws::String&& value) { m_webExperienceIdHasBeenSet = true; m_webExperienceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q web experience being deleted.</p>
     */
    inline void SetWebExperienceId(const char* value) { m_webExperienceIdHasBeenSet = true; m_webExperienceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q web experience being deleted.</p>
     */
    inline DeleteWebExperienceRequest& WithWebExperienceId(const Aws::String& value) { SetWebExperienceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q web experience being deleted.</p>
     */
    inline DeleteWebExperienceRequest& WithWebExperienceId(Aws::String&& value) { SetWebExperienceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q web experience being deleted.</p>
     */
    inline DeleteWebExperienceRequest& WithWebExperienceId(const char* value) { SetWebExperienceId(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_webExperienceId;
    bool m_webExperienceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
