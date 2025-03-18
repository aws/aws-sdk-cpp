/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/Instance.h>
#include <aws/rekognition/model/Parent.h>
#include <aws/rekognition/model/LabelAlias.h>
#include <aws/rekognition/model/LabelCategory.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Structure containing details about the detected label, including the name,
   * detected instances, parent labels, and level of confidence.</p> <p>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/Label">AWS
   * API Reference</a></p>
   */
  class Label
  {
  public:
    AWS_REKOGNITION_API Label() = default;
    AWS_REKOGNITION_API Label(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Label& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name (label) of the object or scene.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Label& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Level of confidence.</p>
     */
    inline double GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline Label& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>Label</code> represents an object, <code>Instances</code> contains
     * the bounding boxes for each instance of the detected object. Bounding boxes are
     * returned for common object labels such as people, cars, furniture, apparel or
     * pets.</p>
     */
    inline const Aws::Vector<Instance>& GetInstances() const { return m_instances; }
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }
    template<typename InstancesT = Aws::Vector<Instance>>
    void SetInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances = std::forward<InstancesT>(value); }
    template<typename InstancesT = Aws::Vector<Instance>>
    Label& WithInstances(InstancesT&& value) { SetInstances(std::forward<InstancesT>(value)); return *this;}
    template<typename InstancesT = Instance>
    Label& AddInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances.emplace_back(std::forward<InstancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The parent labels for a label. The response includes all ancestor labels.</p>
     */
    inline const Aws::Vector<Parent>& GetParents() const { return m_parents; }
    inline bool ParentsHasBeenSet() const { return m_parentsHasBeenSet; }
    template<typename ParentsT = Aws::Vector<Parent>>
    void SetParents(ParentsT&& value) { m_parentsHasBeenSet = true; m_parents = std::forward<ParentsT>(value); }
    template<typename ParentsT = Aws::Vector<Parent>>
    Label& WithParents(ParentsT&& value) { SetParents(std::forward<ParentsT>(value)); return *this;}
    template<typename ParentsT = Parent>
    Label& AddParents(ParentsT&& value) { m_parentsHasBeenSet = true; m_parents.emplace_back(std::forward<ParentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of potential aliases for a given label.</p>
     */
    inline const Aws::Vector<LabelAlias>& GetAliases() const { return m_aliases; }
    inline bool AliasesHasBeenSet() const { return m_aliasesHasBeenSet; }
    template<typename AliasesT = Aws::Vector<LabelAlias>>
    void SetAliases(AliasesT&& value) { m_aliasesHasBeenSet = true; m_aliases = std::forward<AliasesT>(value); }
    template<typename AliasesT = Aws::Vector<LabelAlias>>
    Label& WithAliases(AliasesT&& value) { SetAliases(std::forward<AliasesT>(value)); return *this;}
    template<typename AliasesT = LabelAlias>
    Label& AddAliases(AliasesT&& value) { m_aliasesHasBeenSet = true; m_aliases.emplace_back(std::forward<AliasesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the categories associated with a given label.</p>
     */
    inline const Aws::Vector<LabelCategory>& GetCategories() const { return m_categories; }
    inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
    template<typename CategoriesT = Aws::Vector<LabelCategory>>
    void SetCategories(CategoriesT&& value) { m_categoriesHasBeenSet = true; m_categories = std::forward<CategoriesT>(value); }
    template<typename CategoriesT = Aws::Vector<LabelCategory>>
    Label& WithCategories(CategoriesT&& value) { SetCategories(std::forward<CategoriesT>(value)); return *this;}
    template<typename CategoriesT = LabelCategory>
    Label& AddCategories(CategoriesT&& value) { m_categoriesHasBeenSet = true; m_categories.emplace_back(std::forward<CategoriesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    double m_confidence{0.0};
    bool m_confidenceHasBeenSet = false;

    Aws::Vector<Instance> m_instances;
    bool m_instancesHasBeenSet = false;

    Aws::Vector<Parent> m_parents;
    bool m_parentsHasBeenSet = false;

    Aws::Vector<LabelAlias> m_aliases;
    bool m_aliasesHasBeenSet = false;

    Aws::Vector<LabelCategory> m_categories;
    bool m_categoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
