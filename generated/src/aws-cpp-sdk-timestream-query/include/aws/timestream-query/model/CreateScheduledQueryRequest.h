/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/TimestreamQueryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-query/model/ScheduleConfiguration.h>
#include <aws/timestream-query/model/NotificationConfiguration.h>
#include <aws/timestream-query/model/TargetConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/timestream-query/model/ErrorReportConfiguration.h>
#include <aws/timestream-query/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{

  /**
   */
  class CreateScheduledQueryRequest : public TimestreamQueryRequest
  {
  public:
    AWS_TIMESTREAMQUERY_API CreateScheduledQueryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateScheduledQuery"; }

    AWS_TIMESTREAMQUERY_API Aws::String SerializePayload() const override;

    AWS_TIMESTREAMQUERY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Name of the scheduled query.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateScheduledQueryRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query string to run. Parameter names can be specified in the query string
     * <code>@</code> character followed by an identifier. The named Parameter
     * <code>@scheduled_runtime</code> is reserved and can be used in the query to get
     * the time at which the query is scheduled to run.</p> <p>The timestamp calculated
     * according to the ScheduleConfiguration parameter, will be the value of
     * <code>@scheduled_runtime</code> paramater for each query run. For example,
     * consider an instance of a scheduled query executing on 2021-12-01 00:00:00. For
     * this instance, the <code>@scheduled_runtime</code> parameter is initialized to
     * the timestamp 2021-12-01 00:00:00 when invoking the query.</p>
     */
    inline const Aws::String& GetQueryString() const { return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    template<typename QueryStringT = Aws::String>
    void SetQueryString(QueryStringT&& value) { m_queryStringHasBeenSet = true; m_queryString = std::forward<QueryStringT>(value); }
    template<typename QueryStringT = Aws::String>
    CreateScheduledQueryRequest& WithQueryString(QueryStringT&& value) { SetQueryString(std::forward<QueryStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule configuration for the query.</p>
     */
    inline const ScheduleConfiguration& GetScheduleConfiguration() const { return m_scheduleConfiguration; }
    inline bool ScheduleConfigurationHasBeenSet() const { return m_scheduleConfigurationHasBeenSet; }
    template<typename ScheduleConfigurationT = ScheduleConfiguration>
    void SetScheduleConfiguration(ScheduleConfigurationT&& value) { m_scheduleConfigurationHasBeenSet = true; m_scheduleConfiguration = std::forward<ScheduleConfigurationT>(value); }
    template<typename ScheduleConfigurationT = ScheduleConfiguration>
    CreateScheduledQueryRequest& WithScheduleConfiguration(ScheduleConfigurationT&& value) { SetScheduleConfiguration(std::forward<ScheduleConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Notification configuration for the scheduled query. A notification is sent by
     * Timestream when a query run finishes, when the state is updated or when you
     * delete it. </p>
     */
    inline const NotificationConfiguration& GetNotificationConfiguration() const { return m_notificationConfiguration; }
    inline bool NotificationConfigurationHasBeenSet() const { return m_notificationConfigurationHasBeenSet; }
    template<typename NotificationConfigurationT = NotificationConfiguration>
    void SetNotificationConfiguration(NotificationConfigurationT&& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = std::forward<NotificationConfigurationT>(value); }
    template<typename NotificationConfigurationT = NotificationConfiguration>
    CreateScheduledQueryRequest& WithNotificationConfiguration(NotificationConfigurationT&& value) { SetNotificationConfiguration(std::forward<NotificationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration used for writing the result of a query.</p>
     */
    inline const TargetConfiguration& GetTargetConfiguration() const { return m_targetConfiguration; }
    inline bool TargetConfigurationHasBeenSet() const { return m_targetConfigurationHasBeenSet; }
    template<typename TargetConfigurationT = TargetConfiguration>
    void SetTargetConfiguration(TargetConfigurationT&& value) { m_targetConfigurationHasBeenSet = true; m_targetConfiguration = std::forward<TargetConfigurationT>(value); }
    template<typename TargetConfigurationT = TargetConfiguration>
    CreateScheduledQueryRequest& WithTargetConfiguration(TargetConfigurationT&& value) { SetTargetConfiguration(std::forward<TargetConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Using a ClientToken makes the call to CreateScheduledQuery idempotent, in
     * other words, making the same request repeatedly will produce the same result.
     * Making multiple identical CreateScheduledQuery requests has the same effect as
     * making a single request. </p> <ul> <li> <p> If CreateScheduledQuery is called
     * without a <code>ClientToken</code>, the Query SDK generates a
     * <code>ClientToken</code> on your behalf.</p> </li> <li> <p> After 8 hours, any
     * request with the same <code>ClientToken</code> is treated as a new request. </p>
     * </li> </ul>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateScheduledQueryRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the IAM role that Timestream will assume when running the
     * scheduled query. </p>
     */
    inline const Aws::String& GetScheduledQueryExecutionRoleArn() const { return m_scheduledQueryExecutionRoleArn; }
    inline bool ScheduledQueryExecutionRoleArnHasBeenSet() const { return m_scheduledQueryExecutionRoleArnHasBeenSet; }
    template<typename ScheduledQueryExecutionRoleArnT = Aws::String>
    void SetScheduledQueryExecutionRoleArn(ScheduledQueryExecutionRoleArnT&& value) { m_scheduledQueryExecutionRoleArnHasBeenSet = true; m_scheduledQueryExecutionRoleArn = std::forward<ScheduledQueryExecutionRoleArnT>(value); }
    template<typename ScheduledQueryExecutionRoleArnT = Aws::String>
    CreateScheduledQueryRequest& WithScheduledQueryExecutionRoleArn(ScheduledQueryExecutionRoleArnT&& value) { SetScheduledQueryExecutionRoleArn(std::forward<ScheduledQueryExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs to label the scheduled query.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateScheduledQueryRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateScheduledQueryRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon KMS key used to encrypt the scheduled query resource, at-rest. If
     * the Amazon KMS key is not specified, the scheduled query resource will be
     * encrypted with a Timestream owned Amazon KMS key. To specify a KMS key, use the
     * key ID, key ARN, alias name, or alias ARN. When using an alias name, prefix the
     * name with <i>alias/</i> </p> <p>If ErrorReportConfiguration uses
     * <code>SSE_KMS</code> as encryption type, the same KmsKeyId is used to encrypt
     * the error report at rest.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CreateScheduledQueryRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for error reporting. Error reports will be generated when a
     * problem is encountered when writing the query results. </p>
     */
    inline const ErrorReportConfiguration& GetErrorReportConfiguration() const { return m_errorReportConfiguration; }
    inline bool ErrorReportConfigurationHasBeenSet() const { return m_errorReportConfigurationHasBeenSet; }
    template<typename ErrorReportConfigurationT = ErrorReportConfiguration>
    void SetErrorReportConfiguration(ErrorReportConfigurationT&& value) { m_errorReportConfigurationHasBeenSet = true; m_errorReportConfiguration = std::forward<ErrorReportConfigurationT>(value); }
    template<typename ErrorReportConfigurationT = ErrorReportConfiguration>
    CreateScheduledQueryRequest& WithErrorReportConfiguration(ErrorReportConfigurationT&& value) { SetErrorReportConfiguration(std::forward<ErrorReportConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    ScheduleConfiguration m_scheduleConfiguration;
    bool m_scheduleConfigurationHasBeenSet = false;

    NotificationConfiguration m_notificationConfiguration;
    bool m_notificationConfigurationHasBeenSet = false;

    TargetConfiguration m_targetConfiguration;
    bool m_targetConfigurationHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_scheduledQueryExecutionRoleArn;
    bool m_scheduledQueryExecutionRoleArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    ErrorReportConfiguration m_errorReportConfiguration;
    bool m_errorReportConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
