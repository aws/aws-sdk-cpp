/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/LineageType.h>
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
   * <p>A set of filters to narrow the set of lineage entities connected to the
   * <code>StartArn</code>(s) returned by the <code>QueryLineage</code> API
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/QueryFilters">AWS
   * API Reference</a></p>
   */
  class QueryFilters
  {
  public:
    AWS_SAGEMAKER_API QueryFilters();
    AWS_SAGEMAKER_API QueryFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API QueryFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code> by type.
     * For example: <code>DataSet</code>, <code>Model</code>, <code>Endpoint</code>, or
     * <code>ModelDeployment</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTypes() const{ return m_types; }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code> by type.
     * For example: <code>DataSet</code>, <code>Model</code>, <code>Endpoint</code>, or
     * <code>ModelDeployment</code>.</p>
     */
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code> by type.
     * For example: <code>DataSet</code>, <code>Model</code>, <code>Endpoint</code>, or
     * <code>ModelDeployment</code>.</p>
     */
    inline void SetTypes(const Aws::Vector<Aws::String>& value) { m_typesHasBeenSet = true; m_types = value; }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code> by type.
     * For example: <code>DataSet</code>, <code>Model</code>, <code>Endpoint</code>, or
     * <code>ModelDeployment</code>.</p>
     */
    inline void SetTypes(Aws::Vector<Aws::String>&& value) { m_typesHasBeenSet = true; m_types = std::move(value); }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code> by type.
     * For example: <code>DataSet</code>, <code>Model</code>, <code>Endpoint</code>, or
     * <code>ModelDeployment</code>.</p>
     */
    inline QueryFilters& WithTypes(const Aws::Vector<Aws::String>& value) { SetTypes(value); return *this;}

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code> by type.
     * For example: <code>DataSet</code>, <code>Model</code>, <code>Endpoint</code>, or
     * <code>ModelDeployment</code>.</p>
     */
    inline QueryFilters& WithTypes(Aws::Vector<Aws::String>&& value) { SetTypes(std::move(value)); return *this;}

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code> by type.
     * For example: <code>DataSet</code>, <code>Model</code>, <code>Endpoint</code>, or
     * <code>ModelDeployment</code>.</p>
     */
    inline QueryFilters& AddTypes(const Aws::String& value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code> by type.
     * For example: <code>DataSet</code>, <code>Model</code>, <code>Endpoint</code>, or
     * <code>ModelDeployment</code>.</p>
     */
    inline QueryFilters& AddTypes(Aws::String&& value) { m_typesHasBeenSet = true; m_types.push_back(std::move(value)); return *this; }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code> by type.
     * For example: <code>DataSet</code>, <code>Model</code>, <code>Endpoint</code>, or
     * <code>ModelDeployment</code>.</p>
     */
    inline QueryFilters& AddTypes(const char* value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }


    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) by the
     * type of the lineage entity.</p>
     */
    inline const Aws::Vector<LineageType>& GetLineageTypes() const{ return m_lineageTypes; }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) by the
     * type of the lineage entity.</p>
     */
    inline bool LineageTypesHasBeenSet() const { return m_lineageTypesHasBeenSet; }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) by the
     * type of the lineage entity.</p>
     */
    inline void SetLineageTypes(const Aws::Vector<LineageType>& value) { m_lineageTypesHasBeenSet = true; m_lineageTypes = value; }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) by the
     * type of the lineage entity.</p>
     */
    inline void SetLineageTypes(Aws::Vector<LineageType>&& value) { m_lineageTypesHasBeenSet = true; m_lineageTypes = std::move(value); }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) by the
     * type of the lineage entity.</p>
     */
    inline QueryFilters& WithLineageTypes(const Aws::Vector<LineageType>& value) { SetLineageTypes(value); return *this;}

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) by the
     * type of the lineage entity.</p>
     */
    inline QueryFilters& WithLineageTypes(Aws::Vector<LineageType>&& value) { SetLineageTypes(std::move(value)); return *this;}

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) by the
     * type of the lineage entity.</p>
     */
    inline QueryFilters& AddLineageTypes(const LineageType& value) { m_lineageTypesHasBeenSet = true; m_lineageTypes.push_back(value); return *this; }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) by the
     * type of the lineage entity.</p>
     */
    inline QueryFilters& AddLineageTypes(LineageType&& value) { m_lineageTypesHasBeenSet = true; m_lineageTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) by
     * created date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const{ return m_createdBefore; }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) by
     * created date.</p>
     */
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) by
     * created date.</p>
     */
    inline void SetCreatedBefore(const Aws::Utils::DateTime& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = value; }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) by
     * created date.</p>
     */
    inline void SetCreatedBefore(Aws::Utils::DateTime&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::move(value); }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) by
     * created date.</p>
     */
    inline QueryFilters& WithCreatedBefore(const Aws::Utils::DateTime& value) { SetCreatedBefore(value); return *this;}

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) by
     * created date.</p>
     */
    inline QueryFilters& WithCreatedBefore(Aws::Utils::DateTime&& value) { SetCreatedBefore(std::move(value)); return *this;}


    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) after
     * the create date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const{ return m_createdAfter; }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) after
     * the create date.</p>
     */
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) after
     * the create date.</p>
     */
    inline void SetCreatedAfter(const Aws::Utils::DateTime& value) { m_createdAfterHasBeenSet = true; m_createdAfter = value; }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) after
     * the create date.</p>
     */
    inline void SetCreatedAfter(Aws::Utils::DateTime&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::move(value); }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) after
     * the create date.</p>
     */
    inline QueryFilters& WithCreatedAfter(const Aws::Utils::DateTime& value) { SetCreatedAfter(value); return *this;}

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) after
     * the create date.</p>
     */
    inline QueryFilters& WithCreatedAfter(Aws::Utils::DateTime&& value) { SetCreatedAfter(std::move(value)); return *this;}


    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) before
     * the last modified date.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedBefore() const{ return m_modifiedBefore; }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) before
     * the last modified date.</p>
     */
    inline bool ModifiedBeforeHasBeenSet() const { return m_modifiedBeforeHasBeenSet; }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) before
     * the last modified date.</p>
     */
    inline void SetModifiedBefore(const Aws::Utils::DateTime& value) { m_modifiedBeforeHasBeenSet = true; m_modifiedBefore = value; }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) before
     * the last modified date.</p>
     */
    inline void SetModifiedBefore(Aws::Utils::DateTime&& value) { m_modifiedBeforeHasBeenSet = true; m_modifiedBefore = std::move(value); }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) before
     * the last modified date.</p>
     */
    inline QueryFilters& WithModifiedBefore(const Aws::Utils::DateTime& value) { SetModifiedBefore(value); return *this;}

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) before
     * the last modified date.</p>
     */
    inline QueryFilters& WithModifiedBefore(Aws::Utils::DateTime&& value) { SetModifiedBefore(std::move(value)); return *this;}


    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) after
     * the last modified date.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAfter() const{ return m_modifiedAfter; }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) after
     * the last modified date.</p>
     */
    inline bool ModifiedAfterHasBeenSet() const { return m_modifiedAfterHasBeenSet; }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) after
     * the last modified date.</p>
     */
    inline void SetModifiedAfter(const Aws::Utils::DateTime& value) { m_modifiedAfterHasBeenSet = true; m_modifiedAfter = value; }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) after
     * the last modified date.</p>
     */
    inline void SetModifiedAfter(Aws::Utils::DateTime&& value) { m_modifiedAfterHasBeenSet = true; m_modifiedAfter = std::move(value); }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) after
     * the last modified date.</p>
     */
    inline QueryFilters& WithModifiedAfter(const Aws::Utils::DateTime& value) { SetModifiedAfter(value); return *this;}

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) after
     * the last modified date.</p>
     */
    inline QueryFilters& WithModifiedAfter(Aws::Utils::DateTime&& value) { SetModifiedAfter(std::move(value)); return *this;}


    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) by a
     * set if property key value pairs. If multiple pairs are provided, an entity is
     * included in the results if it matches any of the provided pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProperties() const{ return m_properties; }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) by a
     * set if property key value pairs. If multiple pairs are provided, an entity is
     * included in the results if it matches any of the provided pairs.</p>
     */
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) by a
     * set if property key value pairs. If multiple pairs are provided, an entity is
     * included in the results if it matches any of the provided pairs.</p>
     */
    inline void SetProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) by a
     * set if property key value pairs. If multiple pairs are provided, an entity is
     * included in the results if it matches any of the provided pairs.</p>
     */
    inline void SetProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) by a
     * set if property key value pairs. If multiple pairs are provided, an entity is
     * included in the results if it matches any of the provided pairs.</p>
     */
    inline QueryFilters& WithProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetProperties(value); return *this;}

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) by a
     * set if property key value pairs. If multiple pairs are provided, an entity is
     * included in the results if it matches any of the provided pairs.</p>
     */
    inline QueryFilters& WithProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetProperties(std::move(value)); return *this;}

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) by a
     * set if property key value pairs. If multiple pairs are provided, an entity is
     * included in the results if it matches any of the provided pairs.</p>
     */
    inline QueryFilters& AddProperties(const Aws::String& key, const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) by a
     * set if property key value pairs. If multiple pairs are provided, an entity is
     * included in the results if it matches any of the provided pairs.</p>
     */
    inline QueryFilters& AddProperties(Aws::String&& key, const Aws::String& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), value); return *this; }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) by a
     * set if property key value pairs. If multiple pairs are provided, an entity is
     * included in the results if it matches any of the provided pairs.</p>
     */
    inline QueryFilters& AddProperties(const Aws::String& key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) by a
     * set if property key value pairs. If multiple pairs are provided, an entity is
     * included in the results if it matches any of the provided pairs.</p>
     */
    inline QueryFilters& AddProperties(Aws::String&& key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) by a
     * set if property key value pairs. If multiple pairs are provided, an entity is
     * included in the results if it matches any of the provided pairs.</p>
     */
    inline QueryFilters& AddProperties(const char* key, Aws::String&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) by a
     * set if property key value pairs. If multiple pairs are provided, an entity is
     * included in the results if it matches any of the provided pairs.</p>
     */
    inline QueryFilters& AddProperties(Aws::String&& key, const char* value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), value); return *this; }

    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) by a
     * set if property key value pairs. If multiple pairs are provided, an entity is
     * included in the results if it matches any of the provided pairs.</p>
     */
    inline QueryFilters& AddProperties(const char* key, const char* value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }

  private:

    Aws::Vector<Aws::String> m_types;
    bool m_typesHasBeenSet = false;

    Aws::Vector<LineageType> m_lineageTypes;
    bool m_lineageTypesHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore;
    bool m_createdBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAfter;
    bool m_createdAfterHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedBefore;
    bool m_modifiedBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAfter;
    bool m_modifiedAfterHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
