/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/qldb/QLDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qldb/model/KinesisConfiguration.h>
#include <utility>

namespace Aws
{
namespace QLDB
{
namespace Model
{

  /**
   */
  class StreamJournalToKinesisRequest : public QLDBRequest
  {
  public:
    AWS_QLDB_API StreamJournalToKinesisRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StreamJournalToKinesis"; }

    AWS_QLDB_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the ledger.</p>
     */
    inline const Aws::String& GetLedgerName() const{ return m_ledgerName; }

    /**
     * <p>The name of the ledger.</p>
     */
    inline bool LedgerNameHasBeenSet() const { return m_ledgerNameHasBeenSet; }

    /**
     * <p>The name of the ledger.</p>
     */
    inline void SetLedgerName(const Aws::String& value) { m_ledgerNameHasBeenSet = true; m_ledgerName = value; }

    /**
     * <p>The name of the ledger.</p>
     */
    inline void SetLedgerName(Aws::String&& value) { m_ledgerNameHasBeenSet = true; m_ledgerName = std::move(value); }

    /**
     * <p>The name of the ledger.</p>
     */
    inline void SetLedgerName(const char* value) { m_ledgerNameHasBeenSet = true; m_ledgerName.assign(value); }

    /**
     * <p>The name of the ledger.</p>
     */
    inline StreamJournalToKinesisRequest& WithLedgerName(const Aws::String& value) { SetLedgerName(value); return *this;}

    /**
     * <p>The name of the ledger.</p>
     */
    inline StreamJournalToKinesisRequest& WithLedgerName(Aws::String&& value) { SetLedgerName(std::move(value)); return *this;}

    /**
     * <p>The name of the ledger.</p>
     */
    inline StreamJournalToKinesisRequest& WithLedgerName(const char* value) { SetLedgerName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants QLDB permissions
     * for a journal stream to write data records to a Kinesis Data Streams
     * resource.</p> <p>To pass a role to QLDB when requesting a journal stream, you
     * must have permissions to perform the <code>iam:PassRole</code> action on the IAM
     * role resource. This is required for all journal stream requests.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants QLDB permissions
     * for a journal stream to write data records to a Kinesis Data Streams
     * resource.</p> <p>To pass a role to QLDB when requesting a journal stream, you
     * must have permissions to perform the <code>iam:PassRole</code> action on the IAM
     * role resource. This is required for all journal stream requests.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants QLDB permissions
     * for a journal stream to write data records to a Kinesis Data Streams
     * resource.</p> <p>To pass a role to QLDB when requesting a journal stream, you
     * must have permissions to perform the <code>iam:PassRole</code> action on the IAM
     * role resource. This is required for all journal stream requests.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants QLDB permissions
     * for a journal stream to write data records to a Kinesis Data Streams
     * resource.</p> <p>To pass a role to QLDB when requesting a journal stream, you
     * must have permissions to perform the <code>iam:PassRole</code> action on the IAM
     * role resource. This is required for all journal stream requests.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants QLDB permissions
     * for a journal stream to write data records to a Kinesis Data Streams
     * resource.</p> <p>To pass a role to QLDB when requesting a journal stream, you
     * must have permissions to perform the <code>iam:PassRole</code> action on the IAM
     * role resource. This is required for all journal stream requests.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants QLDB permissions
     * for a journal stream to write data records to a Kinesis Data Streams
     * resource.</p> <p>To pass a role to QLDB when requesting a journal stream, you
     * must have permissions to perform the <code>iam:PassRole</code> action on the IAM
     * role resource. This is required for all journal stream requests.</p>
     */
    inline StreamJournalToKinesisRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants QLDB permissions
     * for a journal stream to write data records to a Kinesis Data Streams
     * resource.</p> <p>To pass a role to QLDB when requesting a journal stream, you
     * must have permissions to perform the <code>iam:PassRole</code> action on the IAM
     * role resource. This is required for all journal stream requests.</p>
     */
    inline StreamJournalToKinesisRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants QLDB permissions
     * for a journal stream to write data records to a Kinesis Data Streams
     * resource.</p> <p>To pass a role to QLDB when requesting a journal stream, you
     * must have permissions to perform the <code>iam:PassRole</code> action on the IAM
     * role resource. This is required for all journal stream requests.</p>
     */
    inline StreamJournalToKinesisRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The key-value pairs to add as tags to the stream that you want to create. Tag
     * keys are case sensitive. Tag values are case sensitive and can be null.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The key-value pairs to add as tags to the stream that you want to create. Tag
     * keys are case sensitive. Tag values are case sensitive and can be null.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The key-value pairs to add as tags to the stream that you want to create. Tag
     * keys are case sensitive. Tag values are case sensitive and can be null.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key-value pairs to add as tags to the stream that you want to create. Tag
     * keys are case sensitive. Tag values are case sensitive and can be null.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key-value pairs to add as tags to the stream that you want to create. Tag
     * keys are case sensitive. Tag values are case sensitive and can be null.</p>
     */
    inline StreamJournalToKinesisRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value pairs to add as tags to the stream that you want to create. Tag
     * keys are case sensitive. Tag values are case sensitive and can be null.</p>
     */
    inline StreamJournalToKinesisRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key-value pairs to add as tags to the stream that you want to create. Tag
     * keys are case sensitive. Tag values are case sensitive and can be null.</p>
     */
    inline StreamJournalToKinesisRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The key-value pairs to add as tags to the stream that you want to create. Tag
     * keys are case sensitive. Tag values are case sensitive and can be null.</p>
     */
    inline StreamJournalToKinesisRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value pairs to add as tags to the stream that you want to create. Tag
     * keys are case sensitive. Tag values are case sensitive and can be null.</p>
     */
    inline StreamJournalToKinesisRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value pairs to add as tags to the stream that you want to create. Tag
     * keys are case sensitive. Tag values are case sensitive and can be null.</p>
     */
    inline StreamJournalToKinesisRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The key-value pairs to add as tags to the stream that you want to create. Tag
     * keys are case sensitive. Tag values are case sensitive and can be null.</p>
     */
    inline StreamJournalToKinesisRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value pairs to add as tags to the stream that you want to create. Tag
     * keys are case sensitive. Tag values are case sensitive and can be null.</p>
     */
    inline StreamJournalToKinesisRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value pairs to add as tags to the stream that you want to create. Tag
     * keys are case sensitive. Tag values are case sensitive and can be null.</p>
     */
    inline StreamJournalToKinesisRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The inclusive start date and time from which to start streaming journal data.
     * This parameter must be in <code>ISO 8601</code> date and time format and in
     * Universal Coordinated Time (UTC). For example:
     * <code>2019-06-13T21:36:34Z</code>.</p> <p>The <code>InclusiveStartTime</code>
     * cannot be in the future and must be before <code>ExclusiveEndTime</code>.</p>
     * <p>If you provide an <code>InclusiveStartTime</code> that is before the ledger's
     * <code>CreationDateTime</code>, QLDB effectively defaults it to the ledger's
     * <code>CreationDateTime</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetInclusiveStartTime() const{ return m_inclusiveStartTime; }

    /**
     * <p>The inclusive start date and time from which to start streaming journal data.
     * This parameter must be in <code>ISO 8601</code> date and time format and in
     * Universal Coordinated Time (UTC). For example:
     * <code>2019-06-13T21:36:34Z</code>.</p> <p>The <code>InclusiveStartTime</code>
     * cannot be in the future and must be before <code>ExclusiveEndTime</code>.</p>
     * <p>If you provide an <code>InclusiveStartTime</code> that is before the ledger's
     * <code>CreationDateTime</code>, QLDB effectively defaults it to the ledger's
     * <code>CreationDateTime</code>.</p>
     */
    inline bool InclusiveStartTimeHasBeenSet() const { return m_inclusiveStartTimeHasBeenSet; }

    /**
     * <p>The inclusive start date and time from which to start streaming journal data.
     * This parameter must be in <code>ISO 8601</code> date and time format and in
     * Universal Coordinated Time (UTC). For example:
     * <code>2019-06-13T21:36:34Z</code>.</p> <p>The <code>InclusiveStartTime</code>
     * cannot be in the future and must be before <code>ExclusiveEndTime</code>.</p>
     * <p>If you provide an <code>InclusiveStartTime</code> that is before the ledger's
     * <code>CreationDateTime</code>, QLDB effectively defaults it to the ledger's
     * <code>CreationDateTime</code>.</p>
     */
    inline void SetInclusiveStartTime(const Aws::Utils::DateTime& value) { m_inclusiveStartTimeHasBeenSet = true; m_inclusiveStartTime = value; }

    /**
     * <p>The inclusive start date and time from which to start streaming journal data.
     * This parameter must be in <code>ISO 8601</code> date and time format and in
     * Universal Coordinated Time (UTC). For example:
     * <code>2019-06-13T21:36:34Z</code>.</p> <p>The <code>InclusiveStartTime</code>
     * cannot be in the future and must be before <code>ExclusiveEndTime</code>.</p>
     * <p>If you provide an <code>InclusiveStartTime</code> that is before the ledger's
     * <code>CreationDateTime</code>, QLDB effectively defaults it to the ledger's
     * <code>CreationDateTime</code>.</p>
     */
    inline void SetInclusiveStartTime(Aws::Utils::DateTime&& value) { m_inclusiveStartTimeHasBeenSet = true; m_inclusiveStartTime = std::move(value); }

    /**
     * <p>The inclusive start date and time from which to start streaming journal data.
     * This parameter must be in <code>ISO 8601</code> date and time format and in
     * Universal Coordinated Time (UTC). For example:
     * <code>2019-06-13T21:36:34Z</code>.</p> <p>The <code>InclusiveStartTime</code>
     * cannot be in the future and must be before <code>ExclusiveEndTime</code>.</p>
     * <p>If you provide an <code>InclusiveStartTime</code> that is before the ledger's
     * <code>CreationDateTime</code>, QLDB effectively defaults it to the ledger's
     * <code>CreationDateTime</code>.</p>
     */
    inline StreamJournalToKinesisRequest& WithInclusiveStartTime(const Aws::Utils::DateTime& value) { SetInclusiveStartTime(value); return *this;}

    /**
     * <p>The inclusive start date and time from which to start streaming journal data.
     * This parameter must be in <code>ISO 8601</code> date and time format and in
     * Universal Coordinated Time (UTC). For example:
     * <code>2019-06-13T21:36:34Z</code>.</p> <p>The <code>InclusiveStartTime</code>
     * cannot be in the future and must be before <code>ExclusiveEndTime</code>.</p>
     * <p>If you provide an <code>InclusiveStartTime</code> that is before the ledger's
     * <code>CreationDateTime</code>, QLDB effectively defaults it to the ledger's
     * <code>CreationDateTime</code>.</p>
     */
    inline StreamJournalToKinesisRequest& WithInclusiveStartTime(Aws::Utils::DateTime&& value) { SetInclusiveStartTime(std::move(value)); return *this;}


    /**
     * <p>The exclusive date and time that specifies when the stream ends. If you don't
     * define this parameter, the stream runs indefinitely until you cancel it.</p>
     * <p>The <code>ExclusiveEndTime</code> must be in <code>ISO 8601</code> date and
     * time format and in Universal Coordinated Time (UTC). For example:
     * <code>2019-06-13T21:36:34Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetExclusiveEndTime() const{ return m_exclusiveEndTime; }

    /**
     * <p>The exclusive date and time that specifies when the stream ends. If you don't
     * define this parameter, the stream runs indefinitely until you cancel it.</p>
     * <p>The <code>ExclusiveEndTime</code> must be in <code>ISO 8601</code> date and
     * time format and in Universal Coordinated Time (UTC). For example:
     * <code>2019-06-13T21:36:34Z</code>.</p>
     */
    inline bool ExclusiveEndTimeHasBeenSet() const { return m_exclusiveEndTimeHasBeenSet; }

    /**
     * <p>The exclusive date and time that specifies when the stream ends. If you don't
     * define this parameter, the stream runs indefinitely until you cancel it.</p>
     * <p>The <code>ExclusiveEndTime</code> must be in <code>ISO 8601</code> date and
     * time format and in Universal Coordinated Time (UTC). For example:
     * <code>2019-06-13T21:36:34Z</code>.</p>
     */
    inline void SetExclusiveEndTime(const Aws::Utils::DateTime& value) { m_exclusiveEndTimeHasBeenSet = true; m_exclusiveEndTime = value; }

    /**
     * <p>The exclusive date and time that specifies when the stream ends. If you don't
     * define this parameter, the stream runs indefinitely until you cancel it.</p>
     * <p>The <code>ExclusiveEndTime</code> must be in <code>ISO 8601</code> date and
     * time format and in Universal Coordinated Time (UTC). For example:
     * <code>2019-06-13T21:36:34Z</code>.</p>
     */
    inline void SetExclusiveEndTime(Aws::Utils::DateTime&& value) { m_exclusiveEndTimeHasBeenSet = true; m_exclusiveEndTime = std::move(value); }

    /**
     * <p>The exclusive date and time that specifies when the stream ends. If you don't
     * define this parameter, the stream runs indefinitely until you cancel it.</p>
     * <p>The <code>ExclusiveEndTime</code> must be in <code>ISO 8601</code> date and
     * time format and in Universal Coordinated Time (UTC). For example:
     * <code>2019-06-13T21:36:34Z</code>.</p>
     */
    inline StreamJournalToKinesisRequest& WithExclusiveEndTime(const Aws::Utils::DateTime& value) { SetExclusiveEndTime(value); return *this;}

    /**
     * <p>The exclusive date and time that specifies when the stream ends. If you don't
     * define this parameter, the stream runs indefinitely until you cancel it.</p>
     * <p>The <code>ExclusiveEndTime</code> must be in <code>ISO 8601</code> date and
     * time format and in Universal Coordinated Time (UTC). For example:
     * <code>2019-06-13T21:36:34Z</code>.</p>
     */
    inline StreamJournalToKinesisRequest& WithExclusiveEndTime(Aws::Utils::DateTime&& value) { SetExclusiveEndTime(std::move(value)); return *this;}


    /**
     * <p>The configuration settings of the Kinesis Data Streams destination for your
     * stream request.</p>
     */
    inline const KinesisConfiguration& GetKinesisConfiguration() const{ return m_kinesisConfiguration; }

    /**
     * <p>The configuration settings of the Kinesis Data Streams destination for your
     * stream request.</p>
     */
    inline bool KinesisConfigurationHasBeenSet() const { return m_kinesisConfigurationHasBeenSet; }

    /**
     * <p>The configuration settings of the Kinesis Data Streams destination for your
     * stream request.</p>
     */
    inline void SetKinesisConfiguration(const KinesisConfiguration& value) { m_kinesisConfigurationHasBeenSet = true; m_kinesisConfiguration = value; }

    /**
     * <p>The configuration settings of the Kinesis Data Streams destination for your
     * stream request.</p>
     */
    inline void SetKinesisConfiguration(KinesisConfiguration&& value) { m_kinesisConfigurationHasBeenSet = true; m_kinesisConfiguration = std::move(value); }

    /**
     * <p>The configuration settings of the Kinesis Data Streams destination for your
     * stream request.</p>
     */
    inline StreamJournalToKinesisRequest& WithKinesisConfiguration(const KinesisConfiguration& value) { SetKinesisConfiguration(value); return *this;}

    /**
     * <p>The configuration settings of the Kinesis Data Streams destination for your
     * stream request.</p>
     */
    inline StreamJournalToKinesisRequest& WithKinesisConfiguration(KinesisConfiguration&& value) { SetKinesisConfiguration(std::move(value)); return *this;}


    /**
     * <p>The name that you want to assign to the QLDB journal stream. User-defined
     * names can help identify and indicate the purpose of a stream.</p> <p>Your stream
     * name must be unique among other <i>active</i> streams for a given ledger. Stream
     * names have the same naming constraints as ledger names, as defined in <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/limits.html#limits.naming">Quotas
     * in Amazon QLDB</a> in the <i>Amazon QLDB Developer Guide</i>.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name that you want to assign to the QLDB journal stream. User-defined
     * names can help identify and indicate the purpose of a stream.</p> <p>Your stream
     * name must be unique among other <i>active</i> streams for a given ledger. Stream
     * names have the same naming constraints as ledger names, as defined in <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/limits.html#limits.naming">Quotas
     * in Amazon QLDB</a> in the <i>Amazon QLDB Developer Guide</i>.</p>
     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * <p>The name that you want to assign to the QLDB journal stream. User-defined
     * names can help identify and indicate the purpose of a stream.</p> <p>Your stream
     * name must be unique among other <i>active</i> streams for a given ledger. Stream
     * names have the same naming constraints as ledger names, as defined in <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/limits.html#limits.naming">Quotas
     * in Amazon QLDB</a> in the <i>Amazon QLDB Developer Guide</i>.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name that you want to assign to the QLDB journal stream. User-defined
     * names can help identify and indicate the purpose of a stream.</p> <p>Your stream
     * name must be unique among other <i>active</i> streams for a given ledger. Stream
     * names have the same naming constraints as ledger names, as defined in <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/limits.html#limits.naming">Quotas
     * in Amazon QLDB</a> in the <i>Amazon QLDB Developer Guide</i>.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * <p>The name that you want to assign to the QLDB journal stream. User-defined
     * names can help identify and indicate the purpose of a stream.</p> <p>Your stream
     * name must be unique among other <i>active</i> streams for a given ledger. Stream
     * names have the same naming constraints as ledger names, as defined in <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/limits.html#limits.naming">Quotas
     * in Amazon QLDB</a> in the <i>Amazon QLDB Developer Guide</i>.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The name that you want to assign to the QLDB journal stream. User-defined
     * names can help identify and indicate the purpose of a stream.</p> <p>Your stream
     * name must be unique among other <i>active</i> streams for a given ledger. Stream
     * names have the same naming constraints as ledger names, as defined in <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/limits.html#limits.naming">Quotas
     * in Amazon QLDB</a> in the <i>Amazon QLDB Developer Guide</i>.</p>
     */
    inline StreamJournalToKinesisRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name that you want to assign to the QLDB journal stream. User-defined
     * names can help identify and indicate the purpose of a stream.</p> <p>Your stream
     * name must be unique among other <i>active</i> streams for a given ledger. Stream
     * names have the same naming constraints as ledger names, as defined in <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/limits.html#limits.naming">Quotas
     * in Amazon QLDB</a> in the <i>Amazon QLDB Developer Guide</i>.</p>
     */
    inline StreamJournalToKinesisRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * <p>The name that you want to assign to the QLDB journal stream. User-defined
     * names can help identify and indicate the purpose of a stream.</p> <p>Your stream
     * name must be unique among other <i>active</i> streams for a given ledger. Stream
     * names have the same naming constraints as ledger names, as defined in <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/limits.html#limits.naming">Quotas
     * in Amazon QLDB</a> in the <i>Amazon QLDB Developer Guide</i>.</p>
     */
    inline StreamJournalToKinesisRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}

  private:

    Aws::String m_ledgerName;
    bool m_ledgerNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_inclusiveStartTime;
    bool m_inclusiveStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_exclusiveEndTime;
    bool m_exclusiveEndTimeHasBeenSet = false;

    KinesisConfiguration m_kinesisConfiguration;
    bool m_kinesisConfigurationHasBeenSet = false;

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
