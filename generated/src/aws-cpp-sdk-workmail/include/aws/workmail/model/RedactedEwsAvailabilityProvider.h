/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
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
namespace WorkMail
{
namespace Model
{

  /**
   * <p>Describes an EWS based availability provider when returned from the service.
   * It does not contain the password of the endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/RedactedEwsAvailabilityProvider">AWS
   * API Reference</a></p>
   */
  class RedactedEwsAvailabilityProvider
  {
  public:
    AWS_WORKMAIL_API RedactedEwsAvailabilityProvider() = default;
    AWS_WORKMAIL_API RedactedEwsAvailabilityProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API RedactedEwsAvailabilityProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The endpoint of the remote EWS server.</p>
     */
    inline const Aws::String& GetEwsEndpoint() const { return m_ewsEndpoint; }
    inline bool EwsEndpointHasBeenSet() const { return m_ewsEndpointHasBeenSet; }
    template<typename EwsEndpointT = Aws::String>
    void SetEwsEndpoint(EwsEndpointT&& value) { m_ewsEndpointHasBeenSet = true; m_ewsEndpoint = std::forward<EwsEndpointT>(value); }
    template<typename EwsEndpointT = Aws::String>
    RedactedEwsAvailabilityProvider& WithEwsEndpoint(EwsEndpointT&& value) { SetEwsEndpoint(std::forward<EwsEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The username used to authenticate the remote EWS server.</p>
     */
    inline const Aws::String& GetEwsUsername() const { return m_ewsUsername; }
    inline bool EwsUsernameHasBeenSet() const { return m_ewsUsernameHasBeenSet; }
    template<typename EwsUsernameT = Aws::String>
    void SetEwsUsername(EwsUsernameT&& value) { m_ewsUsernameHasBeenSet = true; m_ewsUsername = std::forward<EwsUsernameT>(value); }
    template<typename EwsUsernameT = Aws::String>
    RedactedEwsAvailabilityProvider& WithEwsUsername(EwsUsernameT&& value) { SetEwsUsername(std::forward<EwsUsernameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ewsEndpoint;
    bool m_ewsEndpointHasBeenSet = false;

    Aws::String m_ewsUsername;
    bool m_ewsUsernameHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
