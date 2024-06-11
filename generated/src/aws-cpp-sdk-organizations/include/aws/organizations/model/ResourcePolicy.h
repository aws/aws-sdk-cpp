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
    AWS_ORGANIZATIONS_API ResourcePolicy();
    AWS_ORGANIZATIONS_API ResourcePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API ResourcePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A structure that contains resource policy ID and Amazon Resource Name
     * (ARN).</p>
     */
    inline const ResourcePolicySummary& GetResourcePolicySummary() const{ return m_resourcePolicySummary; }
    inline bool ResourcePolicySummaryHasBeenSet() const { return m_resourcePolicySummaryHasBeenSet; }
    inline void SetResourcePolicySummary(const ResourcePolicySummary& value) { m_resourcePolicySummaryHasBeenSet = true; m_resourcePolicySummary = value; }
    inline void SetResourcePolicySummary(ResourcePolicySummary&& value) { m_resourcePolicySummaryHasBeenSet = true; m_resourcePolicySummary = std::move(value); }
    inline ResourcePolicy& WithResourcePolicySummary(const ResourcePolicySummary& value) { SetResourcePolicySummary(value); return *this;}
    inline ResourcePolicy& WithResourcePolicySummary(ResourcePolicySummary&& value) { SetResourcePolicySummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy text of the resource policy.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }
    inline ResourcePolicy& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline ResourcePolicy& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline ResourcePolicy& WithContent(const char* value) { SetContent(value); return *this;}
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
