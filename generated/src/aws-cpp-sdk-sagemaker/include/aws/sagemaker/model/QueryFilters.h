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
    AWS_SAGEMAKER_API QueryFilters() = default;
    AWS_SAGEMAKER_API QueryFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API QueryFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code> by type.
     * For example: <code>DataSet</code>, <code>Model</code>, <code>Endpoint</code>, or
     * <code>ModelDeployment</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTypes() const { return m_types; }
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }
    template<typename TypesT = Aws::Vector<Aws::String>>
    void SetTypes(TypesT&& value) { m_typesHasBeenSet = true; m_types = std::forward<TypesT>(value); }
    template<typename TypesT = Aws::Vector<Aws::String>>
    QueryFilters& WithTypes(TypesT&& value) { SetTypes(std::forward<TypesT>(value)); return *this;}
    template<typename TypesT = Aws::String>
    QueryFilters& AddTypes(TypesT&& value) { m_typesHasBeenSet = true; m_types.emplace_back(std::forward<TypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) by the
     * type of the lineage entity.</p>
     */
    inline const Aws::Vector<LineageType>& GetLineageTypes() const { return m_lineageTypes; }
    inline bool LineageTypesHasBeenSet() const { return m_lineageTypesHasBeenSet; }
    template<typename LineageTypesT = Aws::Vector<LineageType>>
    void SetLineageTypes(LineageTypesT&& value) { m_lineageTypesHasBeenSet = true; m_lineageTypes = std::forward<LineageTypesT>(value); }
    template<typename LineageTypesT = Aws::Vector<LineageType>>
    QueryFilters& WithLineageTypes(LineageTypesT&& value) { SetLineageTypes(std::forward<LineageTypesT>(value)); return *this;}
    inline QueryFilters& AddLineageTypes(LineageType value) { m_lineageTypesHasBeenSet = true; m_lineageTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) by
     * created date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const { return m_createdBefore; }
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }
    template<typename CreatedBeforeT = Aws::Utils::DateTime>
    void SetCreatedBefore(CreatedBeforeT&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::forward<CreatedBeforeT>(value); }
    template<typename CreatedBeforeT = Aws::Utils::DateTime>
    QueryFilters& WithCreatedBefore(CreatedBeforeT&& value) { SetCreatedBefore(std::forward<CreatedBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) after
     * the create date.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const { return m_createdAfter; }
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }
    template<typename CreatedAfterT = Aws::Utils::DateTime>
    void SetCreatedAfter(CreatedAfterT&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::forward<CreatedAfterT>(value); }
    template<typename CreatedAfterT = Aws::Utils::DateTime>
    QueryFilters& WithCreatedAfter(CreatedAfterT&& value) { SetCreatedAfter(std::forward<CreatedAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) before
     * the last modified date.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedBefore() const { return m_modifiedBefore; }
    inline bool ModifiedBeforeHasBeenSet() const { return m_modifiedBeforeHasBeenSet; }
    template<typename ModifiedBeforeT = Aws::Utils::DateTime>
    void SetModifiedBefore(ModifiedBeforeT&& value) { m_modifiedBeforeHasBeenSet = true; m_modifiedBefore = std::forward<ModifiedBeforeT>(value); }
    template<typename ModifiedBeforeT = Aws::Utils::DateTime>
    QueryFilters& WithModifiedBefore(ModifiedBeforeT&& value) { SetModifiedBefore(std::forward<ModifiedBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) after
     * the last modified date.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAfter() const { return m_modifiedAfter; }
    inline bool ModifiedAfterHasBeenSet() const { return m_modifiedAfterHasBeenSet; }
    template<typename ModifiedAfterT = Aws::Utils::DateTime>
    void SetModifiedAfter(ModifiedAfterT&& value) { m_modifiedAfterHasBeenSet = true; m_modifiedAfter = std::forward<ModifiedAfterT>(value); }
    template<typename ModifiedAfterT = Aws::Utils::DateTime>
    QueryFilters& WithModifiedAfter(ModifiedAfterT&& value) { SetModifiedAfter(std::forward<ModifiedAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter the lineage entities connected to the <code>StartArn</code>(s) by a
     * set if property key value pairs. If multiple pairs are provided, an entity is
     * included in the results if it matches any of the provided pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProperties() const { return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    template<typename PropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties = std::forward<PropertiesT>(value); }
    template<typename PropertiesT = Aws::Map<Aws::String, Aws::String>>
    QueryFilters& WithProperties(PropertiesT&& value) { SetProperties(std::forward<PropertiesT>(value)); return *this;}
    template<typename PropertiesKeyT = Aws::String, typename PropertiesValueT = Aws::String>
    QueryFilters& AddProperties(PropertiesKeyT&& key, PropertiesValueT&& value) {
      m_propertiesHasBeenSet = true; m_properties.emplace(std::forward<PropertiesKeyT>(key), std::forward<PropertiesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Vector<Aws::String> m_types;
    bool m_typesHasBeenSet = false;

    Aws::Vector<LineageType> m_lineageTypes;
    bool m_lineageTypesHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore{};
    bool m_createdBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAfter{};
    bool m_createdAfterHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedBefore{};
    bool m_modifiedBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAfter{};
    bool m_modifiedAfterHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
