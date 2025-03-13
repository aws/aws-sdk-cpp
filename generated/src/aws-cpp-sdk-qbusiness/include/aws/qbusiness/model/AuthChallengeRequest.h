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
   * <p>A request made by Amazon Q Business to a third paty authentication server to
   * authenticate a custom plugin user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/AuthChallengeRequest">AWS
   * API Reference</a></p>
   */
  class AuthChallengeRequest
  {
  public:
    AWS_QBUSINESS_API AuthChallengeRequest() = default;
    AWS_QBUSINESS_API AuthChallengeRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API AuthChallengeRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL sent by Amazon Q Business to the third party authentication server to
     * authenticate a custom plugin user through an OAuth protocol.</p>
     */
    inline const Aws::String& GetAuthorizationUrl() const { return m_authorizationUrl; }
    inline bool AuthorizationUrlHasBeenSet() const { return m_authorizationUrlHasBeenSet; }
    template<typename AuthorizationUrlT = Aws::String>
    void SetAuthorizationUrl(AuthorizationUrlT&& value) { m_authorizationUrlHasBeenSet = true; m_authorizationUrl = std::forward<AuthorizationUrlT>(value); }
    template<typename AuthorizationUrlT = Aws::String>
    AuthChallengeRequest& WithAuthorizationUrl(AuthorizationUrlT&& value) { SetAuthorizationUrl(std::forward<AuthorizationUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_authorizationUrl;
    bool m_authorizationUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
