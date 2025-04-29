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
  class CreateAnonymousWebExperienceUrlRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API CreateAnonymousWebExperienceUrlRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAnonymousWebExperienceUrl"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Q Business application environment attached to
     * the web experience.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    CreateAnonymousWebExperienceUrlRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the web experience.</p>
     */
    inline const Aws::String& GetWebExperienceId() const { return m_webExperienceId; }
    inline bool WebExperienceIdHasBeenSet() const { return m_webExperienceIdHasBeenSet; }
    template<typename WebExperienceIdT = Aws::String>
    void SetWebExperienceId(WebExperienceIdT&& value) { m_webExperienceIdHasBeenSet = true; m_webExperienceId = std::forward<WebExperienceIdT>(value); }
    template<typename WebExperienceIdT = Aws::String>
    CreateAnonymousWebExperienceUrlRequest& WithWebExperienceId(WebExperienceIdT&& value) { SetWebExperienceId(std::forward<WebExperienceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the session associated with the unique URL for the web
     * experience.</p>
     */
    inline int GetSessionDurationInMinutes() const { return m_sessionDurationInMinutes; }
    inline bool SessionDurationInMinutesHasBeenSet() const { return m_sessionDurationInMinutesHasBeenSet; }
    inline void SetSessionDurationInMinutes(int value) { m_sessionDurationInMinutesHasBeenSet = true; m_sessionDurationInMinutes = value; }
    inline CreateAnonymousWebExperienceUrlRequest& WithSessionDurationInMinutes(int value) { SetSessionDurationInMinutes(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_webExperienceId;
    bool m_webExperienceIdHasBeenSet = false;

    int m_sessionDurationInMinutes{0};
    bool m_sessionDurationInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
