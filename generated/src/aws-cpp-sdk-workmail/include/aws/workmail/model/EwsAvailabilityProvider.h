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
   * <p>Describes an EWS based availability provider. This is only used as input to
   * the service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/EwsAvailabilityProvider">AWS
   * API Reference</a></p>
   */
  class EwsAvailabilityProvider
  {
  public:
    AWS_WORKMAIL_API EwsAvailabilityProvider() = default;
    AWS_WORKMAIL_API EwsAvailabilityProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API EwsAvailabilityProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    EwsAvailabilityProvider& WithEwsEndpoint(EwsEndpointT&& value) { SetEwsEndpoint(std::forward<EwsEndpointT>(value)); return *this;}
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
    EwsAvailabilityProvider& WithEwsUsername(EwsUsernameT&& value) { SetEwsUsername(std::forward<EwsUsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password used to authenticate the remote EWS server.</p>
     */
    inline const Aws::String& GetEwsPassword() const { return m_ewsPassword; }
    inline bool EwsPasswordHasBeenSet() const { return m_ewsPasswordHasBeenSet; }
    template<typename EwsPasswordT = Aws::String>
    void SetEwsPassword(EwsPasswordT&& value) { m_ewsPasswordHasBeenSet = true; m_ewsPassword = std::forward<EwsPasswordT>(value); }
    template<typename EwsPasswordT = Aws::String>
    EwsAvailabilityProvider& WithEwsPassword(EwsPasswordT&& value) { SetEwsPassword(std::forward<EwsPasswordT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ewsEndpoint;
    bool m_ewsEndpointHasBeenSet = false;

    Aws::String m_ewsUsername;
    bool m_ewsUsernameHasBeenSet = false;

    Aws::String m_ewsPassword;
    bool m_ewsPasswordHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
