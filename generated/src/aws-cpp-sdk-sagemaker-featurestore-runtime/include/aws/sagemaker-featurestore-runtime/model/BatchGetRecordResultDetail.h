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
   * <p>The output of Records that have been retrieved in a batch.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-featurestore-runtime-2020-07-01/BatchGetRecordResultDetail">AWS
   * API Reference</a></p>
   */
  class BatchGetRecordResultDetail
  {
  public:
    AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchGetRecordResultDetail();
    AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchGetRecordResultDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchGetRecordResultDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERFEATURESTORERUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>FeatureGroupName</code> containing Records you retrieved in a
     * batch.</p>
     */
    inline const Aws::String& GetFeatureGroupName() const{ return m_featureGroupName; }

    /**
     * <p>The <code>FeatureGroupName</code> containing Records you retrieved in a
     * batch.</p>
     */
    inline bool FeatureGroupNameHasBeenSet() const { return m_featureGroupNameHasBeenSet; }

    /**
     * <p>The <code>FeatureGroupName</code> containing Records you retrieved in a
     * batch.</p>
     */
    inline void SetFeatureGroupName(const Aws::String& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = value; }

    /**
     * <p>The <code>FeatureGroupName</code> containing Records you retrieved in a
     * batch.</p>
     */
    inline void SetFeatureGroupName(Aws::String&& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = std::move(value); }

    /**
     * <p>The <code>FeatureGroupName</code> containing Records you retrieved in a
     * batch.</p>
     */
    inline void SetFeatureGroupName(const char* value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName.assign(value); }

    /**
     * <p>The <code>FeatureGroupName</code> containing Records you retrieved in a
     * batch.</p>
     */
    inline BatchGetRecordResultDetail& WithFeatureGroupName(const Aws::String& value) { SetFeatureGroupName(value); return *this;}

    /**
     * <p>The <code>FeatureGroupName</code> containing Records you retrieved in a
     * batch.</p>
     */
    inline BatchGetRecordResultDetail& WithFeatureGroupName(Aws::String&& value) { SetFeatureGroupName(std::move(value)); return *this;}

    /**
     * <p>The <code>FeatureGroupName</code> containing Records you retrieved in a
     * batch.</p>
     */
    inline BatchGetRecordResultDetail& WithFeatureGroupName(const char* value) { SetFeatureGroupName(value); return *this;}


    /**
     * <p>The value of the record identifer in string format.</p>
     */
    inline const Aws::String& GetRecordIdentifierValueAsString() const{ return m_recordIdentifierValueAsString; }

    /**
     * <p>The value of the record identifer in string format.</p>
     */
    inline bool RecordIdentifierValueAsStringHasBeenSet() const { return m_recordIdentifierValueAsStringHasBeenSet; }

    /**
     * <p>The value of the record identifer in string format.</p>
     */
    inline void SetRecordIdentifierValueAsString(const Aws::String& value) { m_recordIdentifierValueAsStringHasBeenSet = true; m_recordIdentifierValueAsString = value; }

    /**
     * <p>The value of the record identifer in string format.</p>
     */
    inline void SetRecordIdentifierValueAsString(Aws::String&& value) { m_recordIdentifierValueAsStringHasBeenSet = true; m_recordIdentifierValueAsString = std::move(value); }

    /**
     * <p>The value of the record identifer in string format.</p>
     */
    inline void SetRecordIdentifierValueAsString(const char* value) { m_recordIdentifierValueAsStringHasBeenSet = true; m_recordIdentifierValueAsString.assign(value); }

    /**
     * <p>The value of the record identifer in string format.</p>
     */
    inline BatchGetRecordResultDetail& WithRecordIdentifierValueAsString(const Aws::String& value) { SetRecordIdentifierValueAsString(value); return *this;}

    /**
     * <p>The value of the record identifer in string format.</p>
     */
    inline BatchGetRecordResultDetail& WithRecordIdentifierValueAsString(Aws::String&& value) { SetRecordIdentifierValueAsString(std::move(value)); return *this;}

    /**
     * <p>The value of the record identifer in string format.</p>
     */
    inline BatchGetRecordResultDetail& WithRecordIdentifierValueAsString(const char* value) { SetRecordIdentifierValueAsString(value); return *this;}


    /**
     * <p>The <code>Record</code> retrieved.</p>
     */
    inline const Aws::Vector<FeatureValue>& GetRecord() const{ return m_record; }

    /**
     * <p>The <code>Record</code> retrieved.</p>
     */
    inline bool RecordHasBeenSet() const { return m_recordHasBeenSet; }

    /**
     * <p>The <code>Record</code> retrieved.</p>
     */
    inline void SetRecord(const Aws::Vector<FeatureValue>& value) { m_recordHasBeenSet = true; m_record = value; }

    /**
     * <p>The <code>Record</code> retrieved.</p>
     */
    inline void SetRecord(Aws::Vector<FeatureValue>&& value) { m_recordHasBeenSet = true; m_record = std::move(value); }

    /**
     * <p>The <code>Record</code> retrieved.</p>
     */
    inline BatchGetRecordResultDetail& WithRecord(const Aws::Vector<FeatureValue>& value) { SetRecord(value); return *this;}

    /**
     * <p>The <code>Record</code> retrieved.</p>
     */
    inline BatchGetRecordResultDetail& WithRecord(Aws::Vector<FeatureValue>&& value) { SetRecord(std::move(value)); return *this;}

    /**
     * <p>The <code>Record</code> retrieved.</p>
     */
    inline BatchGetRecordResultDetail& AddRecord(const FeatureValue& value) { m_recordHasBeenSet = true; m_record.push_back(value); return *this; }

    /**
     * <p>The <code>Record</code> retrieved.</p>
     */
    inline BatchGetRecordResultDetail& AddRecord(FeatureValue&& value) { m_recordHasBeenSet = true; m_record.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_featureGroupName;
    bool m_featureGroupNameHasBeenSet = false;

    Aws::String m_recordIdentifierValueAsString;
    bool m_recordIdentifierValueAsStringHasBeenSet = false;

    Aws::Vector<FeatureValue> m_record;
    bool m_recordHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
