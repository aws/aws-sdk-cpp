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
    AWS_SERVICECATALOG_API LaunchPathSummary();
    AWS_SERVICECATALOG_API LaunchPathSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API LaunchPathSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the product path.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline LaunchPathSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline LaunchPathSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline LaunchPathSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The constraints on the portfolio-product relationship.</p>
     */
    inline const Aws::Vector<ConstraintSummary>& GetConstraintSummaries() const{ return m_constraintSummaries; }
    inline bool ConstraintSummariesHasBeenSet() const { return m_constraintSummariesHasBeenSet; }
    inline void SetConstraintSummaries(const Aws::Vector<ConstraintSummary>& value) { m_constraintSummariesHasBeenSet = true; m_constraintSummaries = value; }
    inline void SetConstraintSummaries(Aws::Vector<ConstraintSummary>&& value) { m_constraintSummariesHasBeenSet = true; m_constraintSummaries = std::move(value); }
    inline LaunchPathSummary& WithConstraintSummaries(const Aws::Vector<ConstraintSummary>& value) { SetConstraintSummaries(value); return *this;}
    inline LaunchPathSummary& WithConstraintSummaries(Aws::Vector<ConstraintSummary>&& value) { SetConstraintSummaries(std::move(value)); return *this;}
    inline LaunchPathSummary& AddConstraintSummaries(const ConstraintSummary& value) { m_constraintSummariesHasBeenSet = true; m_constraintSummaries.push_back(value); return *this; }
    inline LaunchPathSummary& AddConstraintSummaries(ConstraintSummary&& value) { m_constraintSummariesHasBeenSet = true; m_constraintSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags associated with this product path.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline LaunchPathSummary& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline LaunchPathSummary& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline LaunchPathSummary& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline LaunchPathSummary& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the portfolio that contains the product. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline LaunchPathSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline LaunchPathSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline LaunchPathSummary& WithName(const char* value) { SetName(value); return *this;}
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
