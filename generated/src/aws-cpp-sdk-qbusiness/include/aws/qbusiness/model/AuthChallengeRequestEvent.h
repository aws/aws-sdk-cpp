/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QBusiness
{
namespace Model
{

  /**
   * <p>An authentication verification event activated by an end user request to use
   * a custom plugin.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/AuthChallengeRequestEvent">AWS
   * API Reference</a></p>
   */
  class AuthChallengeRequestEvent
  {
  public:
    AWS_QBUSINESS_API AuthChallengeRequestEvent();
    AWS_QBUSINESS_API AuthChallengeRequestEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API AuthChallengeRequestEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL sent by Amazon Q Business to a third party authentication server in
     * response to an authentication verification event activated by an end user
     * request to use a custom plugin. </p>
     */
    inline const Aws::String& GetAuthorizationUrl() const{ return m_authorizationUrl; }

    /**
     * <p>The URL sent by Amazon Q Business to a third party authentication server in
     * response to an authentication verification event activated by an end user
     * request to use a custom plugin. </p>
     */
    inline bool AuthorizationUrlHasBeenSet() const { return m_authorizationUrlHasBeenSet; }

    /**
     * <p>The URL sent by Amazon Q Business to a third party authentication server in
     * response to an authentication verification event activated by an end user
     * request to use a custom plugin. </p>
     */
    inline void SetAuthorizationUrl(const Aws::String& value) { m_authorizationUrlHasBeenSet = true; m_authorizationUrl = value; }

    /**
     * <p>The URL sent by Amazon Q Business to a third party authentication server in
     * response to an authentication verification event activated by an end user
     * request to use a custom plugin. </p>
     */
    inline void SetAuthorizationUrl(Aws::String&& value) { m_authorizationUrlHasBeenSet = true; m_authorizationUrl = std::move(value); }

    /**
     * <p>The URL sent by Amazon Q Business to a third party authentication server in
     * response to an authentication verification event activated by an end user
     * request to use a custom plugin. </p>
     */
    inline void SetAuthorizationUrl(const char* value) { m_authorizationUrlHasBeenSet = true; m_authorizationUrl.assign(value); }

    /**
     * <p>The URL sent by Amazon Q Business to a third party authentication server in
     * response to an authentication verification event activated by an end user
     * request to use a custom plugin. </p>
     */
    inline AuthChallengeRequestEvent& WithAuthorizationUrl(const Aws::String& value) { SetAuthorizationUrl(value); return *this;}

    /**
     * <p>The URL sent by Amazon Q Business to a third party authentication server in
     * response to an authentication verification event activated by an end user
     * request to use a custom plugin. </p>
     */
    inline AuthChallengeRequestEvent& WithAuthorizationUrl(Aws::String&& value) { SetAuthorizationUrl(std::move(value)); return *this;}

    /**
     * <p>The URL sent by Amazon Q Business to a third party authentication server in
     * response to an authentication verification event activated by an end user
     * request to use a custom plugin. </p>
     */
    inline AuthChallengeRequestEvent& WithAuthorizationUrl(const char* value) { SetAuthorizationUrl(value); return *this;}

  private:

    Aws::String m_authorizationUrl;
    bool m_authorizationUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
