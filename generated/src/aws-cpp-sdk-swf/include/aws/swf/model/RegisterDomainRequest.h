/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/swf/SWFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/swf/model/ResourceTag.h>
#include <utility>

namespace Aws
{
namespace SWF
{
namespace Model
{

  /**
   */
  class RegisterDomainRequest : public SWFRequest
  {
  public:
    AWS_SWF_API RegisterDomainRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterDomain"; }

    AWS_SWF_API Aws::String SerializePayload() const override;

    AWS_SWF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Name of the domain to register. The name must be unique in the region that
     * the domain is registered in.</p> <p>The specified string must not start or end
     * with whitespace. It must not contain a <code>:</code> (colon), <code>/</code>
     * (slash), <code>|</code> (vertical bar), or any control characters
     * (<code>\u0000-\u001f</code> | <code>\u007f-\u009f</code>). Also, it must
     * <i>not</i> be the literal string <code>arn</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RegisterDomainRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A text description of the domain.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    RegisterDomainRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration (in days) that records and histories of workflow executions on
     * the domain should be kept by the service. After the retention period, the
     * workflow execution isn't available in the results of visibility calls.</p> <p>If
     * you pass the value <code>NONE</code> or <code>0</code> (zero), then the workflow
     * execution history isn't retained. As soon as the workflow execution completes,
     * the execution record and its history are deleted.</p> <p>The maximum workflow
     * execution retention period is 90 days. For more information about Amazon SWF
     * service limits, see: <a
     * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dg-limits.html">Amazon
     * SWF Service Limits</a> in the <i>Amazon SWF Developer Guide</i>.</p>
     */
    inline const Aws::String& GetWorkflowExecutionRetentionPeriodInDays() const { return m_workflowExecutionRetentionPeriodInDays; }
    inline bool WorkflowExecutionRetentionPeriodInDaysHasBeenSet() const { return m_workflowExecutionRetentionPeriodInDaysHasBeenSet; }
    template<typename WorkflowExecutionRetentionPeriodInDaysT = Aws::String>
    void SetWorkflowExecutionRetentionPeriodInDays(WorkflowExecutionRetentionPeriodInDaysT&& value) { m_workflowExecutionRetentionPeriodInDaysHasBeenSet = true; m_workflowExecutionRetentionPeriodInDays = std::forward<WorkflowExecutionRetentionPeriodInDaysT>(value); }
    template<typename WorkflowExecutionRetentionPeriodInDaysT = Aws::String>
    RegisterDomainRequest& WithWorkflowExecutionRetentionPeriodInDays(WorkflowExecutionRetentionPeriodInDaysT&& value) { SetWorkflowExecutionRetentionPeriodInDays(std::forward<WorkflowExecutionRetentionPeriodInDaysT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to be added when registering a domain.</p> <p>Tags may only contain
     * unicode letters, digits, whitespace, or these symbols: <code>_ . : / = + -
     * @</code>.</p>
     */
    inline const Aws::Vector<ResourceTag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<ResourceTag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<ResourceTag>>
    RegisterDomainRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = ResourceTag>
    RegisterDomainRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_workflowExecutionRetentionPeriodInDays;
    bool m_workflowExecutionRetentionPeriodInDaysHasBeenSet = false;

    Aws::Vector<ResourceTag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
