/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/MonitoringScheduleConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateMonitoringScheduleRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateMonitoringScheduleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMonitoringSchedule"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the monitoring schedule. The name must be unique within an Amazon
     * Web Services Region within an Amazon Web Services account.</p>
     */
    inline const Aws::String& GetMonitoringScheduleName() const { return m_monitoringScheduleName; }
    inline bool MonitoringScheduleNameHasBeenSet() const { return m_monitoringScheduleNameHasBeenSet; }
    template<typename MonitoringScheduleNameT = Aws::String>
    void SetMonitoringScheduleName(MonitoringScheduleNameT&& value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName = std::forward<MonitoringScheduleNameT>(value); }
    template<typename MonitoringScheduleNameT = Aws::String>
    CreateMonitoringScheduleRequest& WithMonitoringScheduleName(MonitoringScheduleNameT&& value) { SetMonitoringScheduleName(std::forward<MonitoringScheduleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration object that specifies the monitoring schedule and defines
     * the monitoring job.</p>
     */
    inline const MonitoringScheduleConfig& GetMonitoringScheduleConfig() const { return m_monitoringScheduleConfig; }
    inline bool MonitoringScheduleConfigHasBeenSet() const { return m_monitoringScheduleConfigHasBeenSet; }
    template<typename MonitoringScheduleConfigT = MonitoringScheduleConfig>
    void SetMonitoringScheduleConfig(MonitoringScheduleConfigT&& value) { m_monitoringScheduleConfigHasBeenSet = true; m_monitoringScheduleConfig = std::forward<MonitoringScheduleConfigT>(value); }
    template<typename MonitoringScheduleConfigT = MonitoringScheduleConfig>
    CreateMonitoringScheduleRequest& WithMonitoringScheduleConfig(MonitoringScheduleConfigT&& value) { SetMonitoringScheduleConfig(std::forward<MonitoringScheduleConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a href="
     * https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateMonitoringScheduleRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateMonitoringScheduleRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_monitoringScheduleName;
    bool m_monitoringScheduleNameHasBeenSet = false;

    MonitoringScheduleConfig m_monitoringScheduleConfig;
    bool m_monitoringScheduleConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
