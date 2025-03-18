/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/model/ConstraintSummary.h>
#include <aws/servicecatalog/model/Tag.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Summary information about a product path for a user.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/LaunchPathSummary">AWS
   * API Reference</a></p>
   */
  class LaunchPathSummary
  {
  public:
    AWS_SERVICECATALOG_API LaunchPathSummary() = default;
    AWS_SERVICECATALOG_API LaunchPathSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API LaunchPathSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the product path.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    LaunchPathSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The constraints on the portfolio-product relationship.</p>
     */
    inline const Aws::Vector<ConstraintSummary>& GetConstraintSummaries() const { return m_constraintSummaries; }
    inline bool ConstraintSummariesHasBeenSet() const { return m_constraintSummariesHasBeenSet; }
    template<typename ConstraintSummariesT = Aws::Vector<ConstraintSummary>>
    void SetConstraintSummaries(ConstraintSummariesT&& value) { m_constraintSummariesHasBeenSet = true; m_constraintSummaries = std::forward<ConstraintSummariesT>(value); }
    template<typename ConstraintSummariesT = Aws::Vector<ConstraintSummary>>
    LaunchPathSummary& WithConstraintSummaries(ConstraintSummariesT&& value) { SetConstraintSummaries(std::forward<ConstraintSummariesT>(value)); return *this;}
    template<typename ConstraintSummariesT = ConstraintSummary>
    LaunchPathSummary& AddConstraintSummaries(ConstraintSummariesT&& value) { m_constraintSummariesHasBeenSet = true; m_constraintSummaries.emplace_back(std::forward<ConstraintSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags associated with this product path.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    LaunchPathSummary& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    LaunchPathSummary& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the portfolio that contains the product. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    LaunchPathSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<ConstraintSummary> m_constraintSummaries;
    bool m_constraintSummariesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
