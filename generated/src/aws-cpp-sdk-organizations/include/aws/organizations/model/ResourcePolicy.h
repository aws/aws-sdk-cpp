/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/ResourcePolicySummary.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Organizations
{
namespace Model
{

  /**
   * <p>A structure that contains details about a resource policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ResourcePolicy">AWS
   * API Reference</a></p>
   */
  class ResourcePolicy
  {
  public:
    AWS_ORGANIZATIONS_API ResourcePolicy() = default;
    AWS_ORGANIZATIONS_API ResourcePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API ResourcePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A structure that contains resource policy ID and Amazon Resource Name
     * (ARN).</p>
     */
    inline const ResourcePolicySummary& GetResourcePolicySummary() const { return m_resourcePolicySummary; }
    inline bool ResourcePolicySummaryHasBeenSet() const { return m_resourcePolicySummaryHasBeenSet; }
    template<typename ResourcePolicySummaryT = ResourcePolicySummary>
    void SetResourcePolicySummary(ResourcePolicySummaryT&& value) { m_resourcePolicySummaryHasBeenSet = true; m_resourcePolicySummary = std::forward<ResourcePolicySummaryT>(value); }
    template<typename ResourcePolicySummaryT = ResourcePolicySummary>
    ResourcePolicy& WithResourcePolicySummary(ResourcePolicySummaryT&& value) { SetResourcePolicySummary(std::forward<ResourcePolicySummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy text of the resource policy.</p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    ResourcePolicy& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}
  private:

    ResourcePolicySummary m_resourcePolicySummary;
    bool m_resourcePolicySummaryHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
