/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/wafv2/model/ManagedRuleSetVersion.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>A set of rules that is managed by Amazon Web Services and Amazon Web Services
   * Marketplace sellers to provide versioned managed rule groups for customers of
   * WAF.</p>  <p>This is intended for use only by vendors of managed rule
   * sets. Vendors are Amazon Web Services and Amazon Web Services Marketplace
   * sellers. </p> <p>Vendors, you can use the managed rule set APIs to provide
   * controlled rollout of your versioned managed rule group offerings for your
   * customers. The APIs are <code>ListManagedRuleSets</code>,
   * <code>GetManagedRuleSet</code>, <code>PutManagedRuleSetVersions</code>, and
   * <code>UpdateManagedRuleSetVersionExpiryDate</code>.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ManagedRuleSet">AWS
   * API Reference</a></p>
   */
  class ManagedRuleSet
  {
  public:
    AWS_WAFV2_API ManagedRuleSet() = default;
    AWS_WAFV2_API ManagedRuleSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ManagedRuleSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the managed rule set. You use this, along with the rule set ID,
     * to identify the rule set.</p> <p>This name is assigned to the corresponding
     * managed rule group, which your customers can access and use. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ManagedRuleSet& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the managed rule set. The ID is returned in the
     * responses to commands like <code>list</code>. You provide it to operations like
     * <code>get</code> and <code>update</code>.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ManagedRuleSet& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    ManagedRuleSet& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the set that helps with identification. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ManagedRuleSet& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The versions of this managed rule set that are available for use by
     * customers. </p>
     */
    inline const Aws::Map<Aws::String, ManagedRuleSetVersion>& GetPublishedVersions() const { return m_publishedVersions; }
    inline bool PublishedVersionsHasBeenSet() const { return m_publishedVersionsHasBeenSet; }
    template<typename PublishedVersionsT = Aws::Map<Aws::String, ManagedRuleSetVersion>>
    void SetPublishedVersions(PublishedVersionsT&& value) { m_publishedVersionsHasBeenSet = true; m_publishedVersions = std::forward<PublishedVersionsT>(value); }
    template<typename PublishedVersionsT = Aws::Map<Aws::String, ManagedRuleSetVersion>>
    ManagedRuleSet& WithPublishedVersions(PublishedVersionsT&& value) { SetPublishedVersions(std::forward<PublishedVersionsT>(value)); return *this;}
    template<typename PublishedVersionsKeyT = Aws::String, typename PublishedVersionsValueT = ManagedRuleSetVersion>
    ManagedRuleSet& AddPublishedVersions(PublishedVersionsKeyT&& key, PublishedVersionsValueT&& value) {
      m_publishedVersionsHasBeenSet = true; m_publishedVersions.emplace(std::forward<PublishedVersionsKeyT>(key), std::forward<PublishedVersionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The version that you would like your customers to use.</p>
     */
    inline const Aws::String& GetRecommendedVersion() const { return m_recommendedVersion; }
    inline bool RecommendedVersionHasBeenSet() const { return m_recommendedVersionHasBeenSet; }
    template<typename RecommendedVersionT = Aws::String>
    void SetRecommendedVersion(RecommendedVersionT&& value) { m_recommendedVersionHasBeenSet = true; m_recommendedVersion = std::forward<RecommendedVersionT>(value); }
    template<typename RecommendedVersionT = Aws::String>
    ManagedRuleSet& WithRecommendedVersion(RecommendedVersionT&& value) { SetRecommendedVersion(std::forward<RecommendedVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label namespace prefix for the managed rule groups that are offered to
     * customers from this managed rule set. All labels that are added by rules in the
     * managed rule group have this prefix. </p> <ul> <li> <p>The syntax for the label
     * namespace prefix for a managed rule group is the following: </p> <p>
     * <code>awswaf:managed:&lt;vendor&gt;:&lt;rule group name&gt;</code>:</p> </li>
     * <li> <p>When a rule with a label matches a web request, WAF adds the fully
     * qualified label to the request. A fully qualified label is made up of the label
     * namespace from the rule group or web ACL where the rule is defined and the label
     * from the rule, separated by a colon: </p> <p> <code>&lt;label
     * namespace&gt;:&lt;label from rule&gt;</code> </p> </li> </ul>
     */
    inline const Aws::String& GetLabelNamespace() const { return m_labelNamespace; }
    inline bool LabelNamespaceHasBeenSet() const { return m_labelNamespaceHasBeenSet; }
    template<typename LabelNamespaceT = Aws::String>
    void SetLabelNamespace(LabelNamespaceT&& value) { m_labelNamespaceHasBeenSet = true; m_labelNamespace = std::forward<LabelNamespaceT>(value); }
    template<typename LabelNamespaceT = Aws::String>
    ManagedRuleSet& WithLabelNamespace(LabelNamespaceT&& value) { SetLabelNamespace(std::forward<LabelNamespaceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, ManagedRuleSetVersion> m_publishedVersions;
    bool m_publishedVersionsHasBeenSet = false;

    Aws::String m_recommendedVersion;
    bool m_recommendedVersionHasBeenSet = false;

    Aws::String m_labelNamespace;
    bool m_labelNamespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
