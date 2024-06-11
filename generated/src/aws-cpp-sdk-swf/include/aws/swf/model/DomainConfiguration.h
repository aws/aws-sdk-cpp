﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
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
namespace SWF
{
namespace Model
{

  /**
   * <p>Contains the configuration settings of a domain.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DomainConfiguration">AWS
   * API Reference</a></p>
   */
  class DomainConfiguration
  {
  public:
    AWS_SWF_API DomainConfiguration();
    AWS_SWF_API DomainConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API DomainConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The retention period for workflow executions in this domain.</p>
     */
    inline const Aws::String& GetWorkflowExecutionRetentionPeriodInDays() const{ return m_workflowExecutionRetentionPeriodInDays; }
    inline bool WorkflowExecutionRetentionPeriodInDaysHasBeenSet() const { return m_workflowExecutionRetentionPeriodInDaysHasBeenSet; }
    inline void SetWorkflowExecutionRetentionPeriodInDays(const Aws::String& value) { m_workflowExecutionRetentionPeriodInDaysHasBeenSet = true; m_workflowExecutionRetentionPeriodInDays = value; }
    inline void SetWorkflowExecutionRetentionPeriodInDays(Aws::String&& value) { m_workflowExecutionRetentionPeriodInDaysHasBeenSet = true; m_workflowExecutionRetentionPeriodInDays = std::move(value); }
    inline void SetWorkflowExecutionRetentionPeriodInDays(const char* value) { m_workflowExecutionRetentionPeriodInDaysHasBeenSet = true; m_workflowExecutionRetentionPeriodInDays.assign(value); }
    inline DomainConfiguration& WithWorkflowExecutionRetentionPeriodInDays(const Aws::String& value) { SetWorkflowExecutionRetentionPeriodInDays(value); return *this;}
    inline DomainConfiguration& WithWorkflowExecutionRetentionPeriodInDays(Aws::String&& value) { SetWorkflowExecutionRetentionPeriodInDays(std::move(value)); return *this;}
    inline DomainConfiguration& WithWorkflowExecutionRetentionPeriodInDays(const char* value) { SetWorkflowExecutionRetentionPeriodInDays(value); return *this;}
    ///@}
  private:

    Aws::String m_workflowExecutionRetentionPeriodInDays;
    bool m_workflowExecutionRetentionPeriodInDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
