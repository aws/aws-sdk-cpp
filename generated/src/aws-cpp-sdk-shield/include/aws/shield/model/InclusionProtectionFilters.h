/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/shield/model/ProtectedResourceType.h>
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
namespace Shield
{
namespace Model
{

  /**
   * <p>Narrows the set of protections that the call retrieves. You can retrieve a
   * single protection by providing its name or the ARN (Amazon Resource Name) of its
   * protected resource. You can also retrieve all protections for a specific
   * resource type. You can provide up to one criteria per filter type. Shield
   * Advanced returns protections that exactly match all of the filter criteria that
   * you provide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/InclusionProtectionFilters">AWS
   * API Reference</a></p>
   */
  class InclusionProtectionFilters
  {
  public:
    AWS_SHIELD_API InclusionProtectionFilters() = default;
    AWS_SHIELD_API InclusionProtectionFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API InclusionProtectionFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the resource whose protection you want to
     * retrieve. </p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const { return m_resourceArns; }
    inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }
    template<typename ResourceArnsT = Aws::Vector<Aws::String>>
    void SetResourceArns(ResourceArnsT&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = std::forward<ResourceArnsT>(value); }
    template<typename ResourceArnsT = Aws::Vector<Aws::String>>
    InclusionProtectionFilters& WithResourceArns(ResourceArnsT&& value) { SetResourceArns(std::forward<ResourceArnsT>(value)); return *this;}
    template<typename ResourceArnsT = Aws::String>
    InclusionProtectionFilters& AddResourceArns(ResourceArnsT&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.emplace_back(std::forward<ResourceArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the protection that you want to retrieve. </p>
     */
    inline const Aws::Vector<Aws::String>& GetProtectionNames() const { return m_protectionNames; }
    inline bool ProtectionNamesHasBeenSet() const { return m_protectionNamesHasBeenSet; }
    template<typename ProtectionNamesT = Aws::Vector<Aws::String>>
    void SetProtectionNames(ProtectionNamesT&& value) { m_protectionNamesHasBeenSet = true; m_protectionNames = std::forward<ProtectionNamesT>(value); }
    template<typename ProtectionNamesT = Aws::Vector<Aws::String>>
    InclusionProtectionFilters& WithProtectionNames(ProtectionNamesT&& value) { SetProtectionNames(std::forward<ProtectionNamesT>(value)); return *this;}
    template<typename ProtectionNamesT = Aws::String>
    InclusionProtectionFilters& AddProtectionNames(ProtectionNamesT&& value) { m_protectionNamesHasBeenSet = true; m_protectionNames.emplace_back(std::forward<ProtectionNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of protected resource whose protections you want to retrieve. </p>
     */
    inline const Aws::Vector<ProtectedResourceType>& GetResourceTypes() const { return m_resourceTypes; }
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
    template<typename ResourceTypesT = Aws::Vector<ProtectedResourceType>>
    void SetResourceTypes(ResourceTypesT&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::forward<ResourceTypesT>(value); }
    template<typename ResourceTypesT = Aws::Vector<ProtectedResourceType>>
    InclusionProtectionFilters& WithResourceTypes(ResourceTypesT&& value) { SetResourceTypes(std::forward<ResourceTypesT>(value)); return *this;}
    inline InclusionProtectionFilters& AddResourceTypes(ProtectedResourceType value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_resourceArns;
    bool m_resourceArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_protectionNames;
    bool m_protectionNamesHasBeenSet = false;

    Aws::Vector<ProtectedResourceType> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
