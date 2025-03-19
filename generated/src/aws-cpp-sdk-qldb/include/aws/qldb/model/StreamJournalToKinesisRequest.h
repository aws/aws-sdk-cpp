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
    AWS_QLDB_API StreamJournalToKinesisRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StreamJournalToKinesis"; }

    AWS_QLDB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the ledger.</p>
     */
    inline const Aws::String& GetLedgerName() const { return m_ledgerName; }
    inline bool LedgerNameHasBeenSet() const { return m_ledgerNameHasBeenSet; }
    template<typename LedgerNameT = Aws::String>
    void SetLedgerName(LedgerNameT&& value) { m_ledgerNameHasBeenSet = true; m_ledgerName = std::forward<LedgerNameT>(value); }
    template<typename LedgerNameT = Aws::String>
    StreamJournalToKinesisRequest& WithLedgerName(LedgerNameT&& value) { SetLedgerName(std::forward<LedgerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants QLDB permissions
     * for a journal stream to write data records to a Kinesis Data Streams
     * resource.</p> <p>To pass a role to QLDB when requesting a journal stream, you
     * must have permissions to perform the <code>iam:PassRole</code> action on the IAM
     * role resource. This is required for all journal stream requests.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    StreamJournalToKinesisRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-value pairs to add as tags to the stream that you want to create. Tag
     * keys are case sensitive. Tag values are case sensitive and can be null.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    StreamJournalToKinesisRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    StreamJournalToKinesisRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
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
    inline const Aws::Utils::DateTime& GetInclusiveStartTime() const { return m_inclusiveStartTime; }
    inline bool InclusiveStartTimeHasBeenSet() const { return m_inclusiveStartTimeHasBeenSet; }
    template<typename InclusiveStartTimeT = Aws::Utils::DateTime>
    void SetInclusiveStartTime(InclusiveStartTimeT&& value) { m_inclusiveStartTimeHasBeenSet = true; m_inclusiveStartTime = std::forward<InclusiveStartTimeT>(value); }
    template<typename InclusiveStartTimeT = Aws::Utils::DateTime>
    StreamJournalToKinesisRequest& WithInclusiveStartTime(InclusiveStartTimeT&& value) { SetInclusiveStartTime(std::forward<InclusiveStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exclusive date and time that specifies when the stream ends. If you don't
     * define this parameter, the stream runs indefinitely until you cancel it.</p>
     * <p>The <code>ExclusiveEndTime</code> must be in <code>ISO 8601</code> date and
     * time format and in Universal Coordinated Time (UTC). For example:
     * <code>2019-06-13T21:36:34Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetExclusiveEndTime() const { return m_exclusiveEndTime; }
    inline bool ExclusiveEndTimeHasBeenSet() const { return m_exclusiveEndTimeHasBeenSet; }
    template<typename ExclusiveEndTimeT = Aws::Utils::DateTime>
    void SetExclusiveEndTime(ExclusiveEndTimeT&& value) { m_exclusiveEndTimeHasBeenSet = true; m_exclusiveEndTime = std::forward<ExclusiveEndTimeT>(value); }
    template<typename ExclusiveEndTimeT = Aws::Utils::DateTime>
    StreamJournalToKinesisRequest& WithExclusiveEndTime(ExclusiveEndTimeT&& value) { SetExclusiveEndTime(std::forward<ExclusiveEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings of the Kinesis Data Streams destination for your
     * stream request.</p>
     */
    inline const KinesisConfiguration& GetKinesisConfiguration() const { return m_kinesisConfiguration; }
    inline bool KinesisConfigurationHasBeenSet() const { return m_kinesisConfigurationHasBeenSet; }
    template<typename KinesisConfigurationT = KinesisConfiguration>
    void SetKinesisConfiguration(KinesisConfigurationT&& value) { m_kinesisConfigurationHasBeenSet = true; m_kinesisConfiguration = std::forward<KinesisConfigurationT>(value); }
    template<typename KinesisConfigurationT = KinesisConfiguration>
    StreamJournalToKinesisRequest& WithKinesisConfiguration(KinesisConfigurationT&& value) { SetKinesisConfiguration(std::forward<KinesisConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that you want to assign to the QLDB journal stream. User-defined
     * names can help identify and indicate the purpose of a stream.</p> <p>Your stream
     * name must be unique among other <i>active</i> streams for a given ledger. Stream
     * names have the same naming constraints as ledger names, as defined in <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/limits.html#limits.naming">Quotas
     * in Amazon QLDB</a> in the <i>Amazon QLDB Developer Guide</i>.</p>
     */
    inline const Aws::String& GetStreamName() const { return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    template<typename StreamNameT = Aws::String>
    void SetStreamName(StreamNameT&& value) { m_streamNameHasBeenSet = true; m_streamName = std::forward<StreamNameT>(value); }
    template<typename StreamNameT = Aws::String>
    StreamJournalToKinesisRequest& WithStreamName(StreamNameT&& value) { SetStreamName(std::forward<StreamNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ledgerName;
    bool m_ledgerNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_inclusiveStartTime{};
    bool m_inclusiveStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_exclusiveEndTime{};
    bool m_exclusiveEndTimeHasBeenSet = false;

    KinesisConfiguration m_kinesisConfiguration;
    bool m_kinesisConfigurationHasBeenSet = false;

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
