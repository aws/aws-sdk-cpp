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
   * <p>The value associated with a feature.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-featurestore-runtime-2020-07-01/FeatureValue">AWS
   * API Reference</a></p>
   */
  class FeatureValue
  {
  public:
    AWS_SAGEMAKERFEATURESTORERUNTIME_API FeatureValue();
    AWS_SAGEMAKERFEATURESTORERUNTIME_API FeatureValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERFEATURESTORERUNTIME_API FeatureValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERFEATURESTORERUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a feature that a feature value corresponds to.</p>
     */
    inline const Aws::String& GetFeatureName() const{ return m_featureName; }
    inline bool FeatureNameHasBeenSet() const { return m_featureNameHasBeenSet; }
    inline void SetFeatureName(const Aws::String& value) { m_featureNameHasBeenSet = true; m_featureName = value; }
    inline void SetFeatureName(Aws::String&& value) { m_featureNameHasBeenSet = true; m_featureName = std::move(value); }
    inline void SetFeatureName(const char* value) { m_featureNameHasBeenSet = true; m_featureName.assign(value); }
    inline FeatureValue& WithFeatureName(const Aws::String& value) { SetFeatureName(value); return *this;}
    inline FeatureValue& WithFeatureName(Aws::String&& value) { SetFeatureName(std::move(value)); return *this;}
    inline FeatureValue& WithFeatureName(const char* value) { SetFeatureName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value in string format associated with a feature. Used when your
     * <code>CollectionType</code> is <code>None</code>. Note that features types can
     * be <code>String</code>, <code>Integral</code>, or <code>Fractional</code>. This
     * value represents all three types as a string.</p>
     */
    inline const Aws::String& GetValueAsString() const{ return m_valueAsString; }
    inline bool ValueAsStringHasBeenSet() const { return m_valueAsStringHasBeenSet; }
    inline void SetValueAsString(const Aws::String& value) { m_valueAsStringHasBeenSet = true; m_valueAsString = value; }
    inline void SetValueAsString(Aws::String&& value) { m_valueAsStringHasBeenSet = true; m_valueAsString = std::move(value); }
    inline void SetValueAsString(const char* value) { m_valueAsStringHasBeenSet = true; m_valueAsString.assign(value); }
    inline FeatureValue& WithValueAsString(const Aws::String& value) { SetValueAsString(value); return *this;}
    inline FeatureValue& WithValueAsString(Aws::String&& value) { SetValueAsString(std::move(value)); return *this;}
    inline FeatureValue& WithValueAsString(const char* value) { SetValueAsString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of values in string format associated with a feature. Used when your
     * <code>CollectionType</code> is a <code>List</code>, <code>Set</code>, or
     * <code>Vector</code>. Note that features types can be <code>String</code>,
     * <code>Integral</code>, or <code>Fractional</code>. These values represents all
     * three types as a string.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValueAsStringList() const{ return m_valueAsStringList; }
    inline bool ValueAsStringListHasBeenSet() const { return m_valueAsStringListHasBeenSet; }
    inline void SetValueAsStringList(const Aws::Vector<Aws::String>& value) { m_valueAsStringListHasBeenSet = true; m_valueAsStringList = value; }
    inline void SetValueAsStringList(Aws::Vector<Aws::String>&& value) { m_valueAsStringListHasBeenSet = true; m_valueAsStringList = std::move(value); }
    inline FeatureValue& WithValueAsStringList(const Aws::Vector<Aws::String>& value) { SetValueAsStringList(value); return *this;}
    inline FeatureValue& WithValueAsStringList(Aws::Vector<Aws::String>&& value) { SetValueAsStringList(std::move(value)); return *this;}
    inline FeatureValue& AddValueAsStringList(const Aws::String& value) { m_valueAsStringListHasBeenSet = true; m_valueAsStringList.push_back(value); return *this; }
    inline FeatureValue& AddValueAsStringList(Aws::String&& value) { m_valueAsStringListHasBeenSet = true; m_valueAsStringList.push_back(std::move(value)); return *this; }
    inline FeatureValue& AddValueAsStringList(const char* value) { m_valueAsStringListHasBeenSet = true; m_valueAsStringList.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_featureName;
    bool m_featureNameHasBeenSet = false;

    Aws::String m_valueAsString;
    bool m_valueAsStringHasBeenSet = false;

    Aws::Vector<Aws::String> m_valueAsStringList;
    bool m_valueAsStringListHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
