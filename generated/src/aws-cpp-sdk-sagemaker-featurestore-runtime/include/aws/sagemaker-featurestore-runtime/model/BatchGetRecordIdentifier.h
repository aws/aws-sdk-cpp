/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The identifier that identifies the batch of Records you are retrieving in a
   * batch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-featurestore-runtime-2020-07-01/BatchGetRecordIdentifier">AWS
   * API Reference</a></p>
   */
  class BatchGetRecordIdentifier
  {
  public:
    AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchGetRecordIdentifier() = default;
    AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchGetRecordIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchGetRecordIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERFEATURESTORERUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the <code>FeatureGroup</code>
     * containing the records you are retrieving in a batch.</p>
     */
    inline const Aws::String& GetFeatureGroupName() const { return m_featureGroupName; }
    inline bool FeatureGroupNameHasBeenSet() const { return m_featureGroupNameHasBeenSet; }
    template<typename FeatureGroupNameT = Aws::String>
    void SetFeatureGroupName(FeatureGroupNameT&& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = std::forward<FeatureGroupNameT>(value); }
    template<typename FeatureGroupNameT = Aws::String>
    BatchGetRecordIdentifier& WithFeatureGroupName(FeatureGroupNameT&& value) { SetFeatureGroupName(std::forward<FeatureGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for a list of record identifiers in string format.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRecordIdentifiersValueAsString() const { return m_recordIdentifiersValueAsString; }
    inline bool RecordIdentifiersValueAsStringHasBeenSet() const { return m_recordIdentifiersValueAsStringHasBeenSet; }
    template<typename RecordIdentifiersValueAsStringT = Aws::Vector<Aws::String>>
    void SetRecordIdentifiersValueAsString(RecordIdentifiersValueAsStringT&& value) { m_recordIdentifiersValueAsStringHasBeenSet = true; m_recordIdentifiersValueAsString = std::forward<RecordIdentifiersValueAsStringT>(value); }
    template<typename RecordIdentifiersValueAsStringT = Aws::Vector<Aws::String>>
    BatchGetRecordIdentifier& WithRecordIdentifiersValueAsString(RecordIdentifiersValueAsStringT&& value) { SetRecordIdentifiersValueAsString(std::forward<RecordIdentifiersValueAsStringT>(value)); return *this;}
    template<typename RecordIdentifiersValueAsStringT = Aws::String>
    BatchGetRecordIdentifier& AddRecordIdentifiersValueAsString(RecordIdentifiersValueAsStringT&& value) { m_recordIdentifiersValueAsStringHasBeenSet = true; m_recordIdentifiersValueAsString.emplace_back(std::forward<RecordIdentifiersValueAsStringT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of names of Features to be retrieved. If not specified, the latest value
     * for all the Features are returned.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFeatureNames() const { return m_featureNames; }
    inline bool FeatureNamesHasBeenSet() const { return m_featureNamesHasBeenSet; }
    template<typename FeatureNamesT = Aws::Vector<Aws::String>>
    void SetFeatureNames(FeatureNamesT&& value) { m_featureNamesHasBeenSet = true; m_featureNames = std::forward<FeatureNamesT>(value); }
    template<typename FeatureNamesT = Aws::Vector<Aws::String>>
    BatchGetRecordIdentifier& WithFeatureNames(FeatureNamesT&& value) { SetFeatureNames(std::forward<FeatureNamesT>(value)); return *this;}
    template<typename FeatureNamesT = Aws::String>
    BatchGetRecordIdentifier& AddFeatureNames(FeatureNamesT&& value) { m_featureNamesHasBeenSet = true; m_featureNames.emplace_back(std::forward<FeatureNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_featureGroupName;
    bool m_featureGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_recordIdentifiersValueAsString;
    bool m_recordIdentifiersValueAsStringHasBeenSet = false;

    Aws::Vector<Aws::String> m_featureNames;
    bool m_featureNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
