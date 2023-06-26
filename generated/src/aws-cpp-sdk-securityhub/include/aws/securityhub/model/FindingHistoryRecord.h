/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsSecurityFindingIdentifier.h>
#include <aws/core/utils/DateTime.h>
#include <aws/securityhub/model/FindingHistoryUpdateSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/FindingHistoryUpdate.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> A list of events that changed the specified finding during the specified
   * time period. Each record represents a single finding change event.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/FindingHistoryRecord">AWS
   * API Reference</a></p>
   */
  class FindingHistoryRecord
  {
  public:
    AWS_SECURITYHUB_API FindingHistoryRecord();
    AWS_SECURITYHUB_API FindingHistoryRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API FindingHistoryRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const AwsSecurityFindingIdentifier& GetFindingIdentifier() const{ return m_findingIdentifier; }

    
    inline bool FindingIdentifierHasBeenSet() const { return m_findingIdentifierHasBeenSet; }

    
    inline void SetFindingIdentifier(const AwsSecurityFindingIdentifier& value) { m_findingIdentifierHasBeenSet = true; m_findingIdentifier = value; }

    
    inline void SetFindingIdentifier(AwsSecurityFindingIdentifier&& value) { m_findingIdentifierHasBeenSet = true; m_findingIdentifier = std::move(value); }

    
    inline FindingHistoryRecord& WithFindingIdentifier(const AwsSecurityFindingIdentifier& value) { SetFindingIdentifier(value); return *this;}

    
    inline FindingHistoryRecord& WithFindingIdentifier(AwsSecurityFindingIdentifier&& value) { SetFindingIdentifier(std::move(value)); return *this;}


    /**
     * <p> An ISO 8601-formatted timestamp that indicates when Security Hub processed
     * the updated finding record.</p> <p>A correctly formatted example is
     * <code>2020-05-21T20:16:34.724Z</code>. The value cannot contain spaces, and date
     * and time should be separated by <code>T</code>. For more information, see <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p> An ISO 8601-formatted timestamp that indicates when Security Hub processed
     * the updated finding record.</p> <p>A correctly formatted example is
     * <code>2020-05-21T20:16:34.724Z</code>. The value cannot contain spaces, and date
     * and time should be separated by <code>T</code>. For more information, see <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. </p>
     */
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    /**
     * <p> An ISO 8601-formatted timestamp that indicates when Security Hub processed
     * the updated finding record.</p> <p>A correctly formatted example is
     * <code>2020-05-21T20:16:34.724Z</code>. The value cannot contain spaces, and date
     * and time should be separated by <code>T</code>. For more information, see <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. </p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p> An ISO 8601-formatted timestamp that indicates when Security Hub processed
     * the updated finding record.</p> <p>A correctly formatted example is
     * <code>2020-05-21T20:16:34.724Z</code>. The value cannot contain spaces, and date
     * and time should be separated by <code>T</code>. For more information, see <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. </p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p> An ISO 8601-formatted timestamp that indicates when Security Hub processed
     * the updated finding record.</p> <p>A correctly formatted example is
     * <code>2020-05-21T20:16:34.724Z</code>. The value cannot contain spaces, and date
     * and time should be separated by <code>T</code>. For more information, see <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. </p>
     */
    inline FindingHistoryRecord& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p> An ISO 8601-formatted timestamp that indicates when Security Hub processed
     * the updated finding record.</p> <p>A correctly formatted example is
     * <code>2020-05-21T20:16:34.724Z</code>. The value cannot contain spaces, and date
     * and time should be separated by <code>T</code>. For more information, see <a
     * href="https://www.rfc-editor.org/rfc/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. </p>
     */
    inline FindingHistoryRecord& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}


    /**
     * <p> Identifies whether the event marks the creation of a new finding. A value of
     * <code>True</code> means that the finding is newly created. A value of
     * <code>False</code> means that the finding isn’t newly created. </p>
     */
    inline bool GetFindingCreated() const{ return m_findingCreated; }

    /**
     * <p> Identifies whether the event marks the creation of a new finding. A value of
     * <code>True</code> means that the finding is newly created. A value of
     * <code>False</code> means that the finding isn’t newly created. </p>
     */
    inline bool FindingCreatedHasBeenSet() const { return m_findingCreatedHasBeenSet; }

    /**
     * <p> Identifies whether the event marks the creation of a new finding. A value of
     * <code>True</code> means that the finding is newly created. A value of
     * <code>False</code> means that the finding isn’t newly created. </p>
     */
    inline void SetFindingCreated(bool value) { m_findingCreatedHasBeenSet = true; m_findingCreated = value; }

    /**
     * <p> Identifies whether the event marks the creation of a new finding. A value of
     * <code>True</code> means that the finding is newly created. A value of
     * <code>False</code> means that the finding isn’t newly created. </p>
     */
    inline FindingHistoryRecord& WithFindingCreated(bool value) { SetFindingCreated(value); return *this;}


    /**
     * <p> Identifies the source of the event that changed the finding. For example, an
     * integrated Amazon Web Service or third-party partner integration may call <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchImportFindings.html">
     * <code>BatchImportFindings</code> </a>, or an Security Hub customer may call <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateFindings.html">
     * <code>BatchUpdateFindings</code> </a>. </p>
     */
    inline const FindingHistoryUpdateSource& GetUpdateSource() const{ return m_updateSource; }

    /**
     * <p> Identifies the source of the event that changed the finding. For example, an
     * integrated Amazon Web Service or third-party partner integration may call <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchImportFindings.html">
     * <code>BatchImportFindings</code> </a>, or an Security Hub customer may call <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateFindings.html">
     * <code>BatchUpdateFindings</code> </a>. </p>
     */
    inline bool UpdateSourceHasBeenSet() const { return m_updateSourceHasBeenSet; }

    /**
     * <p> Identifies the source of the event that changed the finding. For example, an
     * integrated Amazon Web Service or third-party partner integration may call <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchImportFindings.html">
     * <code>BatchImportFindings</code> </a>, or an Security Hub customer may call <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateFindings.html">
     * <code>BatchUpdateFindings</code> </a>. </p>
     */
    inline void SetUpdateSource(const FindingHistoryUpdateSource& value) { m_updateSourceHasBeenSet = true; m_updateSource = value; }

    /**
     * <p> Identifies the source of the event that changed the finding. For example, an
     * integrated Amazon Web Service or third-party partner integration may call <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchImportFindings.html">
     * <code>BatchImportFindings</code> </a>, or an Security Hub customer may call <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateFindings.html">
     * <code>BatchUpdateFindings</code> </a>. </p>
     */
    inline void SetUpdateSource(FindingHistoryUpdateSource&& value) { m_updateSourceHasBeenSet = true; m_updateSource = std::move(value); }

    /**
     * <p> Identifies the source of the event that changed the finding. For example, an
     * integrated Amazon Web Service or third-party partner integration may call <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchImportFindings.html">
     * <code>BatchImportFindings</code> </a>, or an Security Hub customer may call <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateFindings.html">
     * <code>BatchUpdateFindings</code> </a>. </p>
     */
    inline FindingHistoryRecord& WithUpdateSource(const FindingHistoryUpdateSource& value) { SetUpdateSource(value); return *this;}

    /**
     * <p> Identifies the source of the event that changed the finding. For example, an
     * integrated Amazon Web Service or third-party partner integration may call <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchImportFindings.html">
     * <code>BatchImportFindings</code> </a>, or an Security Hub customer may call <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateFindings.html">
     * <code>BatchUpdateFindings</code> </a>. </p>
     */
    inline FindingHistoryRecord& WithUpdateSource(FindingHistoryUpdateSource&& value) { SetUpdateSource(std::move(value)); return *this;}


    /**
     * <p> An array of objects that provides details about the finding change event,
     * including the Amazon Web Services Security Finding Format (ASFF) field that
     * changed, the value of the field before the change, and the value of the field
     * after the change. </p>
     */
    inline const Aws::Vector<FindingHistoryUpdate>& GetUpdates() const{ return m_updates; }

    /**
     * <p> An array of objects that provides details about the finding change event,
     * including the Amazon Web Services Security Finding Format (ASFF) field that
     * changed, the value of the field before the change, and the value of the field
     * after the change. </p>
     */
    inline bool UpdatesHasBeenSet() const { return m_updatesHasBeenSet; }

    /**
     * <p> An array of objects that provides details about the finding change event,
     * including the Amazon Web Services Security Finding Format (ASFF) field that
     * changed, the value of the field before the change, and the value of the field
     * after the change. </p>
     */
    inline void SetUpdates(const Aws::Vector<FindingHistoryUpdate>& value) { m_updatesHasBeenSet = true; m_updates = value; }

    /**
     * <p> An array of objects that provides details about the finding change event,
     * including the Amazon Web Services Security Finding Format (ASFF) field that
     * changed, the value of the field before the change, and the value of the field
     * after the change. </p>
     */
    inline void SetUpdates(Aws::Vector<FindingHistoryUpdate>&& value) { m_updatesHasBeenSet = true; m_updates = std::move(value); }

    /**
     * <p> An array of objects that provides details about the finding change event,
     * including the Amazon Web Services Security Finding Format (ASFF) field that
     * changed, the value of the field before the change, and the value of the field
     * after the change. </p>
     */
    inline FindingHistoryRecord& WithUpdates(const Aws::Vector<FindingHistoryUpdate>& value) { SetUpdates(value); return *this;}

    /**
     * <p> An array of objects that provides details about the finding change event,
     * including the Amazon Web Services Security Finding Format (ASFF) field that
     * changed, the value of the field before the change, and the value of the field
     * after the change. </p>
     */
    inline FindingHistoryRecord& WithUpdates(Aws::Vector<FindingHistoryUpdate>&& value) { SetUpdates(std::move(value)); return *this;}

    /**
     * <p> An array of objects that provides details about the finding change event,
     * including the Amazon Web Services Security Finding Format (ASFF) field that
     * changed, the value of the field before the change, and the value of the field
     * after the change. </p>
     */
    inline FindingHistoryRecord& AddUpdates(const FindingHistoryUpdate& value) { m_updatesHasBeenSet = true; m_updates.push_back(value); return *this; }

    /**
     * <p> An array of objects that provides details about the finding change event,
     * including the Amazon Web Services Security Finding Format (ASFF) field that
     * changed, the value of the field before the change, and the value of the field
     * after the change. </p>
     */
    inline FindingHistoryRecord& AddUpdates(FindingHistoryUpdate&& value) { m_updatesHasBeenSet = true; m_updates.push_back(std::move(value)); return *this; }


    /**
     * <p> A token for pagination purposes. Provide this token in the subsequent
     * request to <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_GetFindingsHistory.html">
     * <code>GetFindingsHistory</code> </a> to get up to an additional 100 results of
     * history for the same finding that you specified in your initial request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A token for pagination purposes. Provide this token in the subsequent
     * request to <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_GetFindingsHistory.html">
     * <code>GetFindingsHistory</code> </a> to get up to an additional 100 results of
     * history for the same finding that you specified in your initial request. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> A token for pagination purposes. Provide this token in the subsequent
     * request to <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_GetFindingsHistory.html">
     * <code>GetFindingsHistory</code> </a> to get up to an additional 100 results of
     * history for the same finding that you specified in your initial request. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> A token for pagination purposes. Provide this token in the subsequent
     * request to <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_GetFindingsHistory.html">
     * <code>GetFindingsHistory</code> </a> to get up to an additional 100 results of
     * history for the same finding that you specified in your initial request. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> A token for pagination purposes. Provide this token in the subsequent
     * request to <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_GetFindingsHistory.html">
     * <code>GetFindingsHistory</code> </a> to get up to an additional 100 results of
     * history for the same finding that you specified in your initial request. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> A token for pagination purposes. Provide this token in the subsequent
     * request to <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_GetFindingsHistory.html">
     * <code>GetFindingsHistory</code> </a> to get up to an additional 100 results of
     * history for the same finding that you specified in your initial request. </p>
     */
    inline FindingHistoryRecord& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A token for pagination purposes. Provide this token in the subsequent
     * request to <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_GetFindingsHistory.html">
     * <code>GetFindingsHistory</code> </a> to get up to an additional 100 results of
     * history for the same finding that you specified in your initial request. </p>
     */
    inline FindingHistoryRecord& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A token for pagination purposes. Provide this token in the subsequent
     * request to <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_GetFindingsHistory.html">
     * <code>GetFindingsHistory</code> </a> to get up to an additional 100 results of
     * history for the same finding that you specified in your initial request. </p>
     */
    inline FindingHistoryRecord& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    AwsSecurityFindingIdentifier m_findingIdentifier;
    bool m_findingIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;

    bool m_findingCreated;
    bool m_findingCreatedHasBeenSet = false;

    FindingHistoryUpdateSource m_updateSource;
    bool m_updateSourceHasBeenSet = false;

    Aws::Vector<FindingHistoryUpdate> m_updates;
    bool m_updatesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
