/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rbin/RecycleBin_EXPORTS.h>
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
namespace RecycleBin
{
namespace Model
{

  /**
   * <p>[Tag-level retention rules only] Information about the resource tags used to
   * identify resources that are retained by the retention rule.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rbin-2021-06-15/ResourceTag">AWS
   * API Reference</a></p>
   */
  class ResourceTag
  {
  public:
    AWS_RECYCLEBIN_API ResourceTag() = default;
    AWS_RECYCLEBIN_API ResourceTag(Aws::Utils::Json::JsonView jsonValue);
    AWS_RECYCLEBIN_API ResourceTag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RECYCLEBIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The tag key.</p>
     */
    inline const Aws::String& GetResourceTagKey() const { return m_resourceTagKey; }
    inline bool ResourceTagKeyHasBeenSet() const { return m_resourceTagKeyHasBeenSet; }
    template<typename ResourceTagKeyT = Aws::String>
    void SetResourceTagKey(ResourceTagKeyT&& value) { m_resourceTagKeyHasBeenSet = true; m_resourceTagKey = std::forward<ResourceTagKeyT>(value); }
    template<typename ResourceTagKeyT = Aws::String>
    ResourceTag& WithResourceTagKey(ResourceTagKeyT&& value) { SetResourceTagKey(std::forward<ResourceTagKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag value.</p>
     */
    inline const Aws::String& GetResourceTagValue() const { return m_resourceTagValue; }
    inline bool ResourceTagValueHasBeenSet() const { return m_resourceTagValueHasBeenSet; }
    template<typename ResourceTagValueT = Aws::String>
    void SetResourceTagValue(ResourceTagValueT&& value) { m_resourceTagValueHasBeenSet = true; m_resourceTagValue = std::forward<ResourceTagValueT>(value); }
    template<typename ResourceTagValueT = Aws::String>
    ResourceTag& WithResourceTagValue(ResourceTagValueT&& value) { SetResourceTagValue(std::forward<ResourceTagValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceTagKey;
    bool m_resourceTagKeyHasBeenSet = false;

    Aws::String m_resourceTagValue;
    bool m_resourceTagValueHasBeenSet = false;
  };

} // namespace Model
} // namespace RecycleBin
} // namespace Aws
