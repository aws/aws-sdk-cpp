/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/pi/PIRequest.h>
#include <aws/pi/model/ServiceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pi/model/Tag.h>
#include <utility>

namespace Aws
{
namespace PI
{
namespace Model
{

  /**
   */
  class CreatePerformanceAnalysisReportRequest : public PIRequest
  {
  public:
    AWS_PI_API CreatePerformanceAnalysisReportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePerformanceAnalysisReport"; }

    AWS_PI_API Aws::String SerializePayload() const override;

    AWS_PI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Web Services service for which Performance Insights will return
     * metrics. Valid value is <code>RDS</code>.</p>
     */
    inline const ServiceType& GetServiceType() const{ return m_serviceType; }

    /**
     * <p>The Amazon Web Services service for which Performance Insights will return
     * metrics. Valid value is <code>RDS</code>.</p>
     */
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }

    /**
     * <p>The Amazon Web Services service for which Performance Insights will return
     * metrics. Valid value is <code>RDS</code>.</p>
     */
    inline void SetServiceType(const ServiceType& value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }

    /**
     * <p>The Amazon Web Services service for which Performance Insights will return
     * metrics. Valid value is <code>RDS</code>.</p>
     */
    inline void SetServiceType(ServiceType&& value) { m_serviceTypeHasBeenSet = true; m_serviceType = std::move(value); }

    /**
     * <p>The Amazon Web Services service for which Performance Insights will return
     * metrics. Valid value is <code>RDS</code>.</p>
     */
    inline CreatePerformanceAnalysisReportRequest& WithServiceType(const ServiceType& value) { SetServiceType(value); return *this;}

    /**
     * <p>The Amazon Web Services service for which Performance Insights will return
     * metrics. Valid value is <code>RDS</code>.</p>
     */
    inline CreatePerformanceAnalysisReportRequest& WithServiceType(ServiceType&& value) { SetServiceType(std::move(value)); return *this;}


    /**
     * <p>An immutable, Amazon Web Services Region-unique identifier for a data source.
     * Performance Insights gathers metrics from this data source.</p> <p>To use an
     * Amazon RDS instance as a data source, you specify its <code>DbiResourceId</code>
     * value. For example, specify <code>db-ADECBTYHKTSAUMUZQYPDS2GW4A</code>.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>An immutable, Amazon Web Services Region-unique identifier for a data source.
     * Performance Insights gathers metrics from this data source.</p> <p>To use an
     * Amazon RDS instance as a data source, you specify its <code>DbiResourceId</code>
     * value. For example, specify <code>db-ADECBTYHKTSAUMUZQYPDS2GW4A</code>.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>An immutable, Amazon Web Services Region-unique identifier for a data source.
     * Performance Insights gathers metrics from this data source.</p> <p>To use an
     * Amazon RDS instance as a data source, you specify its <code>DbiResourceId</code>
     * value. For example, specify <code>db-ADECBTYHKTSAUMUZQYPDS2GW4A</code>.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>An immutable, Amazon Web Services Region-unique identifier for a data source.
     * Performance Insights gathers metrics from this data source.</p> <p>To use an
     * Amazon RDS instance as a data source, you specify its <code>DbiResourceId</code>
     * value. For example, specify <code>db-ADECBTYHKTSAUMUZQYPDS2GW4A</code>.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>An immutable, Amazon Web Services Region-unique identifier for a data source.
     * Performance Insights gathers metrics from this data source.</p> <p>To use an
     * Amazon RDS instance as a data source, you specify its <code>DbiResourceId</code>
     * value. For example, specify <code>db-ADECBTYHKTSAUMUZQYPDS2GW4A</code>.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>An immutable, Amazon Web Services Region-unique identifier for a data source.
     * Performance Insights gathers metrics from this data source.</p> <p>To use an
     * Amazon RDS instance as a data source, you specify its <code>DbiResourceId</code>
     * value. For example, specify <code>db-ADECBTYHKTSAUMUZQYPDS2GW4A</code>.</p>
     */
    inline CreatePerformanceAnalysisReportRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>An immutable, Amazon Web Services Region-unique identifier for a data source.
     * Performance Insights gathers metrics from this data source.</p> <p>To use an
     * Amazon RDS instance as a data source, you specify its <code>DbiResourceId</code>
     * value. For example, specify <code>db-ADECBTYHKTSAUMUZQYPDS2GW4A</code>.</p>
     */
    inline CreatePerformanceAnalysisReportRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>An immutable, Amazon Web Services Region-unique identifier for a data source.
     * Performance Insights gathers metrics from this data source.</p> <p>To use an
     * Amazon RDS instance as a data source, you specify its <code>DbiResourceId</code>
     * value. For example, specify <code>db-ADECBTYHKTSAUMUZQYPDS2GW4A</code>.</p>
     */
    inline CreatePerformanceAnalysisReportRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>The start time defined for the analysis report.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time defined for the analysis report.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time defined for the analysis report.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time defined for the analysis report.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time defined for the analysis report.</p>
     */
    inline CreatePerformanceAnalysisReportRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time defined for the analysis report.</p>
     */
    inline CreatePerformanceAnalysisReportRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end time defined for the analysis report.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time defined for the analysis report.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time defined for the analysis report.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time defined for the analysis report.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end time defined for the analysis report.</p>
     */
    inline CreatePerformanceAnalysisReportRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end time defined for the analysis report.</p>
     */
    inline CreatePerformanceAnalysisReportRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The metadata assigned to the analysis report consisting of a key-value
     * pair.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The metadata assigned to the analysis report consisting of a key-value
     * pair.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The metadata assigned to the analysis report consisting of a key-value
     * pair.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The metadata assigned to the analysis report consisting of a key-value
     * pair.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The metadata assigned to the analysis report consisting of a key-value
     * pair.</p>
     */
    inline CreatePerformanceAnalysisReportRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The metadata assigned to the analysis report consisting of a key-value
     * pair.</p>
     */
    inline CreatePerformanceAnalysisReportRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The metadata assigned to the analysis report consisting of a key-value
     * pair.</p>
     */
    inline CreatePerformanceAnalysisReportRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The metadata assigned to the analysis report consisting of a key-value
     * pair.</p>
     */
    inline CreatePerformanceAnalysisReportRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    ServiceType m_serviceType;
    bool m_serviceTypeHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
