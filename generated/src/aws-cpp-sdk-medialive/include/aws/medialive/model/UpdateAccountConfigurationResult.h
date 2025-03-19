/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AccountConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for UpdateAccountConfigurationResponse<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateAccountConfigurationResponse">AWS
   * API Reference</a></p>
   */
  class UpdateAccountConfigurationResult
  {
  public:
    AWS_MEDIALIVE_API UpdateAccountConfigurationResult() = default;
    AWS_MEDIALIVE_API UpdateAccountConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API UpdateAccountConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const AccountConfiguration& GetAccountConfiguration() const { return m_accountConfiguration; }
    template<typename AccountConfigurationT = AccountConfiguration>
    void SetAccountConfiguration(AccountConfigurationT&& value) { m_accountConfigurationHasBeenSet = true; m_accountConfiguration = std::forward<AccountConfigurationT>(value); }
    template<typename AccountConfigurationT = AccountConfiguration>
    UpdateAccountConfigurationResult& WithAccountConfiguration(AccountConfigurationT&& value) { SetAccountConfiguration(std::forward<AccountConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateAccountConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AccountConfiguration m_accountConfiguration;
    bool m_accountConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
