/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/DataCaptureConfigSummary.h>
#include <aws/sagemaker/model/EndpointStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ProductionVariantSummary.h>
#include <aws/sagemaker/model/MonitoringSchedule.h>
#include <aws/sagemaker/model/Tag.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A hosted endpoint for real-time inference.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Endpoint">AWS
   * API Reference</a></p>
   */
  class Endpoint
  {
  public:
    AWS_SAGEMAKER_API Endpoint() = default;
    AWS_SAGEMAKER_API Endpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Endpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the endpoint.</p>
     */
    inline const Aws::String& GetEndpointName() const { return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    template<typename EndpointNameT = Aws::String>
    void SetEndpointName(EndpointNameT&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::forward<EndpointNameT>(value); }
    template<typename EndpointNameT = Aws::String>
    Endpoint& WithEndpointName(EndpointNameT&& value) { SetEndpointName(std::forward<EndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline const Aws::String& GetEndpointArn() const { return m_endpointArn; }
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }
    template<typename EndpointArnT = Aws::String>
    void SetEndpointArn(EndpointArnT&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::forward<EndpointArnT>(value); }
    template<typename EndpointArnT = Aws::String>
    Endpoint& WithEndpointArn(EndpointArnT&& value) { SetEndpointArn(std::forward<EndpointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint configuration associated with the endpoint.</p>
     */
    inline const Aws::String& GetEndpointConfigName() const { return m_endpointConfigName; }
    inline bool EndpointConfigNameHasBeenSet() const { return m_endpointConfigNameHasBeenSet; }
    template<typename EndpointConfigNameT = Aws::String>
    void SetEndpointConfigName(EndpointConfigNameT&& value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName = std::forward<EndpointConfigNameT>(value); }
    template<typename EndpointConfigNameT = Aws::String>
    Endpoint& WithEndpointConfigName(EndpointConfigNameT&& value) { SetEndpointConfigName(std::forward<EndpointConfigNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the production variants hosted on the endpoint. Each production
     * variant is a model.</p>
     */
    inline const Aws::Vector<ProductionVariantSummary>& GetProductionVariants() const { return m_productionVariants; }
    inline bool ProductionVariantsHasBeenSet() const { return m_productionVariantsHasBeenSet; }
    template<typename ProductionVariantsT = Aws::Vector<ProductionVariantSummary>>
    void SetProductionVariants(ProductionVariantsT&& value) { m_productionVariantsHasBeenSet = true; m_productionVariants = std::forward<ProductionVariantsT>(value); }
    template<typename ProductionVariantsT = Aws::Vector<ProductionVariantSummary>>
    Endpoint& WithProductionVariants(ProductionVariantsT&& value) { SetProductionVariants(std::forward<ProductionVariantsT>(value)); return *this;}
    template<typename ProductionVariantsT = ProductionVariantSummary>
    Endpoint& AddProductionVariants(ProductionVariantsT&& value) { m_productionVariantsHasBeenSet = true; m_productionVariants.emplace_back(std::forward<ProductionVariantsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const DataCaptureConfigSummary& GetDataCaptureConfig() const { return m_dataCaptureConfig; }
    inline bool DataCaptureConfigHasBeenSet() const { return m_dataCaptureConfigHasBeenSet; }
    template<typename DataCaptureConfigT = DataCaptureConfigSummary>
    void SetDataCaptureConfig(DataCaptureConfigT&& value) { m_dataCaptureConfigHasBeenSet = true; m_dataCaptureConfig = std::forward<DataCaptureConfigT>(value); }
    template<typename DataCaptureConfigT = DataCaptureConfigSummary>
    Endpoint& WithDataCaptureConfig(DataCaptureConfigT&& value) { SetDataCaptureConfig(std::forward<DataCaptureConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the endpoint.</p>
     */
    inline EndpointStatus GetEndpointStatus() const { return m_endpointStatus; }
    inline bool EndpointStatusHasBeenSet() const { return m_endpointStatusHasBeenSet; }
    inline void SetEndpointStatus(EndpointStatus value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = value; }
    inline Endpoint& WithEndpointStatus(EndpointStatus value) { SetEndpointStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the endpoint failed, the reason it failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    Endpoint& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    Endpoint& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the endpoint was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    Endpoint& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of monitoring schedules for the endpoint. For information about model
     * monitoring, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor.html">Amazon
     * SageMaker Model Monitor</a>.</p>
     */
    inline const Aws::Vector<MonitoringSchedule>& GetMonitoringSchedules() const { return m_monitoringSchedules; }
    inline bool MonitoringSchedulesHasBeenSet() const { return m_monitoringSchedulesHasBeenSet; }
    template<typename MonitoringSchedulesT = Aws::Vector<MonitoringSchedule>>
    void SetMonitoringSchedules(MonitoringSchedulesT&& value) { m_monitoringSchedulesHasBeenSet = true; m_monitoringSchedules = std::forward<MonitoringSchedulesT>(value); }
    template<typename MonitoringSchedulesT = Aws::Vector<MonitoringSchedule>>
    Endpoint& WithMonitoringSchedules(MonitoringSchedulesT&& value) { SetMonitoringSchedules(std::forward<MonitoringSchedulesT>(value)); return *this;}
    template<typename MonitoringSchedulesT = MonitoringSchedule>
    Endpoint& AddMonitoringSchedules(MonitoringSchedulesT&& value) { m_monitoringSchedulesHasBeenSet = true; m_monitoringSchedules.emplace_back(std::forward<MonitoringSchedulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the tags associated with the endpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Endpoint& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Endpoint& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the shadow variants hosted on the endpoint. Each shadow variant is
     * a model in shadow mode with production traffic replicated from the production
     * variant.</p>
     */
    inline const Aws::Vector<ProductionVariantSummary>& GetShadowProductionVariants() const { return m_shadowProductionVariants; }
    inline bool ShadowProductionVariantsHasBeenSet() const { return m_shadowProductionVariantsHasBeenSet; }
    template<typename ShadowProductionVariantsT = Aws::Vector<ProductionVariantSummary>>
    void SetShadowProductionVariants(ShadowProductionVariantsT&& value) { m_shadowProductionVariantsHasBeenSet = true; m_shadowProductionVariants = std::forward<ShadowProductionVariantsT>(value); }
    template<typename ShadowProductionVariantsT = Aws::Vector<ProductionVariantSummary>>
    Endpoint& WithShadowProductionVariants(ShadowProductionVariantsT&& value) { SetShadowProductionVariants(std::forward<ShadowProductionVariantsT>(value)); return *this;}
    template<typename ShadowProductionVariantsT = ProductionVariantSummary>
    Endpoint& AddShadowProductionVariants(ShadowProductionVariantsT&& value) { m_shadowProductionVariantsHasBeenSet = true; m_shadowProductionVariants.emplace_back(std::forward<ShadowProductionVariantsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet = false;

    Aws::String m_endpointConfigName;
    bool m_endpointConfigNameHasBeenSet = false;

    Aws::Vector<ProductionVariantSummary> m_productionVariants;
    bool m_productionVariantsHasBeenSet = false;

    DataCaptureConfigSummary m_dataCaptureConfig;
    bool m_dataCaptureConfigHasBeenSet = false;

    EndpointStatus m_endpointStatus{EndpointStatus::NOT_SET};
    bool m_endpointStatusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Vector<MonitoringSchedule> m_monitoringSchedules;
    bool m_monitoringSchedulesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<ProductionVariantSummary> m_shadowProductionVariants;
    bool m_shadowProductionVariantsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
