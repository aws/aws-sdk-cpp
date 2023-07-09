/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/medialive/model/AccountConfiguration.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * List of account configuration parameters to update.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateAccountConfigurationRequest">AWS
   * API Reference</a></p>
   */
  class UpdateAccountConfigurationRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API UpdateAccountConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAccountConfiguration"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    
    inline const AccountConfiguration& GetAccountConfiguration() const{ return m_accountConfiguration; }

    
    inline bool AccountConfigurationHasBeenSet() const { return m_accountConfigurationHasBeenSet; }

    
    inline void SetAccountConfiguration(const AccountConfiguration& value) { m_accountConfigurationHasBeenSet = true; m_accountConfiguration = value; }

    
    inline void SetAccountConfiguration(AccountConfiguration&& value) { m_accountConfigurationHasBeenSet = true; m_accountConfiguration = std::move(value); }

    
    inline UpdateAccountConfigurationRequest& WithAccountConfiguration(const AccountConfiguration& value) { SetAccountConfiguration(value); return *this;}

    
    inline UpdateAccountConfigurationRequest& WithAccountConfiguration(AccountConfiguration&& value) { SetAccountConfiguration(std::move(value)); return *this;}

  private:

    AccountConfiguration m_accountConfiguration;
    bool m_accountConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
