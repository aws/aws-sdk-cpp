/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-featurestore-runtime/model/FeatureValue.h>
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
namespace SageMakerFeatureStoreRuntime
{
namespace Model
{

  /**
   * <p>The output of records that have been retrieved in a batch.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-featurestore-runtime-2020-07-01/BatchGetRecordResultDetail">AWS
   * API Reference</a></p>
   */
  class BatchGetRecordResultDetail
  {
  public:
    AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchGetRecordResultDetail() = default;
    AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchGetRecordResultDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchGetRecordResultDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERFEATURESTORERUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>FeatureGroupName</code> containing Records you retrieved in a
     * batch.</p>
     */
    inline const Aws::String& GetFeatureGroupName() const { return m_featureGroupName; }
    inline bool FeatureGroupNameHasBeenSet() const { return m_featureGroupNameHasBeenSet; }
    template<typename FeatureGroupNameT = Aws::String>
    void SetFeatureGroupName(FeatureGroupNameT&& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = std::forward<FeatureGroupNameT>(value); }
    template<typename FeatureGroupNameT = Aws::String>
    BatchGetRecordResultDetail& WithFeatureGroupName(FeatureGroupNameT&& value) { SetFeatureGroupName(std::forward<FeatureGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the record identifier in string format.</p>
     */
    inline const Aws::String& GetRecordIdentifierValueAsString() const { return m_recordIdentifierValueAsString; }
    inline bool RecordIdentifierValueAsStringHasBeenSet() const { return m_recordIdentifierValueAsStringHasBeenSet; }
    template<typename RecordIdentifierValueAsStringT = Aws::String>
    void SetRecordIdentifierValueAsString(RecordIdentifierValueAsStringT&& value) { m_recordIdentifierValueAsStringHasBeenSet = true; m_recordIdentifierValueAsString = std::forward<RecordIdentifierValueAsStringT>(value); }
    template<typename RecordIdentifierValueAsStringT = Aws::String>
    BatchGetRecordResultDetail& WithRecordIdentifierValueAsString(RecordIdentifierValueAsStringT&& value) { SetRecordIdentifierValueAsString(std::forward<RecordIdentifierValueAsStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>Record</code> retrieved.</p>
     */
    inline const Aws::Vector<FeatureValue>& GetRecord() const { return m_record; }
    inline bool RecordHasBeenSet() const { return m_recordHasBeenSet; }
    template<typename RecordT = Aws::Vector<FeatureValue>>
    void SetRecord(RecordT&& value) { m_recordHasBeenSet = true; m_record = std::forward<RecordT>(value); }
    template<typename RecordT = Aws::Vector<FeatureValue>>
    BatchGetRecordResultDetail& WithRecord(RecordT&& value) { SetRecord(std::forward<RecordT>(value)); return *this;}
    template<typename RecordT = FeatureValue>
    BatchGetRecordResultDetail& AddRecord(RecordT&& value) { m_recordHasBeenSet = true; m_record.emplace_back(std::forward<RecordT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>ExpiresAt</code> ISO string of the requested record.</p>
     */
    inline const Aws::String& GetExpiresAt() const { return m_expiresAt; }
    inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
    template<typename ExpiresAtT = Aws::String>
    void SetExpiresAt(ExpiresAtT&& value) { m_expiresAtHasBeenSet = true; m_expiresAt = std::forward<ExpiresAtT>(value); }
    template<typename ExpiresAtT = Aws::String>
    BatchGetRecordResultDetail& WithExpiresAt(ExpiresAtT&& value) { SetExpiresAt(std::forward<ExpiresAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_featureGroupName;
    bool m_featureGroupNameHasBeenSet = false;

    Aws::String m_recordIdentifierValueAsString;
    bool m_recordIdentifierValueAsStringHasBeenSet = false;

    Aws::Vector<FeatureValue> m_record;
    bool m_recordHasBeenSet = false;

    Aws::String m_expiresAt;
    bool m_expiresAtHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
