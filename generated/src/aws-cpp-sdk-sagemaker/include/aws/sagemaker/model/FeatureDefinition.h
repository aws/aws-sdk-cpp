/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/FeatureType.h>
#include <aws/sagemaker/model/CollectionType.h>
#include <aws/sagemaker/model/CollectionConfig.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A list of features. You must include <code>FeatureName</code> and
   * <code>FeatureType</code>. Valid feature <code>FeatureType</code>s are
   * <code>Integral</code>, <code>Fractional</code> and <code>String</code>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/FeatureDefinition">AWS
   * API Reference</a></p>
   */
  class FeatureDefinition
  {
  public:
    AWS_SAGEMAKER_API FeatureDefinition();
    AWS_SAGEMAKER_API FeatureDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API FeatureDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a feature. The type must be a string. <code>FeatureName</code>
     * cannot be any of the following: <code>is_deleted</code>,
     * <code>write_time</code>, <code>api_invocation_time</code>.</p>
     */
    inline const Aws::String& GetFeatureName() const{ return m_featureName; }

    /**
     * <p>The name of a feature. The type must be a string. <code>FeatureName</code>
     * cannot be any of the following: <code>is_deleted</code>,
     * <code>write_time</code>, <code>api_invocation_time</code>.</p>
     */
    inline bool FeatureNameHasBeenSet() const { return m_featureNameHasBeenSet; }

    /**
     * <p>The name of a feature. The type must be a string. <code>FeatureName</code>
     * cannot be any of the following: <code>is_deleted</code>,
     * <code>write_time</code>, <code>api_invocation_time</code>.</p>
     */
    inline void SetFeatureName(const Aws::String& value) { m_featureNameHasBeenSet = true; m_featureName = value; }

    /**
     * <p>The name of a feature. The type must be a string. <code>FeatureName</code>
     * cannot be any of the following: <code>is_deleted</code>,
     * <code>write_time</code>, <code>api_invocation_time</code>.</p>
     */
    inline void SetFeatureName(Aws::String&& value) { m_featureNameHasBeenSet = true; m_featureName = std::move(value); }

    /**
     * <p>The name of a feature. The type must be a string. <code>FeatureName</code>
     * cannot be any of the following: <code>is_deleted</code>,
     * <code>write_time</code>, <code>api_invocation_time</code>.</p>
     */
    inline void SetFeatureName(const char* value) { m_featureNameHasBeenSet = true; m_featureName.assign(value); }

    /**
     * <p>The name of a feature. The type must be a string. <code>FeatureName</code>
     * cannot be any of the following: <code>is_deleted</code>,
     * <code>write_time</code>, <code>api_invocation_time</code>.</p>
     */
    inline FeatureDefinition& WithFeatureName(const Aws::String& value) { SetFeatureName(value); return *this;}

    /**
     * <p>The name of a feature. The type must be a string. <code>FeatureName</code>
     * cannot be any of the following: <code>is_deleted</code>,
     * <code>write_time</code>, <code>api_invocation_time</code>.</p>
     */
    inline FeatureDefinition& WithFeatureName(Aws::String&& value) { SetFeatureName(std::move(value)); return *this;}

    /**
     * <p>The name of a feature. The type must be a string. <code>FeatureName</code>
     * cannot be any of the following: <code>is_deleted</code>,
     * <code>write_time</code>, <code>api_invocation_time</code>.</p>
     */
    inline FeatureDefinition& WithFeatureName(const char* value) { SetFeatureName(value); return *this;}


    /**
     * <p>The value type of a feature. Valid values are Integral, Fractional, or
     * String.</p>
     */
    inline const FeatureType& GetFeatureType() const{ return m_featureType; }

    /**
     * <p>The value type of a feature. Valid values are Integral, Fractional, or
     * String.</p>
     */
    inline bool FeatureTypeHasBeenSet() const { return m_featureTypeHasBeenSet; }

    /**
     * <p>The value type of a feature. Valid values are Integral, Fractional, or
     * String.</p>
     */
    inline void SetFeatureType(const FeatureType& value) { m_featureTypeHasBeenSet = true; m_featureType = value; }

    /**
     * <p>The value type of a feature. Valid values are Integral, Fractional, or
     * String.</p>
     */
    inline void SetFeatureType(FeatureType&& value) { m_featureTypeHasBeenSet = true; m_featureType = std::move(value); }

    /**
     * <p>The value type of a feature. Valid values are Integral, Fractional, or
     * String.</p>
     */
    inline FeatureDefinition& WithFeatureType(const FeatureType& value) { SetFeatureType(value); return *this;}

    /**
     * <p>The value type of a feature. Valid values are Integral, Fractional, or
     * String.</p>
     */
    inline FeatureDefinition& WithFeatureType(FeatureType&& value) { SetFeatureType(std::move(value)); return *this;}


    /**
     * <p>A grouping of elements where each element within the collection must have the
     * same feature type (<code>String</code>, <code>Integral</code>, or
     * <code>Fractional</code>).</p> <ul> <li> <p> <code>List</code>: An ordered
     * collection of elements.</p> </li> <li> <p> <code>Set</code>: An unordered
     * collection of unique elements.</p> </li> <li> <p> <code>Vector</code>: A
     * specialized list that represents a fixed-size array of elements. The vector
     * dimension is determined by you. Must have elements with fractional feature
     * types. </p> </li> </ul>
     */
    inline const CollectionType& GetCollectionType() const{ return m_collectionType; }

    /**
     * <p>A grouping of elements where each element within the collection must have the
     * same feature type (<code>String</code>, <code>Integral</code>, or
     * <code>Fractional</code>).</p> <ul> <li> <p> <code>List</code>: An ordered
     * collection of elements.</p> </li> <li> <p> <code>Set</code>: An unordered
     * collection of unique elements.</p> </li> <li> <p> <code>Vector</code>: A
     * specialized list that represents a fixed-size array of elements. The vector
     * dimension is determined by you. Must have elements with fractional feature
     * types. </p> </li> </ul>
     */
    inline bool CollectionTypeHasBeenSet() const { return m_collectionTypeHasBeenSet; }

    /**
     * <p>A grouping of elements where each element within the collection must have the
     * same feature type (<code>String</code>, <code>Integral</code>, or
     * <code>Fractional</code>).</p> <ul> <li> <p> <code>List</code>: An ordered
     * collection of elements.</p> </li> <li> <p> <code>Set</code>: An unordered
     * collection of unique elements.</p> </li> <li> <p> <code>Vector</code>: A
     * specialized list that represents a fixed-size array of elements. The vector
     * dimension is determined by you. Must have elements with fractional feature
     * types. </p> </li> </ul>
     */
    inline void SetCollectionType(const CollectionType& value) { m_collectionTypeHasBeenSet = true; m_collectionType = value; }

    /**
     * <p>A grouping of elements where each element within the collection must have the
     * same feature type (<code>String</code>, <code>Integral</code>, or
     * <code>Fractional</code>).</p> <ul> <li> <p> <code>List</code>: An ordered
     * collection of elements.</p> </li> <li> <p> <code>Set</code>: An unordered
     * collection of unique elements.</p> </li> <li> <p> <code>Vector</code>: A
     * specialized list that represents a fixed-size array of elements. The vector
     * dimension is determined by you. Must have elements with fractional feature
     * types. </p> </li> </ul>
     */
    inline void SetCollectionType(CollectionType&& value) { m_collectionTypeHasBeenSet = true; m_collectionType = std::move(value); }

    /**
     * <p>A grouping of elements where each element within the collection must have the
     * same feature type (<code>String</code>, <code>Integral</code>, or
     * <code>Fractional</code>).</p> <ul> <li> <p> <code>List</code>: An ordered
     * collection of elements.</p> </li> <li> <p> <code>Set</code>: An unordered
     * collection of unique elements.</p> </li> <li> <p> <code>Vector</code>: A
     * specialized list that represents a fixed-size array of elements. The vector
     * dimension is determined by you. Must have elements with fractional feature
     * types. </p> </li> </ul>
     */
    inline FeatureDefinition& WithCollectionType(const CollectionType& value) { SetCollectionType(value); return *this;}

    /**
     * <p>A grouping of elements where each element within the collection must have the
     * same feature type (<code>String</code>, <code>Integral</code>, or
     * <code>Fractional</code>).</p> <ul> <li> <p> <code>List</code>: An ordered
     * collection of elements.</p> </li> <li> <p> <code>Set</code>: An unordered
     * collection of unique elements.</p> </li> <li> <p> <code>Vector</code>: A
     * specialized list that represents a fixed-size array of elements. The vector
     * dimension is determined by you. Must have elements with fractional feature
     * types. </p> </li> </ul>
     */
    inline FeatureDefinition& WithCollectionType(CollectionType&& value) { SetCollectionType(std::move(value)); return *this;}


    /**
     * <p>Configuration for your collection.</p>
     */
    inline const CollectionConfig& GetCollectionConfig() const{ return m_collectionConfig; }

    /**
     * <p>Configuration for your collection.</p>
     */
    inline bool CollectionConfigHasBeenSet() const { return m_collectionConfigHasBeenSet; }

    /**
     * <p>Configuration for your collection.</p>
     */
    inline void SetCollectionConfig(const CollectionConfig& value) { m_collectionConfigHasBeenSet = true; m_collectionConfig = value; }

    /**
     * <p>Configuration for your collection.</p>
     */
    inline void SetCollectionConfig(CollectionConfig&& value) { m_collectionConfigHasBeenSet = true; m_collectionConfig = std::move(value); }

    /**
     * <p>Configuration for your collection.</p>
     */
    inline FeatureDefinition& WithCollectionConfig(const CollectionConfig& value) { SetCollectionConfig(value); return *this;}

    /**
     * <p>Configuration for your collection.</p>
     */
    inline FeatureDefinition& WithCollectionConfig(CollectionConfig&& value) { SetCollectionConfig(std::move(value)); return *this;}

  private:

    Aws::String m_featureName;
    bool m_featureNameHasBeenSet = false;

    FeatureType m_featureType;
    bool m_featureTypeHasBeenSet = false;

    CollectionType m_collectionType;
    bool m_collectionTypeHasBeenSet = false;

    CollectionConfig m_collectionConfig;
    bool m_collectionConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
