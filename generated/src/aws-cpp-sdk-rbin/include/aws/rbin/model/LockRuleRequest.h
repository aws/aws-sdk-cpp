/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rbin/RecycleBin_EXPORTS.h>
#include <aws/rbin/RecycleBinRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rbin/model/LockConfiguration.h>
#include <utility>

namespace Aws
{
namespace RecycleBin
{
namespace Model
{

  /**
   */
  class LockRuleRequest : public RecycleBinRequest
  {
  public:
    AWS_RECYCLEBIN_API LockRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "LockRule"; }

    AWS_RECYCLEBIN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique ID of the retention rule.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    LockRuleRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the retention rule lock configuration.</p>
     */
    inline const LockConfiguration& GetLockConfiguration() const { return m_lockConfiguration; }
    inline bool LockConfigurationHasBeenSet() const { return m_lockConfigurationHasBeenSet; }
    template<typename LockConfigurationT = LockConfiguration>
    void SetLockConfiguration(LockConfigurationT&& value) { m_lockConfigurationHasBeenSet = true; m_lockConfiguration = std::forward<LockConfigurationT>(value); }
    template<typename LockConfigurationT = LockConfiguration>
    LockRuleRequest& WithLockConfiguration(LockConfigurationT&& value) { SetLockConfiguration(std::forward<LockConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    LockConfiguration m_lockConfiguration;
    bool m_lockConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace RecycleBin
} // namespace Aws
