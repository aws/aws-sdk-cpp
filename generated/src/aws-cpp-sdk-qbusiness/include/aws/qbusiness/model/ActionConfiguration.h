/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/ActionFilterConfiguration.h>
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
   * <p>Specifies an allowed action and its associated filter
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ActionConfiguration">AWS
   * API Reference</a></p>
   */
  class ActionConfiguration
  {
  public:
    AWS_QBUSINESS_API ActionConfiguration();
    AWS_QBUSINESS_API ActionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ActionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Q Business action that is allowed.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }
    inline ActionConfiguration& WithAction(const Aws::String& value) { SetAction(value); return *this;}
    inline ActionConfiguration& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}
    inline ActionConfiguration& WithAction(const char* value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter configuration for the action, if any.</p>
     */
    inline const ActionFilterConfiguration& GetFilterConfiguration() const{ return m_filterConfiguration; }
    inline bool FilterConfigurationHasBeenSet() const { return m_filterConfigurationHasBeenSet; }
    inline void SetFilterConfiguration(const ActionFilterConfiguration& value) { m_filterConfigurationHasBeenSet = true; m_filterConfiguration = value; }
    inline void SetFilterConfiguration(ActionFilterConfiguration&& value) { m_filterConfigurationHasBeenSet = true; m_filterConfiguration = std::move(value); }
    inline ActionConfiguration& WithFilterConfiguration(const ActionFilterConfiguration& value) { SetFilterConfiguration(value); return *this;}
    inline ActionConfiguration& WithFilterConfiguration(ActionFilterConfiguration&& value) { SetFilterConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    ActionFilterConfiguration m_filterConfiguration;
    bool m_filterConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
