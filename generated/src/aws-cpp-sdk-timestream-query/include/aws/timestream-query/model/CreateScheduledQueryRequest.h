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
    AWS_TIMESTREAMQUERY_API CreateScheduledQueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateScheduledQuery"; }

    AWS_TIMESTREAMQUERY_API Aws::String SerializePayload() const override;

    AWS_TIMESTREAMQUERY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Name of the scheduled query.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the scheduled query.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of the scheduled query.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the scheduled query.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the scheduled query.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the scheduled query.</p>
     */
    inline CreateScheduledQueryRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the scheduled query.</p>
     */
    inline CreateScheduledQueryRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the scheduled query.</p>
     */
    inline CreateScheduledQueryRequest& WithName(const char* value) { SetName(value); return *this;}


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
    inline const Aws::String& GetQueryString() const{ return m_queryString; }

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
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }

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
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }

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
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }

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
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }

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
    inline CreateScheduledQueryRequest& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}

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
    inline CreateScheduledQueryRequest& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}

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
    inline CreateScheduledQueryRequest& WithQueryString(const char* value) { SetQueryString(value); return *this;}


    /**
     * <p>The schedule configuration for the query.</p>
     */
    inline const ScheduleConfiguration& GetScheduleConfiguration() const{ return m_scheduleConfiguration; }

    /**
     * <p>The schedule configuration for the query.</p>
     */
    inline bool ScheduleConfigurationHasBeenSet() const { return m_scheduleConfigurationHasBeenSet; }

    /**
     * <p>The schedule configuration for the query.</p>
     */
    inline void SetScheduleConfiguration(const ScheduleConfiguration& value) { m_scheduleConfigurationHasBeenSet = true; m_scheduleConfiguration = value; }

    /**
     * <p>The schedule configuration for the query.</p>
     */
    inline void SetScheduleConfiguration(ScheduleConfiguration&& value) { m_scheduleConfigurationHasBeenSet = true; m_scheduleConfiguration = std::move(value); }

    /**
     * <p>The schedule configuration for the query.</p>
     */
    inline CreateScheduledQueryRequest& WithScheduleConfiguration(const ScheduleConfiguration& value) { SetScheduleConfiguration(value); return *this;}

    /**
     * <p>The schedule configuration for the query.</p>
     */
    inline CreateScheduledQueryRequest& WithScheduleConfiguration(ScheduleConfiguration&& value) { SetScheduleConfiguration(std::move(value)); return *this;}


    /**
     * <p>Notification configuration for the scheduled query. A notification is sent by
     * Timestream when a query run finishes, when the state is updated or when you
     * delete it. </p>
     */
    inline const NotificationConfiguration& GetNotificationConfiguration() const{ return m_notificationConfiguration; }

    /**
     * <p>Notification configuration for the scheduled query. A notification is sent by
     * Timestream when a query run finishes, when the state is updated or when you
     * delete it. </p>
     */
    inline bool NotificationConfigurationHasBeenSet() const { return m_notificationConfigurationHasBeenSet; }

    /**
     * <p>Notification configuration for the scheduled query. A notification is sent by
     * Timestream when a query run finishes, when the state is updated or when you
     * delete it. </p>
     */
    inline void SetNotificationConfiguration(const NotificationConfiguration& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = value; }

    /**
     * <p>Notification configuration for the scheduled query. A notification is sent by
     * Timestream when a query run finishes, when the state is updated or when you
     * delete it. </p>
     */
    inline void SetNotificationConfiguration(NotificationConfiguration&& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = std::move(value); }

    /**
     * <p>Notification configuration for the scheduled query. A notification is sent by
     * Timestream when a query run finishes, when the state is updated or when you
     * delete it. </p>
     */
    inline CreateScheduledQueryRequest& WithNotificationConfiguration(const NotificationConfiguration& value) { SetNotificationConfiguration(value); return *this;}

    /**
     * <p>Notification configuration for the scheduled query. A notification is sent by
     * Timestream when a query run finishes, when the state is updated or when you
     * delete it. </p>
     */
    inline CreateScheduledQueryRequest& WithNotificationConfiguration(NotificationConfiguration&& value) { SetNotificationConfiguration(std::move(value)); return *this;}


    /**
     * <p>Configuration used for writing the result of a query.</p>
     */
    inline const TargetConfiguration& GetTargetConfiguration() const{ return m_targetConfiguration; }

    /**
     * <p>Configuration used for writing the result of a query.</p>
     */
    inline bool TargetConfigurationHasBeenSet() const { return m_targetConfigurationHasBeenSet; }

    /**
     * <p>Configuration used for writing the result of a query.</p>
     */
    inline void SetTargetConfiguration(const TargetConfiguration& value) { m_targetConfigurationHasBeenSet = true; m_targetConfiguration = value; }

    /**
     * <p>Configuration used for writing the result of a query.</p>
     */
    inline void SetTargetConfiguration(TargetConfiguration&& value) { m_targetConfigurationHasBeenSet = true; m_targetConfiguration = std::move(value); }

    /**
     * <p>Configuration used for writing the result of a query.</p>
     */
    inline CreateScheduledQueryRequest& WithTargetConfiguration(const TargetConfiguration& value) { SetTargetConfiguration(value); return *this;}

    /**
     * <p>Configuration used for writing the result of a query.</p>
     */
    inline CreateScheduledQueryRequest& WithTargetConfiguration(TargetConfiguration&& value) { SetTargetConfiguration(std::move(value)); return *this;}


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
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

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
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

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
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

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
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

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
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

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
    inline CreateScheduledQueryRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

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
    inline CreateScheduledQueryRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

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
    inline CreateScheduledQueryRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The ARN for the IAM role that Timestream will assume when running the
     * scheduled query. </p>
     */
    inline const Aws::String& GetScheduledQueryExecutionRoleArn() const{ return m_scheduledQueryExecutionRoleArn; }

    /**
     * <p>The ARN for the IAM role that Timestream will assume when running the
     * scheduled query. </p>
     */
    inline bool ScheduledQueryExecutionRoleArnHasBeenSet() const { return m_scheduledQueryExecutionRoleArnHasBeenSet; }

    /**
     * <p>The ARN for the IAM role that Timestream will assume when running the
     * scheduled query. </p>
     */
    inline void SetScheduledQueryExecutionRoleArn(const Aws::String& value) { m_scheduledQueryExecutionRoleArnHasBeenSet = true; m_scheduledQueryExecutionRoleArn = value; }

    /**
     * <p>The ARN for the IAM role that Timestream will assume when running the
     * scheduled query. </p>
     */
    inline void SetScheduledQueryExecutionRoleArn(Aws::String&& value) { m_scheduledQueryExecutionRoleArnHasBeenSet = true; m_scheduledQueryExecutionRoleArn = std::move(value); }

    /**
     * <p>The ARN for the IAM role that Timestream will assume when running the
     * scheduled query. </p>
     */
    inline void SetScheduledQueryExecutionRoleArn(const char* value) { m_scheduledQueryExecutionRoleArnHasBeenSet = true; m_scheduledQueryExecutionRoleArn.assign(value); }

    /**
     * <p>The ARN for the IAM role that Timestream will assume when running the
     * scheduled query. </p>
     */
    inline CreateScheduledQueryRequest& WithScheduledQueryExecutionRoleArn(const Aws::String& value) { SetScheduledQueryExecutionRoleArn(value); return *this;}

    /**
     * <p>The ARN for the IAM role that Timestream will assume when running the
     * scheduled query. </p>
     */
    inline CreateScheduledQueryRequest& WithScheduledQueryExecutionRoleArn(Aws::String&& value) { SetScheduledQueryExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the IAM role that Timestream will assume when running the
     * scheduled query. </p>
     */
    inline CreateScheduledQueryRequest& WithScheduledQueryExecutionRoleArn(const char* value) { SetScheduledQueryExecutionRoleArn(value); return *this;}


    /**
     * <p>A list of key-value pairs to label the scheduled query.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of key-value pairs to label the scheduled query.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of key-value pairs to label the scheduled query.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of key-value pairs to label the scheduled query.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of key-value pairs to label the scheduled query.</p>
     */
    inline CreateScheduledQueryRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of key-value pairs to label the scheduled query.</p>
     */
    inline CreateScheduledQueryRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of key-value pairs to label the scheduled query.</p>
     */
    inline CreateScheduledQueryRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of key-value pairs to label the scheduled query.</p>
     */
    inline CreateScheduledQueryRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon KMS key used to encrypt the scheduled query resource, at-rest. If
     * the Amazon KMS key is not specified, the scheduled query resource will be
     * encrypted with a Timestream owned Amazon KMS key. To specify a KMS key, use the
     * key ID, key ARN, alias name, or alias ARN. When using an alias name, prefix the
     * name with <i>alias/</i> </p> <p>If ErrorReportConfiguration uses
     * <code>SSE_KMS</code> as encryption type, the same KmsKeyId is used to encrypt
     * the error report at rest.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon KMS key used to encrypt the scheduled query resource, at-rest. If
     * the Amazon KMS key is not specified, the scheduled query resource will be
     * encrypted with a Timestream owned Amazon KMS key. To specify a KMS key, use the
     * key ID, key ARN, alias name, or alias ARN. When using an alias name, prefix the
     * name with <i>alias/</i> </p> <p>If ErrorReportConfiguration uses
     * <code>SSE_KMS</code> as encryption type, the same KmsKeyId is used to encrypt
     * the error report at rest.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon KMS key used to encrypt the scheduled query resource, at-rest. If
     * the Amazon KMS key is not specified, the scheduled query resource will be
     * encrypted with a Timestream owned Amazon KMS key. To specify a KMS key, use the
     * key ID, key ARN, alias name, or alias ARN. When using an alias name, prefix the
     * name with <i>alias/</i> </p> <p>If ErrorReportConfiguration uses
     * <code>SSE_KMS</code> as encryption type, the same KmsKeyId is used to encrypt
     * the error report at rest.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The Amazon KMS key used to encrypt the scheduled query resource, at-rest. If
     * the Amazon KMS key is not specified, the scheduled query resource will be
     * encrypted with a Timestream owned Amazon KMS key. To specify a KMS key, use the
     * key ID, key ARN, alias name, or alias ARN. When using an alias name, prefix the
     * name with <i>alias/</i> </p> <p>If ErrorReportConfiguration uses
     * <code>SSE_KMS</code> as encryption type, the same KmsKeyId is used to encrypt
     * the error report at rest.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon KMS key used to encrypt the scheduled query resource, at-rest. If
     * the Amazon KMS key is not specified, the scheduled query resource will be
     * encrypted with a Timestream owned Amazon KMS key. To specify a KMS key, use the
     * key ID, key ARN, alias name, or alias ARN. When using an alias name, prefix the
     * name with <i>alias/</i> </p> <p>If ErrorReportConfiguration uses
     * <code>SSE_KMS</code> as encryption type, the same KmsKeyId is used to encrypt
     * the error report at rest.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon KMS key used to encrypt the scheduled query resource, at-rest. If
     * the Amazon KMS key is not specified, the scheduled query resource will be
     * encrypted with a Timestream owned Amazon KMS key. To specify a KMS key, use the
     * key ID, key ARN, alias name, or alias ARN. When using an alias name, prefix the
     * name with <i>alias/</i> </p> <p>If ErrorReportConfiguration uses
     * <code>SSE_KMS</code> as encryption type, the same KmsKeyId is used to encrypt
     * the error report at rest.</p>
     */
    inline CreateScheduledQueryRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon KMS key used to encrypt the scheduled query resource, at-rest. If
     * the Amazon KMS key is not specified, the scheduled query resource will be
     * encrypted with a Timestream owned Amazon KMS key. To specify a KMS key, use the
     * key ID, key ARN, alias name, or alias ARN. When using an alias name, prefix the
     * name with <i>alias/</i> </p> <p>If ErrorReportConfiguration uses
     * <code>SSE_KMS</code> as encryption type, the same KmsKeyId is used to encrypt
     * the error report at rest.</p>
     */
    inline CreateScheduledQueryRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon KMS key used to encrypt the scheduled query resource, at-rest. If
     * the Amazon KMS key is not specified, the scheduled query resource will be
     * encrypted with a Timestream owned Amazon KMS key. To specify a KMS key, use the
     * key ID, key ARN, alias name, or alias ARN. When using an alias name, prefix the
     * name with <i>alias/</i> </p> <p>If ErrorReportConfiguration uses
     * <code>SSE_KMS</code> as encryption type, the same KmsKeyId is used to encrypt
     * the error report at rest.</p>
     */
    inline CreateScheduledQueryRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Configuration for error reporting. Error reports will be generated when a
     * problem is encountered when writing the query results. </p>
     */
    inline const ErrorReportConfiguration& GetErrorReportConfiguration() const{ return m_errorReportConfiguration; }

    /**
     * <p>Configuration for error reporting. Error reports will be generated when a
     * problem is encountered when writing the query results. </p>
     */
    inline bool ErrorReportConfigurationHasBeenSet() const { return m_errorReportConfigurationHasBeenSet; }

    /**
     * <p>Configuration for error reporting. Error reports will be generated when a
     * problem is encountered when writing the query results. </p>
     */
    inline void SetErrorReportConfiguration(const ErrorReportConfiguration& value) { m_errorReportConfigurationHasBeenSet = true; m_errorReportConfiguration = value; }

    /**
     * <p>Configuration for error reporting. Error reports will be generated when a
     * problem is encountered when writing the query results. </p>
     */
    inline void SetErrorReportConfiguration(ErrorReportConfiguration&& value) { m_errorReportConfigurationHasBeenSet = true; m_errorReportConfiguration = std::move(value); }

    /**
     * <p>Configuration for error reporting. Error reports will be generated when a
     * problem is encountered when writing the query results. </p>
     */
    inline CreateScheduledQueryRequest& WithErrorReportConfiguration(const ErrorReportConfiguration& value) { SetErrorReportConfiguration(value); return *this;}

    /**
     * <p>Configuration for error reporting. Error reports will be generated when a
     * problem is encountered when writing the query results. </p>
     */
    inline CreateScheduledQueryRequest& WithErrorReportConfiguration(ErrorReportConfiguration&& value) { SetErrorReportConfiguration(std::move(value)); return *this;}

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

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

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
